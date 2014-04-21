/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 4, 2014, 9:18 AM
 * Program obtains 2 numbers from users then prints the larger
 * number followed by the words "is larger" or "this 
 * numbers are equal if the numbers are equal 
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables
 
    int number1, number2;
 
    cout << "Enter two numbers: "<<endl;
    cin >> number1 >> number2;
    if ( number1 == number2 )
    cout << "These numbers are equal." << endl;
    if ( number1 > number2 )
    cout << number1 << " is larger." << endl;
    if ( number2 > number1 )
    cout << number2 << " is larger." << endl;

    //Exit
    return 0;
    }
