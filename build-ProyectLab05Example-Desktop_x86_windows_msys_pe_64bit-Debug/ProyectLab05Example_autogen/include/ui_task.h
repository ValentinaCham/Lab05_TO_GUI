/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QLabel *lblPais;
    QLabel *label_2;
    QLabel *lblCapital;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QDialog *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName("Task");
        Task->resize(400, 42);
        horizontalLayout = new QHBoxLayout(Task);
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(Task);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        lblPais = new QLabel(Task);
        lblPais->setObjectName("lblPais");

        horizontalLayout->addWidget(lblPais);

        label_2 = new QLabel(Task);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lblCapital = new QLabel(Task);
        lblCapital->setObjectName("lblCapital");

        horizontalLayout->addWidget(lblCapital);

        editButton = new QPushButton(Task);
        editButton->setObjectName("editButton");

        horizontalLayout->addWidget(editButton);

        removeButton = new QPushButton(Task);
        removeButton->setObjectName("removeButton");

        horizontalLayout->addWidget(removeButton);


        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QDialog *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Dialog", nullptr));
        checkBox->setText(QString());
        lblPais->setText(QCoreApplication::translate("Task", "Per\303\272", nullptr));
        label_2->setText(QCoreApplication::translate("Task", "-", nullptr));
        lblCapital->setText(QCoreApplication::translate("Task", "Lima", nullptr));
        editButton->setText(QCoreApplication::translate("Task", "Edit", nullptr));
        removeButton->setText(QCoreApplication::translate("Task", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
