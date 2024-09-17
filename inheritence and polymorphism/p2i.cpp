//2. Write a C++ Program to find Area of Rectangle using inheritance 
#include <iostream>
using namespace std;

// Base class Shape
class Shape 
{
protected:
    double width;
    double height;
public:
    // Function to input dimensions of the shape
    inputDimensions() 
	{
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }
};

// Derived class Rectangle from Shape
class Rectangle : public Shape 
{
public:
    // Function to calculate the area of the rectangle
    double calculateArea() 
	{
        return width * height;
    }
    // Function to display the area
     displayArea() 
	 {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

main() 
{
    Rectangle rect;

    // Input the dimensions of the rectangle
    rect.inputDimensions();

    // Display the area of the rectangle
    rect.displayArea();
}

	
	


