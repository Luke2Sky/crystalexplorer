#pragma once
#include <QTextTable>
#include <QTextCursor>
#include <QStringList>
#include <QColor>

class InfoTable {
public:
    InfoTable(QTextCursor& cursor, int rows, int cols);

    void insertTableHeader(const QStringList& tableHeader);
    void insertColorBlock(int row, int column, const QColor& color);
    void insertCellValue(int row, int column, const QString& valueString, Qt::Alignment alignment = Qt::AlignLeft);
    void setColumnAlignment(int column, Qt::Alignment alignment);

    QTextTable* table() const { return m_table; }

private:
    void setCellAlignment(const QTextTableCell& cell, Qt::Alignment alignment, bool isHeader=false);
    QTextCursor getCellCursor(int row, int column) const;

    QTextTable* m_table;
    QVector<Qt::Alignment> m_columnAlignments;
};
