#include<iostream>
#include<list>
#include<map>
#include<iterator>
#include<algorithm>
#include<random>
#include"Employee.h"
#include"Human.h"
#include"Volunteer.h"

using namespace std;

int main() {
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
}
