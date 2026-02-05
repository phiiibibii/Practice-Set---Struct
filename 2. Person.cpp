#include <iostream>
#include <string>
using namespace std;

const int MAX_PERSONS = 999;

struct Person {
    string name;
    int age;
};

int main() {
    int n;
    float sum = 0;
    Person person[MAX_PERSONS];

    cout << "Enter the number of people: ";
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        cout << "Enter the name of person " << i + 1 << ": ";
        getline(cin, person[i].name);

        cout << "Enter the age of person " << i + 1 << ": ";
        cin >> person[i].age;
        cin.ignore(); 

        sum += person[i].age;
    }

    if (n > 0) {
        cout << "The average age of the people is " << sum / n << endl;
    }

    return 0;
}