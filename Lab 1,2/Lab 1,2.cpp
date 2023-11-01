#include <iostream>
#include"Employee.h"
#include"Volunteer.h"
#include"Human.h"

using namespace std;



  

    int main()

    {

        setlocale(LC_CTYPE, "ukr");
        
        Volunteer volunteerA(3, "Kushnir", "Maxim","9_April",38032523, "MaksimKush@gmail.com","9A", "Help", 3);
        
        Volunteer volunteerB(volunteerA);

        volunteerA.print();
        volunteerB.print();

        Human humanB(1,"Pan","Vlad","10_Feb",380494,"email.com");
       
        Human humanA(humanB);

        Employee employeeA(3, "Mib", "Dark", "7_March", 35235, "Komar2314@gmail.com", "Developer", 3000, "8_September");
        Employee employeeB(employeeA);

        employeeA.print();
        employeeB.print();

        humanA.print();
        humanB.print();

    }



