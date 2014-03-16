/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C 42450
 *
 * Created on March 15, 2014, 5:32 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const float RAISE=7.62/100;
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Declare variables
    float orPay, newPay;
    cout<<"Congratulations! The board has approved your departments"<<endl;
    cout<<"requested pay raise and made it retroactive to the request date"<<endl;
    cout<<"6 months ago! Use this tool to find out your retroactive check"<<endl;
    cout<<"amount and new annual salary!"<<endl;
    cout<<"Please input last years block 2 from your W2"<<endl;
    cin>>orPay;
    //Calculations
    newPay=(orPay*RAISE)+orPay;
    //Outputs
        //Formatting declaration
        cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(30)<<left<<"Your new annual salary is:";
    cout<<setw(10)<<right<<"$"<<newPay<<endl;
    cout<<setw(30)<<left<<"Your new monthly check will be:";
    cout<<setw(10)<<right<<"$"<<newPay/12<<endl;
    cout<<setw(30)<<left<<"Your retroactive check will be:";
    cout<<setw(10)<<right<<"$"<<(newPay-orPay)/2<<endl;
    cout<<"Congratulations!!";
    cin.get();
    cin.get();
    //Exit Stage Right
    return 0;
}

