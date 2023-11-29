/********************************************************************************
** Form generated from reading UI file 'employeecreate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEECREATE_H
#define UI_EMPLOYEECREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeCreate
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lbId;
    QLabel *lbSurname;
    QLabel *lbName;
    QLabel *lbBirth;
    QLabel *lbPhoneNum;
    QLabel *lbEmail;
    QLabel *lbPosition;
    QLabel *lbSalary;
    QLabel *lbEmployment;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *leId;
    QLineEdit *leSurname;
    QLineEdit *leName;
    QLineEdit *leBirth;
    QLineEdit *lePhoneNum;
    QLineEdit *leEmail;
    QLineEdit *lePosition;
    QLineEdit *leSalary;
    QLineEdit *leEmployment;
    QPushButton *pbCreate;

    void setupUi(QDialog *EmployeeCreate)
    {
        if (EmployeeCreate->objectName().isEmpty())
            EmployeeCreate->setObjectName("EmployeeCreate");
        EmployeeCreate->resize(437, 426);
        layoutWidget = new QWidget(EmployeeCreate);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 40, 114, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbId = new QLabel(layoutWidget);
        lbId->setObjectName("lbId");

        verticalLayout->addWidget(lbId);

        lbSurname = new QLabel(layoutWidget);
        lbSurname->setObjectName("lbSurname");

        verticalLayout->addWidget(lbSurname);

        lbName = new QLabel(layoutWidget);
        lbName->setObjectName("lbName");

        verticalLayout->addWidget(lbName);

        lbBirth = new QLabel(layoutWidget);
        lbBirth->setObjectName("lbBirth");

        verticalLayout->addWidget(lbBirth);

        lbPhoneNum = new QLabel(layoutWidget);
        lbPhoneNum->setObjectName("lbPhoneNum");

        verticalLayout->addWidget(lbPhoneNum);

        lbEmail = new QLabel(layoutWidget);
        lbEmail->setObjectName("lbEmail");

        verticalLayout->addWidget(lbEmail);

        lbPosition = new QLabel(layoutWidget);
        lbPosition->setObjectName("lbPosition");

        verticalLayout->addWidget(lbPosition);

        lbSalary = new QLabel(layoutWidget);
        lbSalary->setObjectName("lbSalary");

        verticalLayout->addWidget(lbSalary);

        lbEmployment = new QLabel(layoutWidget);
        lbEmployment->setObjectName("lbEmployment");

        verticalLayout->addWidget(lbEmployment);

        layoutWidget_2 = new QWidget(EmployeeCreate);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(150, 40, 251, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        leId = new QLineEdit(layoutWidget_2);
        leId->setObjectName("leId");

        verticalLayout_2->addWidget(leId);

        leSurname = new QLineEdit(layoutWidget_2);
        leSurname->setObjectName("leSurname");

        verticalLayout_2->addWidget(leSurname);

        leName = new QLineEdit(layoutWidget_2);
        leName->setObjectName("leName");

        verticalLayout_2->addWidget(leName);

        leBirth = new QLineEdit(layoutWidget_2);
        leBirth->setObjectName("leBirth");

        verticalLayout_2->addWidget(leBirth);

        lePhoneNum = new QLineEdit(layoutWidget_2);
        lePhoneNum->setObjectName("lePhoneNum");

        verticalLayout_2->addWidget(lePhoneNum);

        leEmail = new QLineEdit(layoutWidget_2);
        leEmail->setObjectName("leEmail");

        verticalLayout_2->addWidget(leEmail);

        lePosition = new QLineEdit(layoutWidget_2);
        lePosition->setObjectName("lePosition");

        verticalLayout_2->addWidget(lePosition);

        leSalary = new QLineEdit(layoutWidget_2);
        leSalary->setObjectName("leSalary");

        verticalLayout_2->addWidget(leSalary);

        leEmployment = new QLineEdit(layoutWidget_2);
        leEmployment->setObjectName("leEmployment");

        verticalLayout_2->addWidget(leEmployment);

        pbCreate = new QPushButton(EmployeeCreate);
        pbCreate->setObjectName("pbCreate");
        pbCreate->setGeometry(QRect(130, 350, 171, 41));

        retranslateUi(EmployeeCreate);

        QMetaObject::connectSlotsByName(EmployeeCreate);
    } // setupUi

    void retranslateUi(QDialog *EmployeeCreate)
    {
        EmployeeCreate->setWindowTitle(QCoreApplication::translate("EmployeeCreate", "Dialog", nullptr));
        lbId->setText(QCoreApplication::translate("EmployeeCreate", "ID:", nullptr));
        lbSurname->setText(QCoreApplication::translate("EmployeeCreate", "Surname:", nullptr));
        lbName->setText(QCoreApplication::translate("EmployeeCreate", "Name:", nullptr));
        lbBirth->setText(QCoreApplication::translate("EmployeeCreate", "Data of birth:", nullptr));
        lbPhoneNum->setText(QCoreApplication::translate("EmployeeCreate", "Number of phone:", nullptr));
        lbEmail->setText(QCoreApplication::translate("EmployeeCreate", "Email:", nullptr));
        lbPosition->setText(QCoreApplication::translate("EmployeeCreate", "Position:", nullptr));
        lbSalary->setText(QCoreApplication::translate("EmployeeCreate", "Current salary:", nullptr));
        lbEmployment->setText(QCoreApplication::translate("EmployeeCreate", "Data of employment:", nullptr));
        pbCreate->setText(QCoreApplication::translate("EmployeeCreate", "Create object", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeCreate: public Ui_EmployeeCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEECREATE_H
