#include "volunteer.h"

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
