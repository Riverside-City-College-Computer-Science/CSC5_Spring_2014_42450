/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 2, 2014, 10:57 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Variable declarations    
    short quar, dime, nick, total;
//Input prompt for amount of coins.    
    cout<<"Lets find out how many cents you have?"<<endl;
    cout<<"How many quarters do you have?"<<endl;
    cin>>quar;
    cout<<"How many dimes do you have"<<endl;
    cin>>dime;
    cout<<"How many nickels do you have?"<<endl;
    cin>>nick;
//Calculations
    total = (quar * 25) + (dime * 10) + (nick * 5);
            cout<<"You have ";
    cout<< total;
//output
    cout<<" cents!"<<endl;
    cout<<"Press enter to close program."<<endl;
    cin.get();
    cin.get();
    return 0;
}


