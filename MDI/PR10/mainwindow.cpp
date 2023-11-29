#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(DBManager* dbManager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbManager->connectToDataBase();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbCreateEmployee_clicked()
{
    EmployeeCreate createEmployee;
    createEmployee.setModal(true);
    createEmployee.exec();
}


void MainWindow::on_pbShowEmployee_clicked()
{
    showEmployee = new EmployeeShow(this);
    showEmployee->show();
    showEmployee->setList();
}


void MainWindow::on_pbCreateVolunteer_clicked()
{
    VolunteerCreate createVolunteer;
    createVolunteer.setModal(true);
    createVolunteer.exec();
}


void MainWindow::on_pbShowVolunteer_clicked()
{
    showVolunteer = new VolunteerShow(this);
    showVolunteer->show();
    showVolunteer->setList();
}

void MainWindow::on_pbExit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Exiting programme", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

