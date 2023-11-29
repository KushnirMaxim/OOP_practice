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
    Volunteer();
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

    void setId(int id) override;
    void setSurname(string surname) override;
    void setName(string name) override;
    void setNumberOfPhone(int numberOfPhone) override;
    void setDataOfBirth(string dataOfBirth) override;
    void setEmail(string email) override;
    void setAddress(string address);
    void setActivity(string activity);
    void setStatus(string status);



};

#endif // VOLUNTEER_H
