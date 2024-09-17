//performance. Using of constructor 7. Write a C++ program to implement a class called Date that has private member variables for 
//day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid. 
#include<iostream>
using namespace std;
class Date{
	private:
		int year,day,month;
		public:
			display()
			{
				cout<<"enter day:"<<endl;
				cin>>day;
					cout<<"enter year:"<<endl;
				cin>>year;
					cout<<"enter year:"<<endl;
				cin>>year;
			}
			
			days()
			{
				if("day>=1 && day<=31")
				{
					cout<<"days is valid"<<endl;
				}
				else
				{
					cout<<"days is not valid"<<endl;
				}
			}
			months()
			{
				if(month>=1 && month<=12)
				{
					cout<<"month is valid"<<endl;
				}
				else
				{
					cout<<"month is not valid"<<endl;
				}
			}
			years()
			{
				if(year>=1)
				{
					cout<<"year is valid"<<endl;
				}
				else
				{
					cout<<"year is not valid"<<endl;
				}
			}
			  displayDate()  
			  {
        cout << "Date entered: " << day << "/" << month << "/" << year << endl;
    }
			
};
            main()
            {
            	Date obj;
            	obj.days();
            	obj.months();
            	obj.years();
            	obj.display();
            	obj.displayDate();
            	
            	
			}

