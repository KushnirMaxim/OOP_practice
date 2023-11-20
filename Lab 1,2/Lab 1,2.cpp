#include <iostream>
#include"Employee.h"
#include"Volunteer.h"
#include"Human.h"

using namespace std;

template <typename T>
class Vector {
private:
	T* array= new T[10];
	int size=0;
	int capacity = 10;
public:
	int getSize()
	{
		return size;
	}

	int getCapacity()
	{
		return capacity;
	}

	void push_back(T element) {
		if (size >= capacity) {
			capacity *= 2;
			T* newarray = new T[capacity];
			for (int i = 0; i < size; i++) {
				newarray[i] = array[i]; 
			}
			
			delete[] array;
			array = newarray;
		}
		array[size] = element;
		size++;
	}

	void pop_back()
	{
		if (size > 0) {
			size--;
		}
	}
	T at(int index) const {
		if (index >= 0 && index < size) {
			return array[index];
		}
		else cout << "Помилка" << endl;
	}

	T& operator[](int index) {
		if (index >= 0 && index < size) {
			return array[index];
		}
		else cout << "Помилка" << endl;
	}

};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	Human* ptr = new Employee;
	Human* ptr1 = new Volunteer;
	Vector<Human*> vector;
	vector.push_back(ptr);
	vector.push_back(ptr1);

	cout<<"Capacity = " << vector.getCapacity() << endl;
	cout<<"Size = " << vector.getSize() << endl;

	vector.pop_back();

	cout << "Size = " << vector.getSize() << endl;
	cout <<"Capacity = "  << vector.getCapacity() << endl;

	vector[0]->setObj();
	vector.at(0)->print();
	
}



