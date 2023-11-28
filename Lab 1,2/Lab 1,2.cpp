<<<<<<< HEAD
=======
<<<<<<< HEAD
﻿#include<iostream>
#include<list>
#include<map>
#include<iterator>
#include<algorithm>
#include<random>
#include"Employee.h"
#include"Human.h"
#include"Volunteer.h"
=======
>>>>>>> ba11805156a954324c9e399c403eb3483a285096
﻿#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "Employee.h"
#include "Volunteer.h"
#include "Human.h"
<<<<<<< HEAD

using namespace std;

<<<<<<< HEAD
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
=======
int main() {
    setlocale(LC_CTYPE, "ukr");
    vector<int> oddNumbers, evenNumbers;

    int value = 1;
    for (int i = 0; i < 10; i++) {
        oddNumbers.push_back(value);
        value += 2;
    }
>>>>>>> cb726029f17989dc6feb6b8375e6e7ab4e6b28ec

    default_random_engine generator;
    uniform_int_distribution<int> distribution(2, 20);
    vector<int>::iterator it = oddNumbers.begin();
    while (it != oddNumbers.end()) {
        *it = distribution(generator) * 2;
        ++it;
    }

    sort(oddNumbers.begin(), oddNumbers.end());
    sort(evenNumbers.begin(), evenNumbers.end());

    vector<int> mergedNumbers(20);
    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(), mergedNumbers.begin());

=======
>>>>>>> cb726029f17989dc6feb6b8375e6e7ab4e6b28ec

using namespace std;

int main() {
<<<<<<< HEAD
    setlocale(LC_ALL, "ukr");
    list<int> oddNumbers;
    list<int> evenNumbers;
    list<int> mergedNumbers;

    for (int i = 1; i <= 19; i += 2) {
        oddNumbers.push_back(i);
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 100);

    for (int i = 0; i < 10; i++) {
        evenNumbers.push_back(dist(gen) * 2);
    }

    oddNumbers.sort();
    evenNumbers.sort();

    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(), back_inserter(mergedNumbers));

    map<int, Human*> humanMap;

    humanMap[1] = new Employee();
    humanMap[2] = new Volunteer();

    int choice;
    do {
        cout << "Оберіть опцію:" << endl;
        cout << "1. Додати об'єкт класу Employee до контейнера" << endl;
        cout << "2. Додати об'єкт класу Volunteer до контейнера" << endl;
        cout << "3. Вивести об'єкт з контейнера за Id" << endl;
        cout << "4. Вийти" << endl;
        cin >> choice;

        if (choice == 1) {
            Employee* emp = new Employee();
            emp->setObj();
            humanMap[emp->getId()] = emp;
        }
        else if (choice == 2) {
            Volunteer* vol = new Volunteer();
            vol->setObj();
            humanMap[vol->getId()] = vol;
        

        }
        else if (choice == 3) {
            int idToFind;
            cout << "Введіть ID для пошуку: ";
            cin >> idToFind;

            auto it = humanMap.find(idToFind);
            if (it != humanMap.end()) {
                it->second->print();
            }
            else {
                cout << "Об'єкт з таким ID не знайдено." << endl;
            }
        }

    } while (choice != 4);

    for (const auto& pair : humanMap) {
        delete pair.second;
    }

    return 0;
=======
    setlocale(LC_CTYPE, "ukr");
    vector<int> oddNumbers, evenNumbers;

    int value = 1;
    for (int i = 0; i < 10; i++) {
        oddNumbers.push_back(value);
        value += 2;
    }

    default_random_engine generator;
    uniform_int_distribution<int> distribution(2, 20);
    vector<int>::iterator it = oddNumbers.begin();
    while (it != oddNumbers.end()) {
        *it = distribution(generator) * 2;
        ++it;
    }

    sort(oddNumbers.begin(), oddNumbers.end());
    sort(evenNumbers.begin(), evenNumbers.end());

    vector<int> mergedNumbers(20);
    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(), mergedNumbers.begin());

>>>>>>> ba11805156a954324c9e399c403eb3483a285096
    cout << "First Vector (Odd Numbers): ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Second Vector (Even Numbers): ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Merged Vector: ";
    for (int num : mergedNumbers) {
        cout << num << " ";
    }
    cout << endl;
<<<<<<< HEAD
=======
>>>>>>> cb726029f17989dc6feb6b8375e6e7ab4e6b28ec
>>>>>>> ba11805156a954324c9e399c403eb3483a285096
}
