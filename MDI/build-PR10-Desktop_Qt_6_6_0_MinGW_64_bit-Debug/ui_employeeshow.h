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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_EmployeeShow
{
public:
    QGridLayout *gridLayout;
    QTableView *employeeTable;

    void setupUi(QDialog *EmployeeShow)
    {
        if (EmployeeShow->objectName().isEmpty())
            EmployeeShow->setObjectName("EmployeeShow");
        EmployeeShow->resize(631, 422);
        gridLayout = new QGridLayout(EmployeeShow);
        gridLayout->setObjectName("gridLayout");
        employeeTable = new QTableView(EmployeeShow);
        employeeTable->setObjectName("employeeTable");

        gridLayout->addWidget(employeeTable, 0, 0, 1, 1);


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
