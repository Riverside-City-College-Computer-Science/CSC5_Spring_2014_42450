/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 26, 2014, 10:36 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    double interestrate, loan, si, balance;
    int month;
    char continues;
    do
    {
        //Input loan
        cout<<" Enter total loan amount";
        cin>>loan;
        //input interest
        cout<<" Enter rate of interest";
        cin>>interestrate;
        //Calculating monthly payment
        cout<<" Monthly payment = "<<(loan/20)<<endl;
        si = 0;
        balance = loan;
        month = 0;
        while (balance>0)
        {
        si +=((interestrate * balance)/(100*12));
        month++;
        balance -=((loan/20) - ((interestrate * balance)/(100*12)));
        if(balance<0)
            balance = 0;
        cout<<" balance left: "<<balance<<endl;
        }
        //Calculate simple annual interest
        cout<<" Simple annual interest is: "<<((si*100*12)/(loan*month))<<endl;
        cout<<" To repeat calculations press 'y or 'Y'";
        cin>>continues;
    }
    while (continues =='y' || continues =='Y');
    //Pause the system
    system("pause");
    
    
    return 0;
}

