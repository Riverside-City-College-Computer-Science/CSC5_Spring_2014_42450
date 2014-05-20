/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 11, 2014, 6:54 PM
 * Purpose: Input A Number And Add Integers Until It Reaches Said Number
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1=0,x=0;
    //Ask For Input Of Positive Integer
    cout<<"Please enter a positive number."<<endl;
    cin>>num1;
    if (num1<0){
        cout<<"That's a negative number Dumb Dumb! Try again!"<<endl;
        cin>>num1;
    }
    while (x<=num1){
        cout<<x<<((x!=num1)?", ":".");
        x++;
    }
    return 0;
}

