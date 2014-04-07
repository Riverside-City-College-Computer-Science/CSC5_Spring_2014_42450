/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 27, 2014, 5:42 AM
 */

//System libraries
#include <iostream>
 
using namespace std;
 
//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    
  int counter = 0;
  int largest = 0;
  int largest2 = 0;
  int number;
 
  while( counter < 10)
  {
     cout << "Enter number: ";
     cin >> number;
 
     if( (number > largest),(number > largest2) )
     {
       largest = largest2;
       largest2 = number;
     }
     else if( (number > largest),(number < largest2) )
     {
       largest = number;
      }
   counter++;
  }
 
   cout << "Largest two numbers are " << largest << " and " << largest2 << endl;
 
   //Exit stage right
   return 0;
}
