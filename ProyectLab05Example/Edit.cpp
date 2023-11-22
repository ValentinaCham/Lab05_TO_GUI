#include "Edit.h"
#include "ui_Edit.h"

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);
    txtPais = findChild<QLineEdit*>("txtPais");
    txtCapital = findChild<QLineEdit*>("txtCapital");
    if (!ui || !txtPais || !txtCapital) {
        qDebug() << "Error: Algunos elementos de la interfaz no fueron encontrados.";
    }
    connect(ui->btnEdit, &QPushButton::clicked, [this]{emit edition(ui->txtPais->text(), ui->txtCapital->text());});
}

Edit::~Edit()
{
    delete ui;
}
