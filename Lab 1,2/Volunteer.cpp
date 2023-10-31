#include "Volunteer.h"

Volunteer::Volunteer()
{
}

Volunteer::Volunteer(int id, string surname, string name, string address , string dataOfBirth, int numberOfPhone, string email, string typeOfActivity,int status)
{

    this->id = id;

    this->surname = surname;

    this->name = name;

    this->address = address;

    this->dataOfBirth = dataOfBirth;

    this->numberOfPhone = numberOfPhone;

    this->email = email;

    this->typeOfActivity = typeOfActivity;
    this->status = status;
    if (status == 1) {
        this->typeOfStatus = "Active";
    }
    else if (status == 2) {
        this->typeOfStatus = "Pasive";
    } 
    else if (status == 3) {
        this->typeOfStatus = "Suspended";
    }
    else  this->typeOfStatus = "indefinite";
}

Volunteer::Volunteer(Volunteer& other)
{
}

Volunteer::~Volunteer()
{
}

void Volunteer::print()
{
    cout << "-----------------------" << endl;
    cout << "Id = " << this->id << endl;
    cout << "Surname = " << this->surname << endl;
    cout << "Name = " << this->name << endl;
    cout << "Address = " << this->address << endl;
    cout << "Data Of Birth = " << this->dataOfBirth << endl;
    cout << "Number Of Phone = " << this->numberOfPhone << endl;
    cout << "email = " << this->email << endl;
    cout << "Type Of Status = " << this->typeOfStatus << endl;
    cout << "-----------------------" << endl;
}


