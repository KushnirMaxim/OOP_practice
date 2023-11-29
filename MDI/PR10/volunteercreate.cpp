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
        vol = new Volunteer(id.toInt(), surname.toStdString(), name.toStdString(), activity.toStdString(), address.toStdString(),  numberOfPhone.toInt(), dataOfBirth.toStdString(), email.toStdString(), status.toStdString());
        emit volunteerCreated(vol);
        QMessageBox::information(this, "Volunteers` creating", "Object is created");
    }
}

