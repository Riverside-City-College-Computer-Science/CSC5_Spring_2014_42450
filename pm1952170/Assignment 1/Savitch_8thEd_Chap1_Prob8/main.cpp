/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 1, 2014, 5:23 PM
 * Savitch Chap1 Prob8
 * Create a program that totals quarters dimes and nickels in cents.
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int Qtrs=25, Dimes=10, Nkls=5, value1, value2, value3, cents1, cents2, cents3, total;
    //Output Hello
    cout<<"Hello"<<endl;
    cout<<endl;
    //Prompt user to enter number of Quarters
    cout<<"Enter Number of Quarters ";
    cin>>value1;
    //Equation1
    cents1 = value1 * Qtrs;
    //Prompt users to enter number of dimes
    cout<<"Enter Number of Dimes ";
    cin>>value2;
    //Equation2
    cents2 = value2 * Dimes;
    //Prompt user to enter number of nickels
    cout<<"Enter Number of Nickels ";
    cin>>value3;
    //Equation3
    cents3 = value3 * Nkls;
    //Combine equations
    total = cents1 + cents2 + cents3;
    //Output Result in cents
    cout<<"Your total in cents is ";
    cout<<total<<endl;
    cout<<endl;
    //output this is the end of the program
    cout<<"This is the end of the program"<<endl;
    //Exit Stage Right
    return 0;
}

