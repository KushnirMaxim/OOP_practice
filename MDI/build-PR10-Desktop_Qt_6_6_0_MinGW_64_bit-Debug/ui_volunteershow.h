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
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_VolunteerShow
{
public:
    QListWidget *volunteerList;

    void setupUi(QDialog *VolunteerShow)
    {
        if (VolunteerShow->objectName().isEmpty())
            VolunteerShow->setObjectName("VolunteerShow");
        VolunteerShow->resize(564, 440);
        volunteerList = new QListWidget(VolunteerShow);
        volunteerList->setObjectName("volunteerList");
        volunteerList->setGeometry(QRect(10, 10, 541, 401));

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
