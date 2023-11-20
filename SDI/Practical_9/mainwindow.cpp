#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include<QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->leID->text().isEmpty() || ui->leName->text().isEmpty()
        || ui->leSurname->text().isEmpty() || ui->leEmail->text().isEmpty()
        || ui->leNumberOfPhone->text().isEmpty() || ui->leDataOfEmployement->text().isEmpty()
        || ui->lePosition->text().isEmpty() || ui->leDataOfBirth->text().isEmpty()
        || ui->leCurrentSalary->text().isEmpty()) {
        QMessageBox::warning(this, "Практична 9", "Заповніть всі обов'язкові дані");
    } else {
        employee = new Employee(ui->leID->text().toInt(),
                                ui->leSurname->text().toStdString(),
                                ui->leName->text().toStdString(),
                                ui->lePosition->text().toStdString(),
                                ui->leDataOfBirth->text().toStdString(),
                                ui->leNumberOfPhone->text().toInt(),
                                ui->leEmail->text().toStdString(),
                                ui->leCurrentSalary->text().toDouble(),
                                ui->leDataOfEmployement->text().toStdString());

        QMessageBox::about(this,
                           "Повідомлення про створення нового об'єкту",
                           "Employee\nID= " + ui->leID->text() + "\nName= " + ui->leName->text()
                               + "\nSurname= " + ui->leSurname->text()
                               + "\nPosition= " + ui->lePosition->text() + "\nData of Birth = "
                               + ui->leDataOfBirth->text() + "\nNumber of phone = "
                               + ui->leNumberOfPhone->text() + "\nEmail = " + ui->leEmail->text()
                               + "\nCurrent salary = " + ui->leCurrentSalary->text()
                               + "\nData of employment = " + ui->leDataOfEmployement->text());
    }
}

void MainWindow::on_actCreate_triggered()
{
    if (ui->leID->text().isEmpty() || ui->leName->text().isEmpty()
        || ui->leSurname->text().isEmpty() || ui->leEmail->text().isEmpty()
        || ui->leNumberOfPhone->text().isEmpty() || ui->leDataOfEmployement->text().isEmpty()
        || ui->lePosition->text().isEmpty() || ui->leDataOfBirth->text().isEmpty()
        || ui->leCurrentSalary->text().isEmpty()) {
        QMessageBox::warning(this, "Практична 9", "Заповніть всі обов'язкові дані");
    } else {
        employee = new Employee(ui->leID->text().toInt(),
                                ui->leSurname->text().toStdString(),
                                ui->leName->text().toStdString(),
                                ui->lePosition->text().toStdString(),
                                ui->leDataOfBirth->text().toStdString(),
                                ui->leNumberOfPhone->text().toInt(),
                                ui->leEmail->text().toStdString(),
                                ui->leCurrentSalary->text().toDouble(),
                                ui->leDataOfEmployement->text().toStdString());


}

}
void MainWindow::on_actDisplay_triggered()
{
        QMessageBox::about(this,
                           "Повідомлення про створення нового об'єкту",
                           "Employee\nID= " + ui->leID->text() + "\nName= " + ui->leName->text()
                               + "\nSurname= " + ui->leSurname->text()
                               + "\nPosition= " + ui->lePosition->text() + "\nData of Birth = "
                               + ui->leDataOfBirth->text() + "\nNumber of phone = "
                               + ui->leNumberOfPhone->text() + "\nEmail = " + ui->leEmail->text()
                               + "\nCurrent salary = " + ui->leCurrentSalary->text()
                               + "\nData of employment = " + ui->leDataOfEmployement->text());
}




void MainWindow::on_actClose_triggered()
{
        QApplication::quit();
}

