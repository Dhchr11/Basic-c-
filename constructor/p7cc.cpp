//7. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member
// functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;

class Date 
{
    private:
        int day, month, year;

    public:
        // Member function to set the day
        void setDay(int d) 
		{
            if(d >= 1 && d <= 31) {  // Fixed the condition to properly check the range
                day = d;
            } else {
                cout << "Invalid day" << endl;
            }
        }

        // Member function to set the month
        void setMonth(int m) 
		{
            if(m >= 1 && m <= 12) {  // Fixed the condition to properly check the range
                month = m;
            } else 
			{
                cout << "Invalid month" << endl;
            }
        }

        // Member function to set the year
        void setYear(int y) 
		{
            if (y >= 1) 
			{  // Assuming the year must be a positive number
                year = y;
            } else {
                cout << "Invalid year" << endl;
            }
        }

        // Member functions to get the values
        int getDay() 
		{
            return day;
        }

        int getMonth() 
		{
            return month;
        }

        int getYear() 
		{
            return year;
        }

        // Function to validate the entire date
        bool isValid() 
		{
            if (month < 1 || month > 12) {
                return false;
            }
            if (day < 1 || day > 31) 
			{
                return false;
            }
            // Additional validation for months with less than 31 days
            if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
                return false;
            }
            // Check for February
            if (month == 2) 
			{
                bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
                if (day > 29 || (day == 29 && !isLeapYear)) {
                    return false;
                }
            }
            return true;
        }
};

int main() 
{
    Date obj;

    int day, month, year;
    
    cout << "Enter day: ";
    cin >> day;
    obj.setDay(day);
    
    cout << "Enter month: ";
    cin >> month;
    obj.setMonth(month);
    
    cout << "Enter year: ";
    cin >> year;
    obj.setYear(year);

    if(obj.isValid()) 
	{
        cout << "The date is valid." << endl;
    } else 
	{
        cout << "The date is invalid." << endl;
    }
}


