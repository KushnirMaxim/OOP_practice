#ifndef VOLUNTEERCREATE_H
#define VOLUNTEERCREATE_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "Employee.h"
#include "Volunteer.h"
#include "volunteercreate.h"
#include "sqlite.h"

namespace Ui {
class VolunteerCreate;
}

class VolunteerCreate : public QDialog
{
    Q_OBJECT

signals:
    void volunteerCreated(Volunteer*);

public:
    explicit VolunteerCreate(QWidget *parent = nullptr);
    ~VolunteerCreate();

private slots:
    void on_pbCreate_clicked();

private:
    Ui::VolunteerCreate *ui;
    Volunteer* vol;
    QString id, surname, name, dataOfBirth, numberOfPhone, email, activity, address, status;
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // VOLUNTEERCREATE_H
