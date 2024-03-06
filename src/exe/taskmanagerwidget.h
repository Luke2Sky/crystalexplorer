#pragma once
#include <QWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QMap>
#include "task.h"
#include "taskmanager.h"

class TaskManagerWidget : public QWidget {
    Q_OBJECT

public:
    TaskManagerWidget(TaskManager *, QWidget *parent = nullptr);
    explicit TaskManagerWidget(QWidget *parent = nullptr);


    static const int TaskIdColumn = 0;
    static const int TaskDescriptionColumn = 1;
    static const int TaskProgressColumn = 2;

    const QIcon& successIcon() const;
    void setSuccessIcon(const QIcon &icon);
    const QIcon& failureIcon() const;
    void setFailureIcon(const QIcon &icon);

private slots:
    void onTaskAdded(TaskID taskId);
    void onTaskComplete(TaskID taskId);
    void onTaskError(TaskID taskId, const QString &error);
    void onTaskProgress(TaskID taskId, int percentage);
    void onTaskProgressText(TaskID taskId, const QString &desc);
    void onStopTaskClicked();

private:
    TaskManager *m_taskManager{nullptr};
    QTableWidget *m_taskTable{nullptr};
    QPushButton *m_stopTaskButton{nullptr};
    QPushButton *m_startTaskButton{nullptr};
    QMap<TaskID, int> m_taskItems;
    QList<TaskID> m_rowTasks;
    QIcon m_successIcon;
    QIcon m_failureIcon;

    void setupUi();
    void connectSignals();
};
