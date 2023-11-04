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

    virtual void setObj();

    virtual void print();

    virtual void Hello()= 0;;

    virtual ~Human();
};

