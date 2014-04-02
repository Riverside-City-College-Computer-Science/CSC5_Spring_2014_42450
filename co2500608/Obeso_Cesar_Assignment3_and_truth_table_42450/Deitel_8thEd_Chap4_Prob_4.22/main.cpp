/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 28, 2014, 12:49 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare variables
 
   int row = 10; // initialize row
   int column; // declare column
 
   while ( row >= 1 ) // loop until row < 1
   {   
      column = 1; // set column to 1 as iteration begins
 
      while ( column <= 10 ) // loop 10 times
      {             
         cout << ( row % 2 ? "<" : ">" ); // output
         column++; // increment column
      } // end inner while
 
      row--; // decrement row
      cout << endl; // begin new output line
   } // end outer while
   
   //Exit stage right
    return 0;
}

