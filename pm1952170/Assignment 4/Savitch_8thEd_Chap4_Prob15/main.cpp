/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 6, 2014, 1:13 PM
 * purpose: create a vending machine for deep fried twinkies
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    float coin, total, change, twink=3.50;
    //Prompt user for inputs    
    cout<<"Deep fried twinkies cost $3.50, please enter coins "<<endl;
    cout<<"at the value of $1.00, $.25, $.10, or $.05"<<endl;    
    do{
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"$";//user input coin value
    cin>>coin;
    total=coin+total;//equation for total of coins
    change=twink-total; //equation for if change is due 
    //Totals so far
    cout<<"Your total so far is: $"<<total<<endl;
     if (total>=3.50){
        change=total-twink;
        cout<<"Your change due is $"<<change<<endl; //Change Due      
     }else cout<<"You still owe $"<<change<<endl;//What user owes           
    }while (total<3.50);
        cout<<"Enjoy your deep fried twinkie!"<<endl;//if total is met, enjoy twinkie!   
    //Exit Stage Right
    return 0;
}

