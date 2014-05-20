/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 6:06 PM
 * Purpose: Calculate coin change.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Value Declaration
float nickel,dime,quarter,total;
    
//Input amount of coins   
    cout<<"Hello\n"; 
    cout<<"\n";
    cout<<"Please enter the amount of nickels you have.\n";
    cin>>nickel;
    cout<<"Now, enter the amount of dimes you have.\n";
    cin>>dime;
    cout<<"Finally, enter the amount of quarters you might have.\n";
    cin>>quarter;

//Calculate The Product/Value of Each Coin
    nickel=.05*nickel;
    dime=.10*dime;
    quarter=.25*quarter;

//Calculate The Sum of All Coins
    total=nickel+dime+quarter;   
  
//Formula Allowing Two Decimal Places   
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
//Output Results
        cout<<"Your total is: $ ";
        cout<<total;
        cout<<"\n";
        
//Exit Stage Right    
    return 0;
}

