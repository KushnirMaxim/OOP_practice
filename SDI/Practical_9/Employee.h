#pragma once
#include<iostream>

using namespace std;
class Employee
{
private:
	int id;
	string surname;
	string name;
	string position;
	string dataOfBirth;
	int numberOfPhone;
	string email;
	double currentSalary;
	string dataOfEmployment;

public:
	Employee();
	Employee(int, string, string, string, string, int, string, double, string);
	Employee(Employee& other);
	~Employee();
    //    string toString();
};
