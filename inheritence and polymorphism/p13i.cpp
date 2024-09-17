//13. Write a program to find the max number from given two numbers using friend function 
#include <iostream>
using namespace std;
class Max_data
{
    int a, b;

public:
    set() // set the value of a,b
    {
        cout << "Enter First Number:";
        cin >> a;
        cout << "Enter Second Number:";
        cin >> b;
    }
    friend find_max(Max_data &); // prototype of friend function
};
find_max(Max_data &obj) // friend function definition
{
    if (obj.a > obj.b)
    {
        return obj.a;
    }
}
main()
{
    Max_data obj;
    obj.set();
    cout << "Max value is A:" << find_max(obj); // friend function calling and returning the max value
}
