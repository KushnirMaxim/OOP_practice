#ifndef EMPLOYEECREATE_H
#define EMPLOYEECREATE_H

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
class EmployeeCreate;
}

class EmployeeCreate : public QDialog
{
    Q_OBJECT

signals:
    void employeeCreated(Employee*);

public:
    explicit EmployeeCreate(QWidget *parent = nullptr);
    ~EmployeeCreate();

private slots:
    void on_pbCreate_clicked();

private:
    Ui::EmployeeCreate *ui;
    Employee* emp;
    QString id, surname, name, dataOfBirth, numberOfPhone, email, position, currentSalary, dataOfEmployment;
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // EMPLOYEECREATE_H
