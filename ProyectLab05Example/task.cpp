#include "Task.h"
#include "ui_Task.h"
#include "Edit.h"

Task::Task(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Task)

{
    ui->setupUi(this);
    lblPais = findChild<QLabel*>("lblPais");
    lblCapital = findChild<QLabel*>("lblCapital");
    connect(ui->removeButton, &QPushButton::clicked, [this]{emit removed(this);});
    connect(ui->editButton, &QPushButton::clicked, this, &Task::editTask);
}

Task::~Task()
{
    delete ui;
}

void Task::editTask() {
    Edit *editWidget = new Edit(this);
    connect(editWidget, &Edit::edition, this, &Task::modificar);
    editWidget->exec();
}

void Task::modificar(const QString& nuevoPais, const QString& nuevaCapital) {
    if (lblPais && lblCapital) {
        lblPais->setText(nuevoPais);
        lblCapital->setText(nuevaCapital);
    } else {
        qDebug() << "Error: lblPais o lblCapital es nulo.";
    }
}
