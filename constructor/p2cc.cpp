//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor. 
#include<iostream>
using namespace std;
class A{
	public:
	A()//constructor
	{
		int a,b;
		cout<<"enter a:"<<endl;
		cin>>a;
			cout<<"enter b:"<<endl;
		cin>>b;
		cout<<"addition"<<a+b<<endl;
		cout<<"subtraction"<<a-b<<endl;
		cout<<"multiplication"<<a*b<<endl;
		cout<<"division"<<a/b<<endl;
	}
};
int main()
{
	A obj;
}
