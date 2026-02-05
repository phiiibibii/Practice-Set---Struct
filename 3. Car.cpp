#include <iostream>
using namespace std;

struct Car {
  char brand[20];  
  char model[20];
  int year;
  float mileage;
};

float calculateDepriciation(float mileage);
void displayCarDetails(Car car);

int main() {
    Car car;
    cout << "Enter the brand of the car: ";
    cin >> car.brand;
    cout << "Enter the model of the car: ";
    cin >> car.model;
    cout << "Enter the year of the car: ";
    cin >> car.year;
    cout << "Enter the mileage of the car: ";
    cin >> car.mileage;
    
    displayCarDetails(car);
    
    
    return 0;
}

float calculateDepriciation(float mileage) {
    if (mileage < 10000) return 0;
    else if (mileage < 49999) return 10;
    else if (mileage < 99999) return 20;
    else return 30;
}

void displayCarDetails(Car car) {
    cout << "Car Details:\n";
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Mileage: " << car.mileage << endl;
    cout << "Depreciation: " << calculateDepriciation(car.mileage) << "%";
}