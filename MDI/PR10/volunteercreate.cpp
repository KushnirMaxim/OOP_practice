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
    try{
    if(ui->leId->text().isEmpty() || ui->leSurname->text().isEmpty() || ui->leName->text().isEmpty() || ui->leBirth->text().isEmpty() || ui->lePhoneNum->text().isEmpty() || ui->leEmail->text().isEmpty() || ui->leActivity->text().isEmpty() || ui->leAddress->text().isEmpty() || ui->leStatus->text().isEmpty()){
        throw std::runtime_error("Error in entering data about Volunteer - some fields are empty");
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
        try{
        if (db->insertIntoTable(vol)) {
            QMessageBox::information(this, "Volunteer`s creating", "Object is created");
        }
        }catch(const std::exception &e){
        QMessageBox::warning(this, "Error", "Error with the database!");
        qCritical() << "Exception in: " << e.what();
        }
    }
    }catch(const std::exception &ex){
    QMessageBox::warning(this, "Error", "Empty fields");
    qWarning() << "Exception in: " << ex.what();
    }
}


