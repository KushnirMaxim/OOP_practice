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

    virtual ~Human();
};

