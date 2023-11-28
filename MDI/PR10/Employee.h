#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
public:
    Employee(int id, const QString &surname, const QString &name, const QString &position,
             int numberOfPhone, const QString &dataOfBirth, const QString &email,
             double currentSalary, const QString &dataOfEmployment);

    int getId() const;
    QString getSurname() const;
    QString getName() const;
    QString getPosition() const;
    int getNumberOfPhone() const;
    QString getDataOfBirth() const;
    QString getEmail() const;
    double getCurrentSalary() const;
    QString getDataOfEmployment() const;

private:
    int id;
    QString surname;
    QString name;
    QString position;
    int numberOfPhone;
    QString dataOfBirth;
    QString email;
    double currentSalary;
    QString dataOfEmployment;
};

#endif // EMPLOYEE_H
