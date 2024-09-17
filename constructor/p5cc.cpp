//5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene. 
#include<iostream>
using namespace std;
class Triangle{
	private:
		int a,b,c;//sides
		public:
			side()
			{
				cout<<"enter a:"<<endl;
				cin>>a;
				cout<<"enter b:"<<endl;
				cin>>b;
						cout<<"enter c:"<<endl;
				cin>>c;
				if(a==b&&b==c)
				{
					cout<<"equilateral"<<endl;
				}
				else if(a==b||b==c||a==c)
				{
					cout<<"isosceles"<<endl;
				}
				else// (side1 != side2 && side2 != side3 && side1 != side3)
				{
					cout<<"scalene"<<endl;
				}
			} 
	
};
            main()
            {
            	Triangle obj;
            	obj.side();
			}

