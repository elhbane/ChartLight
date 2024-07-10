#ifndef SUPERVISIONWINDOW_H
#define SUPERVISIONWINDOW_H

#include <qwidget.h>
#include <QGridLayout>
#include <QDebug>
#include <QLineEdit>
#include <QListWidget>
#include <QListWidgetItem>

#include "button.h"

class SupervisionWindow : public QWidget
{
    Q_OBJECT

public:
    SupervisionWindow(QWidget *parent = nullptr);

private slots:
    void addTask();
//     void removeTask();
//     void clearTodo();

    void updateUserTodo();
//     void retrieveUserTodo();

//     void addUser();
//     void removeUser();
//     void selectUser();

private:
    Button *addUserBtn;
    Button *removeUserBtn;
    Button *removeGUIBtn;
    Button *clearTodoBtn;
    Button *addTaskBtn;
    Button *sendTodoBtn;
    Button *retrieveTodoBtn;

    QLineEdit *taskInputBox;
    QListWidget *localTodoList;
};
#endif // SUPERVISIONWINDOW_H
