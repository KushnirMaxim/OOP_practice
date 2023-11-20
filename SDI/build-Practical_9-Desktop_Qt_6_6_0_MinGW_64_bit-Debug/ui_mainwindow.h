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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actCreate;
    QAction *actDisplay;
    QAction *actClose;
    QWidget *centralwidget;
    QLabel *lblID;
    QLineEdit *leID;
    QLineEdit *leSurname;
    QLineEdit *leName;
    QLineEdit *lePosition;
    QLineEdit *leEmail;
    QLineEdit *leNumberOfPhone;
    QLineEdit *leDataOfBirth;
    QLineEdit *leDataOfEmployement;
    QLabel *lblSurname;
    QLabel *lblName;
    QLabel *lblPosition;
    QLabel *lblNumberOfPhone;
    QLabel *lblDataOfEmployment;
    QLabel *lblDataOfBirth;
    QLabel *lblEmail;
    QPushButton *pushButton;
    QLabel *lblCurrentSalary;
    QLineEdit *leCurrentSalary;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(519, 333);
        actCreate = new QAction(MainWindow);
        actCreate->setObjectName("actCreate");
        actDisplay = new QAction(MainWindow);
        actDisplay->setObjectName("actDisplay");
        actClose = new QAction(MainWindow);
        actClose->setObjectName("actClose");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lblID = new QLabel(centralwidget);
        lblID->setObjectName("lblID");
        lblID->setGeometry(QRect(30, 20, 21, 21));
        leID = new QLineEdit(centralwidget);
        leID->setObjectName("leID");
        leID->setGeometry(QRect(62, 20, 211, 21));
        leSurname = new QLineEdit(centralwidget);
        leSurname->setObjectName("leSurname");
        leSurname->setGeometry(QRect(82, 50, 191, 21));
        leName = new QLineEdit(centralwidget);
        leName->setObjectName("leName");
        leName->setGeometry(QRect(72, 80, 201, 21));
        lePosition = new QLineEdit(centralwidget);
        lePosition->setObjectName("lePosition");
        lePosition->setGeometry(QRect(82, 110, 191, 21));
        leEmail = new QLineEdit(centralwidget);
        leEmail->setObjectName("leEmail");
        leEmail->setGeometry(QRect(70, 200, 201, 21));
        leNumberOfPhone = new QLineEdit(centralwidget);
        leNumberOfPhone->setObjectName("leNumberOfPhone");
        leNumberOfPhone->setGeometry(QRect(132, 170, 141, 21));
        leDataOfBirth = new QLineEdit(centralwidget);
        leDataOfBirth->setObjectName("leDataOfBirth");
        leDataOfBirth->setGeometry(QRect(102, 140, 171, 21));
        leDataOfEmployement = new QLineEdit(centralwidget);
        leDataOfEmployement->setObjectName("leDataOfEmployement");
        leDataOfEmployement->setGeometry(QRect(152, 230, 121, 21));
        lblSurname = new QLabel(centralwidget);
        lblSurname->setObjectName("lblSurname");
        lblSurname->setGeometry(QRect(30, 50, 51, 21));
        lblName = new QLabel(centralwidget);
        lblName->setObjectName("lblName");
        lblName->setGeometry(QRect(30, 80, 41, 21));
        lblPosition = new QLabel(centralwidget);
        lblPosition->setObjectName("lblPosition");
        lblPosition->setGeometry(QRect(30, 110, 51, 21));
        lblNumberOfPhone = new QLabel(centralwidget);
        lblNumberOfPhone->setObjectName("lblNumberOfPhone");
        lblNumberOfPhone->setGeometry(QRect(30, 170, 111, 21));
        lblDataOfEmployment = new QLabel(centralwidget);
        lblDataOfEmployment->setObjectName("lblDataOfEmployment");
        lblDataOfEmployment->setGeometry(QRect(30, 230, 111, 21));
        lblDataOfBirth = new QLabel(centralwidget);
        lblDataOfBirth->setObjectName("lblDataOfBirth");
        lblDataOfBirth->setGeometry(QRect(30, 140, 91, 21));
        lblEmail = new QLabel(centralwidget);
        lblEmail->setObjectName("lblEmail");
        lblEmail->setGeometry(QRect(30, 200, 101, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 240, 191, 41));
        lblCurrentSalary = new QLabel(centralwidget);
        lblCurrentSalary->setObjectName("lblCurrentSalary");
        lblCurrentSalary->setGeometry(QRect(30, 260, 81, 16));
        leCurrentSalary = new QLineEdit(centralwidget);
        leCurrentSalary->setObjectName("leCurrentSalary");
        leCurrentSalary->setGeometry(QRect(110, 260, 161, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 519, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actCreate);
        menuMenu->addAction(actDisplay);
        menuMenu->addAction(actClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actCreate->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\276\320\261'\321\224\320\272\321\202", nullptr));
        actDisplay->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\276\320\261\321\200\320\260\320\267\320\270\321\202\320\270 \321\201\321\202\320\262\320\276\321\200\320\265\320\275\320\270\320\271 \320\276\320\261'\321\224\320\272\321\202", nullptr));
        actClose->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
        lblID->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Id : </span></p></body></html>", nullptr));
        lblSurname->setText(QCoreApplication::translate("MainWindow", "Surname:", nullptr));
        lblName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        lblPosition->setText(QCoreApplication::translate("MainWindow", "Position:", nullptr));
        lblNumberOfPhone->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of phone:</p></body></html>", nullptr));
        lblDataOfEmployment->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Date of employment:</p></body></html>", nullptr));
        lblDataOfBirth->setText(QCoreApplication::translate("MainWindow", "Data of birth:", nullptr));
        lblEmail->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\276\320\261'\321\224\320\272\321\202", nullptr));
        lblCurrentSalary->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Current salary:</p><p><br/></p></body></html>", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
