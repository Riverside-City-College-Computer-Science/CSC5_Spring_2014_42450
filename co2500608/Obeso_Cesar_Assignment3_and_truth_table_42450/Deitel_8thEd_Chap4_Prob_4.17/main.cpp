/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 27, 2014, 5:04 AM
 */

//System Libraries
#include <iostream>
 
using namespace std;
 
//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    
  int counter = 1;
  int largest = 0;
  int number;
 
  while( counter <= 10) //Loop 10 times
  {
     cout << "Enter number: "; //Prompt user for input
     cin >> number;
 
     if( number > largest )
       largest = number;
   counter++; //increment counter by 1
  }
 
 
   cout << "Largest number is " << largest << endl; //output result
 
   //Exit stage right
   return 0;
}

