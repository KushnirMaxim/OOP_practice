#include "volunteer.h"

Volunteer::Volunteer(int id, const QString &surname, const QString &name, const QString &activity,
                     int numberOfPhone, const QString &dataOfBirth, const QString &email,
                     const QString &startDate)
    : id(id), surname(surname), name(name), activity(activity), numberOfPhone(numberOfPhone),
    dataOfBirth(dataOfBirth), email(email), startDate(startDate)
{
}

int Volunteer::getId() const
{
    return id;
}

QString Volunteer::getSurname() const
{
    return surname;
}

QString Volunteer::getName() const
{
    return name;
}

QString Volunteer::getActivity() const
{
    return activity;
}

int Volunteer::getNumberOfPhone() const
{
    return numberOfPhone;
}

QString Volunteer::getDataOfBirth() const
{
    return dataOfBirth;
}

QString Volunteer::getEmail() const
{
    return email;
}

QString Volunteer::getStartDate() const
{
    return startDate;
}
