#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(int id, string surname, string name, string position, string dataOfBirth, int numberOfPhone, string email, double currentSalary, string dataOfEmployment)
{
	this->id = id;
	this->surname = surname;
	this->name = name;
	this->position = position;
	this->dataOfBirth = dataOfBirth;
	this->numberOfPhone = numberOfPhone;
	this->email = email;
    this->currentSalary = currentSalary;
    this->dataOfEmployment = dataOfEmployment;
}

Employee::Employee(Employee& other)
{
	this->id = other.id;
	this->surname = other.surname;
	this->name = other.name;
	this->position = other.position;
	this->dataOfBirth = other.dataOfBirth;
	this->numberOfPhone = other.numberOfPhone;
	this->email = other.email;
    this->currentSalary = other.currentSalary;
    this->dataOfEmployment = other.dataOfEmployment;
}

Employee::~Employee()
{
}

//string Employee::toString()
//{
//    return ("Empluyee \n ID=%d\nSurname=%s\nName=%s\nPosition=%s\nData of birth =%s\nNumber "
//            "of phone=%d \nEmail=%s\nCurrent salary=%f\nData of employment=%s",
//            id,
//            surname,
//            name,
//            position,
//            dataOfBirth,
//            numberOfPhone,
//            email,
//            currentSalary,
//            dataOfEmployment);
//}
