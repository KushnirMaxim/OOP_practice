#include "volunteercreate.h"
#include "ui_volunteercreate.h"

VolunteerCreate::VolunteerCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VolunteerCreate)
{
    ui->setupUi(this);
}

VolunteerCreate::~VolunteerCreate()
{
    delete ui;
}

void VolunteerCreate::on_pbCreate_clicked()
{
    id = ui->leId->text();
    surname = ui->leSurname->text();
    name = ui->leName->text();
    dataOfBirth = ui->leBirth->text();
    numberOfPhone = ui->lePhoneNum->text();
    email = ui->leEmail->text();
    activity = ui->leActivity->text();
    address = ui->leAddress->text();
    status = ui->leStatus->text();
    if(ui->leId->text().isEmpty() || ui->leSurname->text().isEmpty() || ui->leName->text().isEmpty() || ui->leBirth->text().isEmpty() || ui->lePhoneNum->text().isEmpty() || ui->leEmail->text().isEmpty() || ui->leActivity->text().isEmpty() || ui->leAddress->text().isEmpty() || ui->leStatus->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
    }
    else {
        Volunteer vol;
        vol.setId(id.toInt());
        vol.setSurname(surname.toStdString());
        vol.setName(name.toStdString());
        vol.setDataOfBirth(dataOfBirth.toStdString());
        vol.setNumberOfPhone(numberOfPhone.toInt());
        vol.setEmail(email.toStdString());
        vol.setAddress(address.toStdString());
        vol.setActivity(activity.toStdString());
        vol.setStatus(status.toStdString());

        if (db->insertIntoTable(vol)) {
            QMessageBox::information(this, "Volunteer`s creating", "Object is created");
        }
        else {
            QMessageBox::warning(this, "Error", "Error with the database!");
        }
    }
}

