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
        emp = new Employee(id.toInt(), surname.toStdString(), name.toStdString(), position.toStdString(), numberOfPhone.toInt(), dataOfBirth.toStdString(),  email.toStdString(),  currentSalary.toDouble(), dataOfEmployment.toStdString());
        emit employeeCreated(emp);
        QMessageBox::information(this, "Volunteers` creating", "Object is created");
    }
}

