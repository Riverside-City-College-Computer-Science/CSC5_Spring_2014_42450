/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 4, 2014, 5:22 PM
 */

/*
 * 
 */

//System Libraries
#include<iostream>
using namespace std;

//Global Constant

//Function Prototype

//Execution starts here!

int main(int argc, char** argv) {

    //Declare variables
     int quarters = 25, dimes = 10, nickels = 5;
     int answer1,answer2,answer3,answerx;
    
    //Output the numbers
    cout << "In order, How many quarters, dimes, and nickels do you have?" << endl;
    cin >> answer1;
    cin >> answer2;
    cin >> answer3;
    
    //Calculations and solution
    answerx = quarters * answer1 + dimes * answer2 + nickels * answer3;
    cout << "In total, you have " << answerx << " Cents." << endl;
   
    return 0;
}

