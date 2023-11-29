#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include "Human.h"

class Volunteer : public Human
{
private:
    string address;
    string activity;
    string status;

public:
    Volunteer(int id, string surname, string name, string activity, string address,
              int numberOfPhone, string dataOfBirth, string email,
              string status);

    int getId() override;
    string getSurname() override;
    string getName() override;
    int getNumberOfPhone() override;
    string getDataOfBirth() override;
    string getEmail() override;
    string getActivity();
    string getStatus();
    string getAddress();



};

#endif // VOLUNTEER_H
