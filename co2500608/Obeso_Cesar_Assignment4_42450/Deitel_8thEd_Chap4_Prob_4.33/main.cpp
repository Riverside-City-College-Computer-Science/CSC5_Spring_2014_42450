/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Program that reads three nonzero integers and determines and prints whether
 * they’re the sides of a right triangle
 * Created on April 8, 2014, 11:59 AM
 */

//System libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    float a, b, c;
  cout << "Enter the three numbers: " << endl;
  cin >> a >> b >> c;
 
  if( (a + b <= c)||(b + c <= a)||(a + c <= b) )
    cout << "They could NOT represent the sides of a triangle" << endl;
  else
    cout << "They could represent the sides of a triangle" << endl;

  //Exit stage right
    return 0;
}

