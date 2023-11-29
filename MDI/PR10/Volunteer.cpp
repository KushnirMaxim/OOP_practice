#include "volunteer.h"

Volunteer::Volunteer(){
    Human();
    address = "";
    activity = "";
    status = "";
}

Volunteer::Volunteer(int id,  string surname,  string name,  string activity,
                      string address, int numberOfPhone,  string dataOfBirth,
                      string email,  string status)
    : Human(id, surname, name, dataOfBirth, numberOfPhone, email), activity(activity),
    address(address), status(status)
{

}

int Volunteer::getId()
{
    return Human::getId();
}

string Volunteer::getSurname()
{
    return Human::getSurname();
}

string Volunteer::getName()
{
    return Human::getName();
}

int Volunteer::getNumberOfPhone()
{
    return Human::getNumberOfPhone();
}

string Volunteer::getDataOfBirth()
{
    return Human::getDataOfBirth();
}

string Volunteer::getEmail()
{
    return Human::getEmail();
}

string Volunteer::getActivity(){
    return activity;
}

string Volunteer::getAddress(){
    return address;
}

string Volunteer::getStatus(){
    return status;
}

void Volunteer::setId(int id) {
    Human::setId(id);
}

void Volunteer::setSurname(string surname) {
    Human::setSurname(surname);
}

void Volunteer::setName(string name) {
    Human::setName(name);
}

void Volunteer::setNumberOfPhone(int numberOfPhone) {
    Human::setNumberOfPhone(numberOfPhone);
}

void Volunteer::setDataOfBirth(string dataOfBirth) {
    Human::setDataOfBirth(dataOfBirth);
}

void Volunteer::setEmail(string email) {
    Human::setEmail(email);
}

void Volunteer::setAddress(string address) {
    this->address = address;
}

void Volunteer::setActivity(string activity) {
    this->activity = activity;
}

void Volunteer::setStatus(string status) {
    this->status = status;
}
