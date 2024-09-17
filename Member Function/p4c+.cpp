//4. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions
//to calculate the circle's area and circumference. 
#include<iostream>
using namespace std;
class circle{
	private:
		float r;
		
	public:
		float c,pi=3.14,area;
Area()
	{
		cout<<"enter r:";
		cin>>r;
		area=pi*r*r;//area of circle
		cout<<"area of circle:"<<area<<endl;
	}
	circumference()
	{
		c=2*pi*r;
		cout<<"circumference of circle:"<<c<<endl;
	}
};
 int main()
{
	circle obj;
	obj.Area();
	obj.circumference();
}
