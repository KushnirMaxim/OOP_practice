#include "Human.h"

Human::Human()
{
}

Human::Human(int id, string surname, string name, string dataOfBirth, int numberOfPhone, string email)
{
	this->id = id;
	this->surname = surname;
	this->name = name;
	this->dataOfBirth = dataOfBirth;
	this->numberOfPhone = numberOfPhone;
	this->email = email;
}

Human::Human(const Human& other)
{
	this->id = other.id;
	this->surname = other.surname;
	this->name = other.name;
	this->dataOfBirth = other.dataOfBirth;
	this->numberOfPhone = other.numberOfPhone;
	this->email = other.email;
}

<<<<<<< HEAD
=======
int Human::getId() const
{
	return id;
}

>>>>>>> ba11805156a954324c9e399c403eb3483a285096
void Human::setObj()
{
	cout << "id = " << endl;
	cin >> id;
	cout << "surname = " << endl;
	cin >> surname;
	cout << "name = " << endl;
	cin >> name;
	cout << "dataOfBirth = " << endl;
	cin >> dataOfBirth;
	cout << "numberOfPhone = " << endl;
	cin >> numberOfPhone;
	cout << "email = " << endl;
	cin >> email;
}


void Human::print()
{
	cout << endl << "Id = " << this->id << endl;
	cout << "Surname = " << this->surname << endl;
	cout << "Name = " << this->name << endl;
	cout << "Data Of Birth = " << this->dataOfBirth << endl;
	cout << "Number Of Phone = " << this->numberOfPhone << endl;
	cout << "email = " << this->email << endl;
}




Human::~Human()
{

}
