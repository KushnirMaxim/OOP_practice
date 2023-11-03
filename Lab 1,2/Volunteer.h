#pragma once

#include<iostream>
#include"Human.h"
using namespace std;

class Volunteer:public Human
{

private:

    string address;

    string typeOfActivity;

    int status;

    string typeOfStatus;

public:

    Volunteer();

    Volunteer(int, string, string, string, int, string,string, string,int);

    Volunteer(const Volunteer& other);

    ~Volunteer();
    
    void Hello()override;

    void setObj()override;

    void print()override;
};