#pragma once
#include<iostream>
#include"Human.h"
using namespace std;

class Employee:public Human
{

private:

    string position;

    double currentSalary;

    string dataOfEmployment;


public:
    int getId();

    Employee();

    Employee(int, string, string, string, int, string, string, double, string);

    Employee(Employee& other);

    ~Employee();

    void setObj()override;

    void Hello() override;

    void print()override;
};