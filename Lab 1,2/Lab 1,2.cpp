
#include <iostream>
#include"Employee.h"

    using namespace std;



    ostream& operator<<(ostream & os, const Employee & employee) {

        os << endl << "id = " << employee.id << endl << "Surname = " << employee.surname << endl << "name = " << employee.name << endl << "Position =" << employee.position << endl << "Data of birth = " << employee.dataOfBirth << endl << "Number of phone = " << employee.numberOfPhone << endl << "email = " << employee.email << endl << "Current salary = " << employee.currentSalary << endl << "Data of employment =" << employee.dataOfEmployment << endl << "--------------------------" << endl;

        return os;

    }

    istream& operator>>(istream & is, Employee & employee)

    {

        is >> employee.id >> employee.surname >> employee.name >> employee.position >> employee.dataOfBirth >> employee.numberOfPhone >> employee.email >> employee.currentSalary >> employee.dataOfEmployment;

        return is;

    }





    int main()

    {

        setlocale(LC_CTYPE, "ukr");

        Employee obj1, obj2, obj3;

        cout << "id,surname,name,position,data of birth, number of phone, email, current salary, data of employment" << endl;

        cin >> obj1;

        cout << "id,surname,name,position,data of birth, number of phone, email, current salary, data of employment" << endl;

        cin >> obj2;

        cout << "id,surname,name,position,data of birth, number of phone, email, current salary, data of employment" << endl;

        cin >> obj3;

        cout << obj1 << endl << obj2 << endl << obj3;

        if (obj1 == obj2) {

            cout << "Об'єкти 1 i 2 одинаковi" << endl;

        }

        else cout << "Об'єкти 1 i 2 різнi" << endl;



        if (obj2 == obj3) {

            cout << "Об'єкти 2 i 3 одинаковi" << endl;

        }

        else cout << "Об'єкти 2 i 3 різнi" << endl;


      


    }



