//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
		float a,b,sub,mul,div;
class A{
	public:
	var(){
		
		cout<<"enter a:";
		cin>>a;
		cout<<"enter b:";
		cin>>b;
	}	
		
	add()
	{

	
		cout<<a+b<<endl;
		
	}
sub()
	{

		cout<<a-b<<endl;

	
	}
	mul()
	{
	cout<<a*b<<endl;
	
	}
	div()
	{
		cout<<a/b<<endl;
	
	}
};
main()
{
	A obj;
	obj.var();
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
