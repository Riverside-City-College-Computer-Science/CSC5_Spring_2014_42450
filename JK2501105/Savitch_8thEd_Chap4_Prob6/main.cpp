/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on June 7, 2014, 8:46 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Function Definition
float interest(float, float, int);

int main(int argc, char** argv) 
{
    float balance, interestrate, total;
    int months;
    char choice;
    do
    {
        //input interest rate
        cout<<"Enter interest rate: ";
        cin>>interestrate;
        //input balance
        cout<<"Enter initial balance: ";
        cin>>balance;
        //input number of months
        cout<<"Enter number of months: ";
        cin>>months;
        //function call
        total = interest(balance, interestrate, months);
        //repeat
        cout<<"Do you want to repeat calculations?";
        cin>>choice;
    }
    while (choice == 'y' || choice == 'Y');
}

//define function

float interest(float initialbalance, float interestrate, int months)
{
    float total = 0;
    for (int i = months; i>0;i--)
    {
        total +=
                ((initialbalance * interestrate)/(100 *12));
        initialbalance +=
                ((initialbalance *(100 + interestrate))/(100 *12));
        
    }
    
}
