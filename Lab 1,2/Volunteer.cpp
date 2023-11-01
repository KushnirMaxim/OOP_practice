#include "Volunteer.h"

Volunteer::Volunteer()
{
}

Volunteer::Volunteer(int id, string surname, string name, string dataOfBirth, int numberOfPhone, string email,string address,string typeOfActiviti,int status):Human(id,surname,name,dataOfBirth,numberOfPhone,email)
{

    this->address = address;
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

Volunteer::Volunteer(const Volunteer& other):Human(other)
{
    this->address = address;

    this->typeOfActivity = other.typeOfActivity;

    this->status = other.status;

    if (this->status == 1) {
        this->typeOfStatus = "Active";
    }
    else if (this->status == 2) {
        this->typeOfStatus = "Pasive";
    }
    else if (this->status == 3) {
        this->typeOfStatus = "Suspended";
    }
    else  this->typeOfStatus = "indefinite";
}

Volunteer::~Volunteer()
{
}

void Volunteer::print()
{
    cout << "-----------------------" << endl;
    Human::print();
    cout << "Address = " << this->address << endl;
    cout << "Type Of Status = " << this->typeOfStatus << endl;
    cout << "-----------------------" << endl;
}


