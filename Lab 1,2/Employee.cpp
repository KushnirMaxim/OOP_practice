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

    this->dataOfEmployment = other.dataOfEmployment;

}



bool Employee::operator==(const Employee& obj) const

{

    return this->id == obj.id && this->name == obj.name && this->surname == obj.surname && this->position == obj.position && this->dataOfBirth == obj.dataOfBirth && this->numberOfPhone == obj.numberOfPhone && this->email == obj.email && this->dataOfEmployment == obj.dataOfEmployment;

}



Employee::~Employee()

{

}