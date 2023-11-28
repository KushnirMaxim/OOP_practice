/********************************************************************************
** Form generated from reading UI file 'dialogvolunteer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVOLUNTEER_H
#define UI_DIALOGVOLUNTEER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogVolunteer
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *dialogVolunteer)
    {
        if (dialogVolunteer->objectName().isEmpty())
            dialogVolunteer->setObjectName("dialogVolunteer");
        dialogVolunteer->resize(400, 379);
        pushButton = new QPushButton(dialogVolunteer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 320, 171, 41));
        widget = new QWidget(dialogVolunteer);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 101, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        widget1 = new QWidget(dialogVolunteer);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(140, 20, 251, 281));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(widget1);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_9 = new QLineEdit(widget1);
        lineEdit_9->setObjectName("lineEdit_9");

        verticalLayout_2->addWidget(lineEdit_9);

        lineEdit_7 = new QLineEdit(widget1);
        lineEdit_7->setObjectName("lineEdit_7");

        verticalLayout_2->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(widget1);
        lineEdit_8->setObjectName("lineEdit_8");

        verticalLayout_2->addWidget(lineEdit_8);


        retranslateUi(dialogVolunteer);

        QMetaObject::connectSlotsByName(dialogVolunteer);
    } // setupUi

    void retranslateUi(QDialog *dialogVolunteer)
    {
        dialogVolunteer->setWindowTitle(QCoreApplication::translate("dialogVolunteer", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("dialogVolunteer", "Create object", nullptr));
        label->setText(QCoreApplication::translate("dialogVolunteer", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("dialogVolunteer", "Surname:", nullptr));
        label_3->setText(QCoreApplication::translate("dialogVolunteer", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("dialogVolunteer", "Data of birth:", nullptr));
        label_5->setText(QCoreApplication::translate("dialogVolunteer", "Number of phone:", nullptr));
        label_6->setText(QCoreApplication::translate("dialogVolunteer", "Email:", nullptr));
        label_7->setText(QCoreApplication::translate("dialogVolunteer", "Addres:", nullptr));
        label_8->setText(QCoreApplication::translate("dialogVolunteer", "Type of activity:", nullptr));
        label_9->setText(QCoreApplication::translate("dialogVolunteer", "Status:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogVolunteer: public Ui_dialogVolunteer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVOLUNTEER_H
