#pragma once
#include<iostream>

using namespace std;
class Human
{
private:
    int id;
    string surname;
    string name;
    string dataOfBirth;
    int numberOfPhone;
    string email;

public:
    Human();

    Human(int, string, string, string, int, string);

    Human(const Human& other);

    virtual int getId();
    virtual string getSurname();
    virtual string getName();
    virtual int getNumberOfPhone();
    virtual string getDataOfBirth();
    virtual string getEmail();

    virtual void setId(int id);
    virtual void setSurname(string surname);
    virtual void setName(string name);
    virtual void setNumberOfPhone(int numberOfPhone);
    virtual void setDataOfBirth(string dataOfBirth);
    virtual void setEmail(string email);

    virtual ~Human();
};

