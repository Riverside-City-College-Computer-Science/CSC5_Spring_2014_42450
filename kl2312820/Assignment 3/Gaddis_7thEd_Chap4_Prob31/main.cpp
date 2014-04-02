/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 25, 2014, 12:22 PM
 * Purpose: If y=0, then x=100
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assign Variables
    int y;
    //Input a number
    cout<<"Input either 0 or 100:"<<endl;
    cin>>y;
    //Calculate the if statement and output results
    if (y==0)
    {
        cout<<"x is equal to 100!"<<endl;
    }
    else
    {
        cout<<"x is not equal to 100!"<<endl;
    }
    //Exit Stage Right!
    return 0;
}

