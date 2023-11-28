#ifndef DIALOGEMPLOYEE_H
#define DIALOGEMPLOYEE_H

#include <QDialog>
#include "employee.h"

namespace Ui {
class DialogEmployee;
}

class DialogEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEmployee(QWidget *parent = nullptr);
    ~DialogEmployee();

    Employee getEmployee() const;
    void setEmployee(const Employee &employee);

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::DialogEmployee *ui;
};

#endif // DIALOGEMPLOYEE_H
