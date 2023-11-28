#include "dialogvolunteer.h"
#include "ui_dialogvolunteer.h"
#include "volunteer.h"  // Включено для доступу до класу Volunteer

DialogVolunteer::DialogVolunteer(QWidget *parent)
    : QDialog(parent), ui(new Ui::DialogVolunteer)
{
    ui->setupUi(this);
}

DialogVolunteer::~DialogVolunteer()
{
    delete ui;
}

Volunteer DialogVolunteer::getVolunteer() const
{
    int id = ui->idLineEdit->text().toInt();
    QString surname = ui->surnameLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString activity = ui->activityLineEdit->text();
    int numberOfPhone = ui->phoneLineEdit->text().toInt();
    QString dataOfBirth = ui->birthDateEdit->text();
    QString email = ui->emailLineEdit->text();
    QString startDate = ui->startDateEdit->text();

    return Volunteer(id, surname, name, activity, numberOfPhone, dataOfBirth, email, startDate);
}

void DialogVolunteer::setVolunteer(const Volunteer &volunteer)
{
    ui->idLineEdit->setText(QString::number(volunteer.getId()));
    ui->surnameLineEdit->setText(volunteer.getSurname());
    ui->nameLineEdit->setText(volunteer.getName());
    ui->activityLineEdit->setText(volunteer.getActivity());
    ui->phoneLineEdit->setText(QString::number(volunteer.getNumberOfPhone()));
    ui->birthDateEdit->setText(volunteer.getDataOfBirth());
    ui->emailLineEdit->setText(volunteer.getEmail());
    ui->startDateEdit->setText(volunteer.getStartDate());
}

void DialogVolunteer::on_buttonBox_accepted()
{
    accept();
}

void DialogVolunteer::on_buttonBox_rejected()
{
    reject();
}
