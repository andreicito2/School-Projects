/*************************************************************************
 *
 * In-Class Exercise: Turnip Boy
 *
 * File Name: tax.cpp
 * Course:    CPTR 142
 */

#include <iostream>
using namespace std;

double totalCost(double price, double number){
    return ((price*number)*1.15);
    
}

int main(){
    double price, bill;
    int number;

    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item $";
    cin >> price;

    bill = totalCost(price, number);

    cout << "The final bill, including tax, is $" << bill << endl;
}
