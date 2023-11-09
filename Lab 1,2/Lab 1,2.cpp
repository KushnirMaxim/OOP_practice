#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "Employee.h"
#include "Volunteer.h"
#include "Human.h"

using namespace std;

int main() {
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
}
