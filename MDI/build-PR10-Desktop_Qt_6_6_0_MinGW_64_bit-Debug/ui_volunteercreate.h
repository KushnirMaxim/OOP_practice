/********************************************************************************
** Form generated from reading UI file 'volunteercreate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUNTEERCREATE_H
#define UI_VOLUNTEERCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VolunteerCreate
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *leId;
    QLineEdit *leSurname;
    QLineEdit *leName;
    QLineEdit *leBirth;
    QLineEdit *lePhoneNum;
    QLineEdit *leEmail;
    QLineEdit *leAddress;
    QLineEdit *leActivity;
    QLineEdit *leStatus;
    QPushButton *pbCreate;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbId;
    QLabel *lbSurname;
    QLabel *lbName;
    QLabel *lbBirth;
    QLabel *lbPhoneNum;
    QLabel *lbEmail;
    QLabel *lbAddress;
    QLabel *lbActivity;
    QLabel *lbStatus;

    void setupUi(QDialog *VolunteerCreate)
    {
        if (VolunteerCreate->objectName().isEmpty())
            VolunteerCreate->setObjectName("VolunteerCreate");
        VolunteerCreate->resize(415, 424);
        layoutWidget_3 = new QWidget(VolunteerCreate);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(140, 30, 251, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        leId = new QLineEdit(layoutWidget_3);
        leId->setObjectName("leId");

        verticalLayout_3->addWidget(leId);

        leSurname = new QLineEdit(layoutWidget_3);
        leSurname->setObjectName("leSurname");

        verticalLayout_3->addWidget(leSurname);

        leName = new QLineEdit(layoutWidget_3);
        leName->setObjectName("leName");

        verticalLayout_3->addWidget(leName);

        leBirth = new QLineEdit(layoutWidget_3);
        leBirth->setObjectName("leBirth");

        verticalLayout_3->addWidget(leBirth);

        lePhoneNum = new QLineEdit(layoutWidget_3);
        lePhoneNum->setObjectName("lePhoneNum");

        verticalLayout_3->addWidget(lePhoneNum);

        leEmail = new QLineEdit(layoutWidget_3);
        leEmail->setObjectName("leEmail");

        verticalLayout_3->addWidget(leEmail);

        leAddress = new QLineEdit(layoutWidget_3);
        leAddress->setObjectName("leAddress");

        verticalLayout_3->addWidget(leAddress);

        leActivity = new QLineEdit(layoutWidget_3);
        leActivity->setObjectName("leActivity");

        verticalLayout_3->addWidget(leActivity);

        leStatus = new QLineEdit(layoutWidget_3);
        leStatus->setObjectName("leStatus");

        verticalLayout_3->addWidget(leStatus);

        pbCreate = new QPushButton(VolunteerCreate);
        pbCreate->setObjectName("pbCreate");
        pbCreate->setGeometry(QRect(120, 340, 171, 41));
        layoutWidget_4 = new QWidget(VolunteerCreate);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 30, 114, 281));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbId = new QLabel(layoutWidget_4);
        lbId->setObjectName("lbId");

        verticalLayout_4->addWidget(lbId);

        lbSurname = new QLabel(layoutWidget_4);
        lbSurname->setObjectName("lbSurname");

        verticalLayout_4->addWidget(lbSurname);

        lbName = new QLabel(layoutWidget_4);
        lbName->setObjectName("lbName");

        verticalLayout_4->addWidget(lbName);

        lbBirth = new QLabel(layoutWidget_4);
        lbBirth->setObjectName("lbBirth");

        verticalLayout_4->addWidget(lbBirth);

        lbPhoneNum = new QLabel(layoutWidget_4);
        lbPhoneNum->setObjectName("lbPhoneNum");

        verticalLayout_4->addWidget(lbPhoneNum);

        lbEmail = new QLabel(layoutWidget_4);
        lbEmail->setObjectName("lbEmail");

        verticalLayout_4->addWidget(lbEmail);

        lbAddress = new QLabel(layoutWidget_4);
        lbAddress->setObjectName("lbAddress");

        verticalLayout_4->addWidget(lbAddress);

        lbActivity = new QLabel(layoutWidget_4);
        lbActivity->setObjectName("lbActivity");

        verticalLayout_4->addWidget(lbActivity);

        lbStatus = new QLabel(layoutWidget_4);
        lbStatus->setObjectName("lbStatus");

        verticalLayout_4->addWidget(lbStatus);


        retranslateUi(VolunteerCreate);

        QMetaObject::connectSlotsByName(VolunteerCreate);
    } // setupUi

    void retranslateUi(QDialog *VolunteerCreate)
    {
        VolunteerCreate->setWindowTitle(QCoreApplication::translate("VolunteerCreate", "Dialog", nullptr));
        pbCreate->setText(QCoreApplication::translate("VolunteerCreate", "Create object", nullptr));
        lbId->setText(QCoreApplication::translate("VolunteerCreate", "ID:", nullptr));
        lbSurname->setText(QCoreApplication::translate("VolunteerCreate", "Surname:", nullptr));
        lbName->setText(QCoreApplication::translate("VolunteerCreate", "Name:", nullptr));
        lbBirth->setText(QCoreApplication::translate("VolunteerCreate", "Data of birth:", nullptr));
        lbPhoneNum->setText(QCoreApplication::translate("VolunteerCreate", "Number of phone:", nullptr));
        lbEmail->setText(QCoreApplication::translate("VolunteerCreate", "Email:", nullptr));
        lbAddress->setText(QCoreApplication::translate("VolunteerCreate", "Address:", nullptr));
        lbActivity->setText(QCoreApplication::translate("VolunteerCreate", "Type of activity:", nullptr));
        lbStatus->setText(QCoreApplication::translate("VolunteerCreate", "Status:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VolunteerCreate: public Ui_VolunteerCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUNTEERCREATE_H
