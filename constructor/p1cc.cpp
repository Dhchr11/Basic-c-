//1. Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class A{
	public:
	inline multiplication()
{
 int a,b,c;
 cout<<"enter a:"<<endl;
 cin>>a;
 cout<<"enter b:"<<endl;
 cin>>b;
 c=a*b;
 cout<<"multipliction="<<c<<endl;
}
inline cube()
{
	int n,c;
	cout<<"enter n:"<<endl;
	cin>>n;
	c=n*n*n;
	cout<<"cube="<<c;
}
};
int main()
{
	A obj;
	obj.multiplication();
	obj.cube();
	return 0;
}

