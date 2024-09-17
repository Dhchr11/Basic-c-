#include <iostream>
using namespace std;
main() 
{
    string name;
    int mainChoice, sandwichChoice, quantity;
    int totalBill = 0;
int deliveryTime = 40;

    cout << "Please Enter enter Your Name: ";
    cin>>name;
    cout<< "\nHello " <<name<<endl;
    cout<<"\nWhat would you like to order?" <<endl;
    cout<<"---------Menu---------" << endl;
    cout<<"1) Pizzas\n2) Burgers\n3) Sandwich\n4) Rolls\n5) Biryani" <<endl;
    cout<<"\nPlease Enter your Choice: ";
    cin>>mainChoice;
    if (mainChoice == 3) {
        cout <<"\n1) Club Sandwich Rs.240" << endl;
        cout <<"2) Veg. Crispy Sandwich Rs.100" <<endl;
        cout <<"3) Extreme Veg Sandwich Rs.100" <<endl;//menu of sandwich
        cout <<"\nPlease Enter which Sandwich you would like to have?: ";
         cin >> sandwichChoice;

        cout <<"\nPlease Enter Quantity: ";
        cin >> quantity;

        if (sandwichChoice == 1) {
            totalBill = 240 * quantity;
        } else if (sandwichChoice == 2 || sandwichChoice == 3) {
            totalBill = 100 *quantity;
        }

        cout << "\n--------Your Order--------" << endl;
        switch (sandwichChoice) {
            case 1: cout << "Club Sandwich"; break;
            case 2: cout << "Veg. Crispy Sandwich"; break;
            case 3: cout << "Extreme Veg Sandwich"; break;
             }
        cout << "\nYour total bill is " << totalBill << endl;
        cout << "Your order will be delivered in " << deliveryTime << " Minutes" << endl;
        cout << "\nThank you for ordering from Tops Tech Fast Food\n";
        cout << "Would you like to order anything else? Y / N: ";
    }
}







