/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * program that reads in a five-digit integer
 *  and determines whether it’s a palindrome
 * Created on April 8, 2014, 6:38 PM
 */

//System libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare variables
    
  int x;
  int a;
  int b;
  int l;
  int m;
 
  cout << "Please enter the 5 digit number: ";   //Prompt user for input
  cin >> x; //input from user
 
  //Calculate digits
  a = x / 10000;
  b = x % 10;
  l = (x / 1000)%10;
  m = (x % 100)/10;
 
    if( (a == b)&&(l == m) ) //Compare
      cout << "Entered number is palindrome!" << endl;
  else
      cout << "Entered number is NOT palindrome!" << endl;
 
  //Exit stage right
   return 0;
}

