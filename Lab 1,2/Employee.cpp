#include "Employee.h"



Employee::Employee()
{

}



Employee::Employee(int id, string surname, string name, string position, int numberOfPhone, string dataOfBirth, string email, double currentSalary, string dataOfEmployment):Human(id, surname, name, dataOfBirth, numberOfPhone, email)
{

    this->position = position;

    this->dataOfEmployment = dataOfEmployment;

    this->currentSalary = currentSalary;

}



Employee::Employee(Employee& other) :Human(other)
{
    this->position = other.position;

    this->dataOfEmployment = other.dataOfEmployment;

    this->currentSalary = other.currentSalary;
}




Employee::~Employee()
{

}

void Employee::Hello() 
{
    cout << "Hello i am employee" << endl;
}

void Employee::print()
{
    cout << "-----------------------" << endl;
    Human::print();
    cout << "Position = " << this->position << endl;
    cout << "Data of employment = " << this->dataOfEmployment << endl;
    cout << "Current salaty = " << this->currentSalary << endl;
    cout << "-----------------------" << endl;
}
