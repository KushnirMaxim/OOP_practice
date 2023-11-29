/********************************************************************************
** Form generated from reading UI file 'volunteershow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUNTEERSHOW_H
#define UI_VOLUNTEERSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_VolunteerShow
{
public:
    QGridLayout *gridLayout;
    QTableView *volunteerTable;

    void setupUi(QDialog *VolunteerShow)
    {
        if (VolunteerShow->objectName().isEmpty())
            VolunteerShow->setObjectName("VolunteerShow");
        VolunteerShow->resize(648, 436);
        gridLayout = new QGridLayout(VolunteerShow);
        gridLayout->setObjectName("gridLayout");
        volunteerTable = new QTableView(VolunteerShow);
        volunteerTable->setObjectName("volunteerTable");

        gridLayout->addWidget(volunteerTable, 0, 0, 1, 1);


        retranslateUi(VolunteerShow);

        QMetaObject::connectSlotsByName(VolunteerShow);
    } // setupUi

    void retranslateUi(QDialog *VolunteerShow)
    {
        VolunteerShow->setWindowTitle(QCoreApplication::translate("VolunteerShow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VolunteerShow: public Ui_VolunteerShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUNTEERSHOW_H
