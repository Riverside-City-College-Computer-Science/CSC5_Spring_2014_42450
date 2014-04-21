/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 5, 2014, 3:48 AM
 * Program asks user to enter a number and returns whether it's odd or even.
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables 
    
    int number;
 
   cout << "Enter a number :"<<endl;
  cin >> number;
 
  if(number % 2 == 0)
    cout << "The number is even."<<endl;
  if(number % 2 == 1)
     cout <<  "The number is odd."<<endl;

//Exit
    return 0;
}

