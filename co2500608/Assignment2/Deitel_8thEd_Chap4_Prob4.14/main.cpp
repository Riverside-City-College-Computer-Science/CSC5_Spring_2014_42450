/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 16, 2014, 7:42 PM
 */

// System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here 
int main() {
// Declare Variables
    
   int y;
   int x = 1;
   int total = 0;
 
   while ( x <= 10 ) // loop 10 times
   {    
      y = x * x; // calculate
      cout << y << endl; // output
      total += y; // add y to total
      x++; // counter x
   }
 
   cout << "Total is " << total << endl; // display result
   
   //Exit Stage Right
   return 0;
} 