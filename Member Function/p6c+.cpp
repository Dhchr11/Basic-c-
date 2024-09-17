//6. Write a C++ program to create a class called Person that has privateA member variables for name, age and country. Implement 
//member functions to set and get the values of these variables. 
#include<iostream>
using namespace std;
class Person{
	private:
		int age;
		char name,country;
		public:
			A()
			{
				cout<<"enter name:"<<endl;
				cin>>name;
				cout<<"enter age:"<<endl;
				cin>>age;

					cout<<"enter country:"<<endl;
				cin>>country;
			}
};
        int main()
         {
         	Person obj;
         	obj.A();
         	return 0;
		 }
