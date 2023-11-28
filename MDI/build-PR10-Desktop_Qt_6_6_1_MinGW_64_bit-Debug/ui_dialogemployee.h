/********************************************************************************
** Form generated from reading UI file 'dialogemployee.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEMPLOYEE_H
#define UI_DIALOGEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogEmployee
{
public:
    QWidget *layoutWidget;
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
    QWidget *layoutWidget_2;
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
    QPushButton *pushButton;

    void setupUi(QDialog *dialogEmployee)
    {
        if (dialogEmployee->objectName().isEmpty())
            dialogEmployee->setObjectName("dialogEmployee");
        dialogEmployee->resize(428, 402);
        layoutWidget = new QWidget(dialogEmployee);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 114, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        layoutWidget_2 = new QWidget(dialogEmployee);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(150, 20, 251, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName("lineEdit_9");

        verticalLayout_2->addWidget(lineEdit_9);

        lineEdit_7 = new QLineEdit(layoutWidget_2);
        lineEdit_7->setObjectName("lineEdit_7");

        verticalLayout_2->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName("lineEdit_8");

        verticalLayout_2->addWidget(lineEdit_8);

        pushButton = new QPushButton(dialogEmployee);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 330, 171, 41));

        retranslateUi(dialogEmployee);

        QMetaObject::connectSlotsByName(dialogEmployee);
    } // setupUi

    void retranslateUi(QDialog *dialogEmployee)
    {
        dialogEmployee->setWindowTitle(QCoreApplication::translate("dialogEmployee", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dialogEmployee", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("dialogEmployee", "Surname:", nullptr));
        label_3->setText(QCoreApplication::translate("dialogEmployee", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("dialogEmployee", "Data of birth:", nullptr));
        label_5->setText(QCoreApplication::translate("dialogEmployee", "Number of phone:", nullptr));
        label_6->setText(QCoreApplication::translate("dialogEmployee", "Email:", nullptr));
        label_7->setText(QCoreApplication::translate("dialogEmployee", "Position:", nullptr));
        label_8->setText(QCoreApplication::translate("dialogEmployee", "Current salary:", nullptr));
        label_9->setText(QCoreApplication::translate("dialogEmployee", "Data of employment:", nullptr));
        pushButton->setText(QCoreApplication::translate("dialogEmployee", "Create object", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogEmployee: public Ui_dialogEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEMPLOYEE_H
