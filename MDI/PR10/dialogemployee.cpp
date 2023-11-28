#include "dialogemployee.h"
#include "ui_dialogemployee.h"

DialogEmployee::DialogEmployee(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::DialogEmployee)
{
    ui->setupUi(this);
}

DialogEmployee::~DialogEmployee()
{
    delete ui;
}

Employee DialogEmployee::getEmployee() const
{
    int id = ui->idLineEdit->text().toInt();
    QString surname = ui->surnameLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString position = ui->positionLineEdit->text();
    int numberOfPhone = ui->phoneLineEdit->text().toInt();
    QString dataOfBirth = ui->birthDateEdit->date().toString("yyyy-MM-dd");
    QString email = ui->emailLineEdit->text();
    double currentSalary = ui->salaryDoubleSpinBox->value();
    QString dataOfEmployment = ui->employmentDateEdit->date().toString("yyyy-MM-dd");

    return Employee(id, surname, name, position, numberOfPhone, dataOfBirth, email, currentSalary, dataOfEmployment);
}

void DialogEmployee::setEmployee(const Employee &employee)
{
    ui->idLineEdit->setText(QString::number(employee.getId()));
    ui->surnameLineEdit->setText(employee.getSurname());
    ui->nameLineEdit->setText(employee.getName());
    ui->positionLineEdit->setText(employee.getPosition());
    ui->phoneLineEdit->setText(QString::number(employee.getNumberOfPhone()));
    ui->birthDateEdit->setDate(QDate::fromString(employee.getDataOfBirth(), "yyyy-MM-dd"));
    ui->emailLineEdit->setText(employee.getEmail());
    ui->salaryDoubleSpinBox->setValue(employee.getCurrentSalary());
    ui->employmentDateEdit->setDate(QDate::fromString(employee.getDataOfEmployment(), "yyyy-MM-dd"));
}

void DialogEmployee::on_buttonBox_accepted()
{
    accept();
}

void DialogEmployee::on_buttonBox_rejected()
{
    reject();
}
