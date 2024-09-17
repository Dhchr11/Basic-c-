//4. Write a C++ Program display Student Mark sheet using Multiple inheritance.
#include <iostream>
#include <string>

using namespace std;

// Base class for student information
class Student {
public:
    string name;
    int rollNumber;

    Student(string name, int rollNumber) : name(name), rollNumber(rollNumber) {}

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Base class for marks in Theory
class TheoryMarks {
public:
    int theoryMarks[5];

    TheoryMarks(int marks[]) {
        for (int i = 0; i < 5; i++) {
            theoryMarks[i] = marks[i];
        }
    }

    int calculateTheoryTotal() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += theoryMarks[i];
        }
        return total;
    }
};

// Base class for marks in Practical
class PracticalMarks {
public:
    int practicalMarks[3];

    PracticalMarks(int marks[]) {
        for (int i = 0; i < 3; i++) {
            practicalMarks[i] = marks[i];
        }
    }

    int calculatePracticalTotal() {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += practicalMarks[i];
        }
        return total;
    }
};


