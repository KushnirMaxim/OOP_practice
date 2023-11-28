#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include <QString>

class Volunteer
{
public:
    Volunteer(int id, const QString &surname, const QString &name, const QString &activity,
              int numberOfPhone, const QString &dataOfBirth, const QString &email,
              const QString &startDate);

    int getId() const;
    QString getSurname() const;
    QString getName() const;
    QString getActivity() const;
    int getNumberOfPhone() const;
    QString getDataOfBirth() const;
    QString getEmail() const;
    QString getStartDate() const;

private:
    int id;
    QString surname;
    QString name;
    QString activity;
    int numberOfPhone;
    QString dataOfBirth;
    QString email;
    QString startDate;
};

#endif // VOLUNTEER_H
