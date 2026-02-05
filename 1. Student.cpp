#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks;
};

void displayDetails(Student student);

int main() {
    Student student;
    cout << "Enter student details:\n";
    cout << "Name: ";
    cin >> student.name;
    cout << "Roll Number: ";
    cin >> student.rollNumber;
    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> student.marks[i];
    }
    
    displayDetails(student);
    
    return 0;
}

void displayDetails(Student student) {
    student.totalMarks = 0;
    cout << "\nStudent details:\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": " << student.marks[i] << endl;
        student.totalMarks += student.marks[i];
    }
    cout << "Total Marks: " << student.totalMarks;
}