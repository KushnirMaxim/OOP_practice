/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbCreateEmployee;
    QPushButton *pbShowEmployee;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbCreateVolunteer;
    QPushButton *pbShowVolunteer;
    QPushButton *pbExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(789, 427);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(70, 20, 651, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(110, 120, 221, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pbCreateEmployee = new QPushButton(verticalLayoutWidget);
        pbCreateEmployee->setObjectName("pbCreateEmployee");
        QFont font1;
        font1.setPointSize(14);
        pbCreateEmployee->setFont(font1);

        verticalLayout->addWidget(pbCreateEmployee);

        pbShowEmployee = new QPushButton(verticalLayoutWidget);
        pbShowEmployee->setObjectName("pbShowEmployee");
        pbShowEmployee->setFont(font1);

        verticalLayout->addWidget(pbShowEmployee);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(450, 120, 221, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pbCreateVolunteer = new QPushButton(verticalLayoutWidget_2);
        pbCreateVolunteer->setObjectName("pbCreateVolunteer");
        pbCreateVolunteer->setFont(font1);

        verticalLayout_2->addWidget(pbCreateVolunteer);

        pbShowVolunteer = new QPushButton(verticalLayoutWidget_2);
        pbShowVolunteer->setObjectName("pbShowVolunteer");
        pbShowVolunteer->setFont(font1);

        verticalLayout_2->addWidget(pbShowVolunteer);

        pbExit = new QPushButton(centralwidget);
        pbExit->setObjectName("pbExit");
        pbExit->setGeometry(QRect(340, 330, 91, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        pbExit->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 789, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Employee", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Volunteer", nullptr));
        pbCreateEmployee->setText(QCoreApplication::translate("MainWindow", "Create Employee object", nullptr));
        pbShowEmployee->setText(QCoreApplication::translate("MainWindow", "Show Employee objects", nullptr));
        pbCreateVolunteer->setText(QCoreApplication::translate("MainWindow", "Create Volunteer object", nullptr));
        pbShowVolunteer->setText(QCoreApplication::translate("MainWindow", "Show Volunteer objects", nullptr));
        pbExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
