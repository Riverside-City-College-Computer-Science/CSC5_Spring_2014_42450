/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 14, 2014, 7:58 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float home, phone, util, cable, monthly, annual;
    
    //Prompt user for monthly cost of the
    //following expenses.
    cout<<"Rent/Mortgage Payment:"<<endl;
    cin>>home;
    cout<<"Phones:"<<endl;
    cin>>phone;
    cout<<"Utilities:"<<endl;
    cin>>util;
    cout<<"Cable:"<<endl;
    cin>>cable;
    
    //Calculate monthly and annual coast
    monthly=home+phone+util+cable;
    annual=home*12+phone*12+util*12+cable*12;
    
    //Output results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(15)<<left<<"Monthly Expenses: ";
    cout<<setw(9)<<right<<"$"<<monthly<<endl;
    cout<<setw(15)<<left<<"Annual Expenses: ";
    cout<<setw(9)<<right<<"$"<<annual<<endl;
          

    return 0;
}

