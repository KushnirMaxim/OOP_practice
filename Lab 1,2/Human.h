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
<<<<<<< HEAD

    virtual void setObj();

=======
    
    int getId()const;

    virtual void setObj();

>>>>>>> ba11805156a954324c9e399c403eb3483a285096
    virtual void print();

    virtual void Hello()= 0;;

    virtual ~Human();
};

