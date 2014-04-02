/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 25, 2014, 1:04 PM
 * Purpose: Create an if else statement to assign 0 to x when y is equal to
 * 10, otherwise assign 1 to x
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x,y;
    //Input a number from 1 to 10
    cout<<"Input a number from 1 to 10:"<<endl;
    cin>>y;
    //Set up the if else statement and output the Results
    if (y==10)
        cout<<"x is equal to 0!"<<endl;
    else 
        cout<<"x is equal to 1!"<<endl;
    //Exit Stage Right!
    return 0;
}

