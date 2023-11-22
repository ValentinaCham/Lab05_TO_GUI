/********************************************************************************
** Form generated from reading UI file 'Edit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QLineEdit *txtPais;
    QLineEdit *txtCapital;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnEdit;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(369, 153);
        txtPais = new QLineEdit(Edit);
        txtPais->setObjectName("txtPais");
        txtPais->setGeometry(QRect(150, 20, 181, 24));
        txtCapital = new QLineEdit(Edit);
        txtCapital->setObjectName("txtCapital");
        txtCapital->setGeometry(QRect(152, 60, 181, 24));
        label = new QLabel(Edit);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 49, 16));
        label_2 = new QLabel(Edit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 60, 49, 16));
        btnEdit = new QPushButton(Edit);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(120, 110, 131, 24));

        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Edit", "Pa\303\255s", nullptr));
        label_2->setText(QCoreApplication::translate("Edit", "Capital", nullptr));
        btnEdit->setText(QCoreApplication::translate("Edit", "GUARDAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
