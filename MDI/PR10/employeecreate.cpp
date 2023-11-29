#include "employeecreate.h"
#include "ui_employeecreate.h"

EmployeeCreate::EmployeeCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeCreate)
{
    ui->setupUi(this);
}

EmployeeCreate::~EmployeeCreate()
{
    delete ui;
}

void EmployeeCreate::on_pbCreate_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->leId->text();
    surname = ui->leSurname->text();
    name = ui->leName->text();
    dataOfBirth = ui->leBirth->text();
    numberOfPhone = ui->lePhoneNum->text();
    email = ui->leEmail->text();
    position = ui->lePosition->text();
    currentSalary = ui->leSalary->text();
    dataOfEmployment = ui->leEmployment->text();
    if(ui->leId->text().isEmpty() || ui->leSurname->text().isEmpty() || ui->leName->text().isEmpty() || ui->leBirth->text().isEmpty() || ui->lePhoneNum->text().isEmpty() || ui->leEmail->text().isEmpty() || ui->lePosition->text().isEmpty() || ui->leSalary->text().isEmpty() || ui->leEmployment->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
    }
    else {
        Employee emp;
        emp.setId(id.toInt());
        emp.setSurname(surname.toStdString());
        emp.setName(name.toStdString());
        emp.setDataOfBirth(dataOfBirth.toStdString());
        emp.setNumberOfPhone(numberOfPhone.toInt());
        emp.setEmail(email.toStdString());
        emp.setPosition(position.toStdString());
        emp.setCurrentSalary(currentSalary.toDouble());
        emp.setDataOfEmployment(dataOfEmployment.toStdString());

        if (db->insertIntoTable(emp)) {
            QMessageBox::information(this, "Employee`s creating", "Object is created");
        }
        else {
            QMessageBox::warning(this, "Error", "Error with the database!");
        }
    }  
}

