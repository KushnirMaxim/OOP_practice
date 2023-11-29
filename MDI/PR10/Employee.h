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


};

#endif // EMPLOYEE_H
