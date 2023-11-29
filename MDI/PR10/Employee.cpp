#include "employee.h"

Employee::Employee(int id,  std::string surname,  std::string name,  std::string position,
                             int numberOfPhone,  std::string dataOfBirth,  std::string email,
                             double currentSalary,  std::string dataOfEmployment)
                            : Human(id, surname, name, dataOfBirth, numberOfPhone, email), position(position),
                            currentSalary(currentSalary), dataOfEmployment(dataOfEmployment)
{

}

int Employee::getId()
{
    return Human::getId();
}

string Employee::getSurname()
{
    return Human::getSurname();
}

string Employee::getName()
{
    return Human::getName();
}


int Employee::getNumberOfPhone()
{
    return Human::getNumberOfPhone();
}

string Employee::getDataOfBirth()
{
    return Human::getDataOfBirth();
}

string Employee::getEmail()
{
    return Human::getEmail();
}

double Employee::getCurrentSalary()
{
    return currentSalary;
}

string Employee::getDataOfEmployment()
{
    return dataOfEmployment;
}

string Employee::getPosition()
{
    return position;
}
