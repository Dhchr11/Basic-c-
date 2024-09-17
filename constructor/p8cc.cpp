//8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks
//. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from 
//each student implement using of aggregation
#include <iostream>
using namespace std;
// Address class for aggregation
class Address {
private:
    string street;
    string city;
    string state;
    string postalCode;

public:
    // Constructor to initialize the address
    Address(string str, string cty, string st, string pc)
        : street(str), city(cty), state(st), postalCode(pc) {}

    // Function to display the address
    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << postalCode << endl;
    }
};

// Student class
class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    Address address; // Aggregation

    // Function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

public:
    // Constructor to initialize the student details
    Student(string nm, string cls, int rn, float mks, Address addr)
        : name(nm), studentClass(cls), rollNumber(rn), marks(mks), address(addr) {}

    // Function to display student information
    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress(); // Displaying the address using aggregation
    }
};

int main() {
    // Create an Address object
    Address addr("123 Main St", "Springfield", "IL", "62704");

    // Create a Student object with the address
    Student student("Dhruvil Dave", "12th Grade", 101, 85.5, addr);

    // Display the student's information
    student.displayStudentInfo();

    return 0;
}


