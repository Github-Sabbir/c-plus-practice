#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int roll;

    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void displayStudent() {
        cout << "\n--- Student Info ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void getTeacherData() {
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTeacher() {
        cout << "\n--- Teacher Info ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Main function
int main() {
    Student s;
    Teacher t;

    // Student input & output
    cout << "Enter Student Details:\n";
    s.getName();
    s.getStudentData();
    s.displayStudent();

    // Teacher input & output
    cout << "\nEnter Teacher Details:\n";
    t.getName();
    t.getTeacherData();
    t.displayTeacher();

    return 0;
}
