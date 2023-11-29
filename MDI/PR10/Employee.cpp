#include "employee.h"

Employee::Employee(){
    Human();
    position = "";
    currentSalary = 0;
    dataOfEmployment = "";
}
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

void Employee::setId(int id) {
    Human::setId(id);
}

void Employee::setSurname(string surname) {
    Human::setSurname(surname);
}

void Employee::setName(string name) {
    Human::setName(name);
}

void Employee::setNumberOfPhone(int numberOfPhone) {
    Human::setNumberOfPhone(numberOfPhone);
}

void Employee::setDataOfBirth(string dataOfBirth) {
    Human::setDataOfBirth(dataOfBirth);
}

void Employee::setEmail(string email) {
    Human::setEmail(email);
}

void Employee::setPosition(string position) {
    this->position = position;
}

void Employee::setCurrentSalary(double currentSalary) {
    this->currentSalary = currentSalary;
}

void Employee::setDataOfEmployment(string dataOfEmployment) {
    this->dataOfEmployment = dataOfEmployment;
}
