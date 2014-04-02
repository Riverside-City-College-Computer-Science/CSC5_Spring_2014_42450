/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 26, 2014, 12:14 PM
 * Purpose: To find the larger of two numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1,num2;
    //Input The Two Numbers
    cout<<"Please input a number: "<<endl;
    cin>>num1;
    cout<<"Please enter another number: "<<endl;
    cin>>num2;
    //Output the Results
    cout<<"The larger number is: "<<((num1>num2)?num1:num2)<<endl;
    cout<<"The smaller number is: "<<((num1<num2)?num1:num2)<<endl;
    //Exit Stage Right!
    return 0;
}

