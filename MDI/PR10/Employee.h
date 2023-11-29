#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Human.h"

class Employee : public Human
{
private:
    string position;
    double currentSalary;
    string dataOfEmployment;

public:
    Employee();
    Employee(int id,  string surname,  string name, string position,
             int numberOfPhone, string dataOfBirth, string email,
             double currentSalary, string dataOfEmployment);

    int getId() override;
    string getSurname() override;
    string getName() override;
    int getNumberOfPhone() override;
    string getDataOfBirth() override;
    string getEmail() override;
    string getPosition();
    double getCurrentSalary();
    string getDataOfEmployment();

    void setId(int id) override;
    void setSurname(string surname) override;
    void setName(string name) override;
    void setNumberOfPhone(int numberOfPhone) override;
    void setDataOfBirth(string dataOfBirth) override;
    void setEmail(string email) override;
    void setPosition(string position);
    void setCurrentSalary(double currentSalary);
    void setDataOfEmployment(string dataOfEmployment);


};

#endif // EMPLOYEE_H
