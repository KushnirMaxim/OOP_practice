/********************************************************************************
** Form generated from reading UI file 'employeeshow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEESHOW_H
#define UI_EMPLOYEESHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeShow
{
public:
    QListWidget *employeeList;

    void setupUi(QDialog *EmployeeShow)
    {
        if (EmployeeShow->objectName().isEmpty())
            EmployeeShow->setObjectName("EmployeeShow");
        EmployeeShow->resize(548, 418);
        employeeList = new QListWidget(EmployeeShow);
        employeeList->setObjectName("employeeList");
        employeeList->setGeometry(QRect(10, 10, 521, 381));

        retranslateUi(EmployeeShow);

        QMetaObject::connectSlotsByName(EmployeeShow);
    } // setupUi

    void retranslateUi(QDialog *EmployeeShow)
    {
        EmployeeShow->setWindowTitle(QCoreApplication::translate("EmployeeShow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeShow: public Ui_EmployeeShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESHOW_H
