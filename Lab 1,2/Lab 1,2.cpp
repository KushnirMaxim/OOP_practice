#include <iostream>
#include"Employee.h"
#include"Volunteer.h"
#include"Human.h"

using namespace std;

void CreateObject(Human* ptr[],int i) {
	int a;
	cout << "Введіть який об'єкт ви хочете створити employee(1) або volunteer(2)" << endl;
	cin >> a;

	if (a == 1) {
		ptr[i]=new Employee;
		
	}
	else if (a == 2) {
		ptr[i]=new Volunteer;
		
	}
	else
	{
		cout << "Помилка" << endl;
	}
}

  

int main()
{
	setlocale(LC_CTYPE, "ukr");
	
	Human* ptr[5];
	for (int i = 0; i < 5; i++) {
		CreateObject(ptr,i);
		ptr[i]->setObj();
	}

	for (int i = 0; i < 5; i++) {
		ptr[i]->print();
	}
	for (int i = 0; i < 5; i++) {
		ptr[i]->Hello();
	}
}



