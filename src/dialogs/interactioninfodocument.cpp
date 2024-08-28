#include "interactioninfodocument.h"
#include "infotable.h"
#include "pair_energy_results.h"
#include <QLabel>
#include <QShowEvent>
#include <QTabWidget>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#include <QTextTable>
#include <QVBoxLayout>

InteractionInfoDocument::InteractionInfoDocument(QWidget *parent)
    : QWidget(parent), m_tabWidget(new QTabWidget(this)),
      m_noDataLabel(new QLabel("No interaction information found", this)) {
  QVBoxLayout *layout = new QVBoxLayout(this);
  layout->addWidget(m_tabWidget);
  layout->addWidget(m_noDataLabel);
  m_noDataLabel->hide();

  connect(m_tabWidget, &QTabWidget::currentChanged, this,
          &InteractionInfoDocument::onTabChanged);
}

void InteractionInfoDocument::updateScene(Scene *scene) {
  m_scene = scene;
  updateContent();
}

void InteractionInfoDocument::onTabChanged(int index) {
  if (index >= 0 && index < m_tabWidget->count()) {
    emit currentModelChanged(m_tabWidget->tabText(index));
  }
}

void InteractionInfoDocument::showEvent(QShowEvent *event) {
  QWidget::showEvent(event);
  // Use a single-shot timer to update colors after the widget is fully shown
  QTimer::singleShot(0, this, &InteractionInfoDocument::updateTableColors);
}

void InteractionInfoDocument::updateContent() {
  m_tabWidget->clear();

  if (!m_scene || !m_scene->chemicalStructure()) {
    showNoDataMessage();
    return;
  }

  auto *interactions = m_scene->chemicalStructure()->pairInteractions();

  if (!interactions || interactions->getCount() == 0) {
    showNoDataMessage();
    return;
  }

  m_noDataLabel->hide();
  m_tabWidget->show();

  QList<QString> sortedModels = interactions->interactionModels();
  std::sort(sortedModels.begin(), sortedModels.end());

  for (const QString &model : sortedModels) {
    QWidget *tab = new QWidget(m_tabWidget);
    QVBoxLayout *tabLayout = new QVBoxLayout(tab);

    QTextEdit *textEdit = new QTextEdit(tab);
    textEdit->setReadOnly(true);
    tabLayout->addWidget(textEdit);

    QTextCursor cursor(textEdit->document());
    insertInteractionEnergiesForModel(interactions, cursor, model);

    m_tabWidget->addTab(tab, model);
  }

  if (m_tabWidget->count() > 0) {
    m_tabWidget->setCurrentIndex(0);
  }

  // Update colors immediately after creating content
  updateTableColors();
}

void InteractionInfoDocument::showNoDataMessage() {
  m_tabWidget->hide();
  m_noDataLabel->show();
}

void InteractionInfoDocument::insertInteractionEnergiesForModel(
    PairInteractions *results, QTextCursor &cursor, const QString &model) {
  const int eprec = 3; // You might want to get this from settings

  cursor.insertHtml("<h1>Interaction Energies - " + model + "</h1>");

  QSet<QString> uniqueComponents;
  for (const auto &[index, result] : results->filterByModel(model)) {
    for (const auto &component : result->components()) {
      uniqueComponents.insert(component.first);
    }
  }

  QList<QString> sortedComponents = getOrderedComponents(uniqueComponents);
  QStringList tableHeader{"Color", "Distance", "Symmetry"};
  tableHeader.append(sortedComponents);

  InfoTable infoTable(cursor, results->filterByModel(model).size() + 1,
                      tableHeader.size());

  infoTable.insertTableHeader(tableHeader);

  int row = 1;
  for (const auto &[index, result] : results->filterByModel(model)) {
    int column = 0;

    infoTable.insertColorBlock(row, column++, result->color());
    infoTable.insertCellValue(
        row, column++, QString::number(result->centroidDistance(), 'f', 2),
        Qt::AlignRight);
    infoTable.insertCellValue(row, column++, result->symmetry(),
                              Qt::AlignRight);

    for (const QString &component : sortedComponents) {
      bool found = false;
      for (const auto &pair : result->components()) {
        if (pair.first == component) {
          infoTable.insertCellValue(
              row, column++, QString("%1").arg(pair.second, 6, 'f', eprec),
              Qt::AlignRight);
          found = true;
          break;
        }
      }
      if (!found) {
        infoTable.insertCellValue(row, column++, "-", Qt::AlignRight);
      }
    }
    row++;
  }

  cursor.movePosition(QTextCursor::End);
  cursor.insertText("\n\n");
}

QList<QString> InteractionInfoDocument::getOrderedComponents(
    const QSet<QString> &uniqueComponents) {
  QList<QString> knownComponentsOrder;
  knownComponentsOrder << "coulomb" << "repulsion" << "exchange"
                       << "dispersion";

  QList<QString> sortedComponents;

  // Add known components in the desired order
  for (const QString &component : knownComponentsOrder) {
    if (uniqueComponents.contains(component)) {
      sortedComponents << component;
    }
  }

  // Add remaining components (excluding "total") in ascending order
  QList<QString> remainingComponents = uniqueComponents.values();
  remainingComponents.removeOne("total");
  std::sort(remainingComponents.begin(), remainingComponents.end());
  sortedComponents << remainingComponents;

  // Add "total" component at the end if it exists
  if (uniqueComponents.contains("total")) {
    sortedComponents << "total";
  }

  return sortedComponents;
}

void InteractionInfoDocument::updateTableColors() {
  if (!m_scene || !m_scene->chemicalStructure()) {
    return;
  }

  auto *interactions = m_scene->chemicalStructure()->pairInteractions();
  if (!interactions || interactions->getCount() == 0) {
    return;
  }

  for (int i = 0; i < m_tabWidget->count(); ++i) {
    QTextEdit *textEdit = qobject_cast<QTextEdit *>(
        m_tabWidget->widget(i)->layout()->itemAt(0)->widget());
    if (!textEdit)
      continue;

    QTextDocument *doc = textEdit->document();
    QTextCursor cursor(doc);

    QTextTable *table = cursor.currentTable();
    if (!table)
      continue;

    QString model = m_tabWidget->tabText(i);
    int row = 1; // Start from 1 to skip the header row

    for (const auto &[index, result] : interactions->filterByModel(model)) {
      QTextTableCell cell = table->cellAt(row, 0);
      QTextCharFormat format = cell.format();
      format.setBackground(result->color());
      cell.setFormat(format);
      ++row;
    }
  }
}