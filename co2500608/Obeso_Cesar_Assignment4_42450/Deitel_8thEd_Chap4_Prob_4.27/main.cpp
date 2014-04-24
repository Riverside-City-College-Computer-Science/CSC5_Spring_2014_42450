/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Printing the Decimal Equivalent of a Binary Number
 * Created on April 8, 2014, 7:40 AM
 */

//System libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
  int bin;
  int dec = 0;
  int control =1;
 
  cout << "Enter number in binary format: "; //Prompt user for input
  cin >> bin;
  
  while( bin >= 1 )
    {
        dec = dec + (bin%10)*control;
        bin /= 10;
        control *= 2;
        //Check values after each iteration
        cout << "dec: " << dec << " bin: " << bin << " control: " << control << endl;
      }
 
  cout << "Decimal is " << dec << endl; //Output result
 
  //Exit stage right
    return 0;
}

