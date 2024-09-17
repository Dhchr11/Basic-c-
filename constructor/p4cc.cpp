//4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account. 
#include<iostream>
using namespace std;
class Bankaccount {
    private:
        int accountnumber,balance; 
    public:
        Bankaccount() 
		{
            cout << "Enter Account Number:" << endl;
            cin >> accountnumber;
            cout << "Enter Balance:" << endl;
            cin >> balance;
        }
        
         Deposit() {
         	
            int deposit;
            cout << "Enter amount to deposit: ";
            cin >> deposit;
            balance += deposit;
            cout << "Deposit = " << deposit << endl;
        }
        
         withdraw() 
		 {
            int withdraw;
            cout << "Enter amount to withdraw: ";
            cin >> withdraw;
            balance -= withdraw;
            cout << "Withdraw = " << withdraw << endl;
        }
};

main() 
{
    Bankaccount obj;
    obj.Deposit();
    obj.withdraw();
}

