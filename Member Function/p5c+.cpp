//5. Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member
// functions to calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
	private:
		int l,w;
		public:

			int area()
			{
				int area;
			cout<<"enter l:"<<endl;
			cin>>l;
			cout<<"enter w:"<<endl;
			cin>>w;
				area=l*w;
				cout<<"area of rectangle:"<<area<<endl;
				return area;
			}
			int perimeter()
			{
				int p;
				p=2*(l+w);
				cout<<"perimeter of rectangle:"<<p<<endl;
				return p;
			}	
            };
        int main()
        {
        	Rectangle obj;
        	obj.area();
        	obj.perimeter();
        	return 0;
		}
	


