#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Task.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), mTasks()
{
    ui->setupUi(this);
    connect(ui->addTaskButton, &QPushButton::clicked, this, &MainWindow::addTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask() {
    Task *newTask = new Task(this);
    mTasks.append(newTask);

    ui->tasksLayout->addWidget(newTask);

    // Ajustar el tamaño del layout para reflejar los cambios
    ui->tasksLayout->activate();

    // Conectar la señal removed de cada nueva tarea a removeTask de MainWindow
    connect(newTask, &Task::removed, this, &MainWindow::removeTask);
}

void MainWindow::removeTask(Task* task) {
    // Eliminar el widget del layout
    ui->tasksLayout->removeWidget(task);

    // Eliminar el widget del QVector
    mTasks.removeOne(task);

    // Eliminar el widget de la memoria
    task->deleteLater();
}
