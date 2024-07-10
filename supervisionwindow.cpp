#include "supervisionwindow.h"

SupervisionWindow::SupervisionWindow(QWidget *parent): QWidget(parent){
    QGridLayout *grid = new QGridLayout;

    this->addUserBtn = Button::createButton(this, tr("Add New User"), SLOT(addTask()));
    this->removeUserBtn = Button::createButton(this, tr("REMOVE USER"), SLOT(addTask()));
    this->removeGUIBtn = Button::createButton(this, tr("REMOVE'S GUI USER"), SLOT(addTask()));
    this->clearTodoBtn = Button::createButton(this, tr("Clear ToDo"), SLOT(addTask()));
    this->addTaskBtn = Button::createButton(this, tr("Add to ToDo"), SLOT(addTask()));  // TODO: impliment way to retrieve taskInput
    this->sendTodoBtn = Button::createButton(this, tr("Send to User"), SLOT(updateUserTodo()));  // TODO: setup
    this->retrieveTodoBtn = Button::createButton(this, tr("Retrieve User's ToDo"), SLOT(addTask()));  // TODO: setup

    this->taskInputBox = new QLineEdit();
    this->localTodoList = new QListWidget();

    grid->addWidget(this->addUserBtn,0,0);
    grid->addWidget(this->clearTodoBtn,0,1);
    grid->addWidget(this->addTaskBtn,0,2);
    grid->addWidget(this->sendTodoBtn,0,3);
    grid->addWidget(this->retrieveTodoBtn,0,4);
    grid->addWidget(this->removeGUIBtn,0,5);
    grid->addWidget(this->removeUserBtn,0,6);

    grid->addWidget(this->taskInputBox,1,1,1,5);
    grid->addWidget(this->localTodoList,2,1,1,5);

    setLayout(grid);

    setWindowTitle(tr("Supervion Window"));
    resize(480, 320);
}

// TODO: add a window that confirms the user's decisions

void SupervisionWindow::addTask(){
    if(this->taskInputBox->text() != static_cast<QString>("")){  // TODO: find better method of determining if input is entered
        this->taskInputBox->setDisabled(true);

        //notifyers
        qDebug() << "task added";
        qDebug() << taskInputBox->text();

        // TODO: add safeguard for preventing duplicate tasks within localToo
        QListWidgetItem *task = new QListWidgetItem(this->taskInputBox->text(), this->localTodoList);
        this->localTodoList->addItem(task);

        this->taskInputBox->clear();
        this->taskInputBox->setDisabled(false);
    }
}

void SupervisionWindow::updateUserTodo(){
    qDebug() << "impliment updateUserTodo()";
}
