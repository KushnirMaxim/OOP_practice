#pragma once

#include<iostream>

using namespace std;

class Volunteer
{

private:

    int id;

    string surname;

    string name;

    string dataOfBirth;

    int numberOfPhone;

    string address;

    string email;

    string typeOfActivity;

    int status;

    string typeOfStatus;

public:

    Volunteer();

    Volunteer(int, string, string, string, string, int, string, string,int);

    Volunteer(Volunteer& other);


    ~Volunteer();
    void print();
};