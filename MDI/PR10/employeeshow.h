#ifndef EMPLOYEESHOW_H
#define EMPLOYEESHOW_H

#include <QDialog>
#include <QListWidget>
#include "employeecreate.h"

namespace Ui {
class EmployeeShow;
}

class EmployeeShow : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeShow(QWidget *parent = nullptr);
    void setList(const QVector<Employee *> &employee);
    QListWidget* getListWidget();
    ~EmployeeShow();

private:
    Ui::EmployeeShow *ui;
    QVector<Employee *> employee;
};

#endif // EMPLOYEESHOW_H
