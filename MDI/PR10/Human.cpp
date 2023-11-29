#include "Human.h"

Human::Human()
{
}

Human::Human(int id, string surname, string name, string dataOfBirth, int numberOfPhone, string email)
{
	this->id = id;
	this->surname = surname;
	this->name = name;
	this->dataOfBirth = dataOfBirth;
	this->numberOfPhone = numberOfPhone;
	this->email = email;
}

Human::Human(const Human& other)
{
	this->id = other.id;
	this->surname = other.surname;
	this->name = other.name;
	this->dataOfBirth = other.dataOfBirth;
	this->numberOfPhone = other.numberOfPhone;
	this->email = other.email;
}

int Human::getId(){
    return id;
}
string Human::getSurname(){
    return surname;
}


string Human::getName(){
    return name;
}

string Human::getDataOfBirth(){
    return dataOfBirth;
}

int Human::getNumberOfPhone(){
    return numberOfPhone;
}

string Human::getEmail(){
    return email;
}


Human::~Human()
{

}
