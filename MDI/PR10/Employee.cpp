#include "employee.h"

Employee::Employee(int id, const QString &surname, const QString &name, const QString &position,
                   int numberOfPhone, const QString &dataOfBirth, const QString &email,
                   double currentSalary, const QString &dataOfEmployment)
    : id(id), surname(surname), name(name), position(position),
    numberOfPhone(numberOfPhone), dataOfBirth(dataOfBirth),
    email(email), currentSalary(currentSalary), dataOfEmployment(dataOfEmployment)
{
    // Жодної зміни не потрібно додавати сюди
}

int Employee::getId() const
{
    return id;
}

QString Employee::getSurname() const
{
    return surname;
}

QString Employee::getName() const
{
    return name;
}

QString Employee::getPosition() const
{
    return position;
}

int Employee::getNumberOfPhone() const
{
    return numberOfPhone;
}

QString Employee::getDataOfBirth() const
{
    return dataOfBirth;
}

QString Employee::getEmail() const
{
    return email;
}

double Employee::getCurrentSalary() const
{
    return currentSalary;
}

QString Employee::getDataOfEmployment() const
{
    return dataOfEmployment;
}
