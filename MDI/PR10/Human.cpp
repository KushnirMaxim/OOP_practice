#include "Human.h"

Human::Human()
{
    id = 0;
    surname = "";
    name = "";
    dataOfBirth = "";
    numberOfPhone = 0;
    email = "";
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

void Human::setId(int id) {
    this->id = id;
}

void Human::setSurname(string surname) {
    this->surname = surname;
}

void Human::setName(string name) {
    this->name = name;
}

void Human::setNumberOfPhone(int numberOfPhone) {
    this->numberOfPhone = numberOfPhone;
}

void Human::setDataOfBirth(string dataOfBirth) {
    this->dataOfBirth = dataOfBirth;
}

void Human::setEmail(string email) {
    this->email = email;
}

Human::~Human()
{

}
