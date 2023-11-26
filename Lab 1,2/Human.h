#pragma once
#include<iostream>

using namespace std;
class Human
{
private:
   

    string surname;

    string name;

    string dataOfBirth;

    int numberOfPhone;

    string email;
public:
    int id;
    Human();

    Human(int, string, string, string, int, string);

    Human(const Human& other);
    
    int getId()const;

    virtual void setObj();

    virtual void print();

    virtual void Hello()= 0;;

    virtual ~Human();
};

