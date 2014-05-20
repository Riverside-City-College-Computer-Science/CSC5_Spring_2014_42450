/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 5, 2014, 3:59 AM
 * Program asks user to enter a number and determines whether the
 * first is a multiple of the second.
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
 
  cout << "Enter the two numbers."<<endl;
  cin >> number1 >> number2;
 
  if (number1 % number2 == 0)
    cout << "first is a multiple of the second."<<endl;
  else
    cout << "first is not a multiple of the second."<<endl;

//Exit
    return 0;
}

