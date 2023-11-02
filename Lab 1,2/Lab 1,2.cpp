#include <iostream>
#include"Employee.h"
#include"Volunteer.h"
#include"Human.h"

using namespace std;



  

int main()
{
	Employee employee(1,"text","text","text",2,"text","text",123,"text");

	employee.Hello();
	Volunteer volunteer(1, "text", "text", "text",4, "text", "text", "text",4);

	volunteer.Hello();



}



