//3. Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement 
//member functions to get and set these variables.
#include <iostream>
using namespace std;
class car {
    private:
        string c; // For company name
        string b; // For model name
        int a;    // For year

    public:
        company() { 
            cout << "Enter a company name: " << endl;
            cin >> c;
        }

        model() { // Add void return type
            cout<< "Enter a model name: " << endl;
            cin>> b;
        }

        year() { 
            cout << "Enter year: " << endl;
            cin >> a;
        }

        display() { // Method to display entered data
            cout << "Company: " << c << endl;
            cout << "Model: " << b << endl;
            cout << "Year: " << a << endl;
        }
};

 main() {
    car obj;
    obj.company();
    obj.model();
    obj.year();
    obj.display(); // Display the entered details
}

