#include "volunteershow.h"
#include "ui_volunteershow.h"

VolunteerShow::VolunteerShow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VolunteerShow)
{
    ui->setupUi(this);
}

QListWidget* VolunteerShow::getListWidget() {
    return (ui->volunteerList);
}

VolunteerShow::~VolunteerShow()
{
    delete ui;
}

void VolunteerShow::setList(const QVector<Volunteer *> &volunteer){
    for (Volunteer* vol : volunteer ) {
        QListWidgetItem* item = new QListWidgetItem(ui->volunteerList);
        item->setText(QString::fromStdString(vol->getSurname()));
        item->setData(Qt::UserRole, QVariant::fromValue(vol));
    }
}
