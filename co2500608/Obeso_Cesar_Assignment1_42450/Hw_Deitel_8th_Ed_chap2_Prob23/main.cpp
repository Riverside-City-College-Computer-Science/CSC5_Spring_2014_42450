/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 5, 2014, 3:18 AM
 * Program asks the user to input five numbers and prints
 * the smallest and largest of the numbers.
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables
    
    int num1, num2, num3, num4, num5;
 
  cout << "Enter the five numbers: " << endl;
  cin >> num1 >> num2>> num3 >> num4 >> num5;
 
    cout << "The entered numbers: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << "."<<endl;
    
  if(num1 < num2)
  if(num1 < num3)
   if(num1 < num4)
    if(num1 < num5)
       cout << "Smallest is " << num1 << endl;
  if(num2 < num1)
  if(num2 < num3)
   if(num2 < num4)
    if(num2 < num5)
       cout << "Smallest is " << num2 << endl;
  if(num3 < num1)
  if(num3 < num2)
   if(num3 < num4)
    if(num3 < num5)
       cout << "Smallest is " << num3 << endl;
  if(num4 < num1)
  if(num4 < num2)
   if(num4 < num3)
    if(num4 < num5)
       cout << "Smallest is " << num4 << endl;
  if(num5 < num1)
  if(num5 < num2)
   if(num5 < num3)
    if(num5 < num4)
       cout << "Smallest is " << num5 << endl;
   if(num1 > num2)
  if(num1 > num3)
   if(num1 > num4)
    if(num1 > num5)
       cout << "Largest is " << num1 << endl;
  if(num2 > num1)
  if(num2 > num3)
   if(num2 > num4)
    if(num2 > num5)
       cout << "Largest is " << num2 << endl;
  if(num3 > num1)
  if(num3 > num2)
   if(num3 > num4)
    if(num3 > num5)
       cout << "Largest is " << num3 << endl;
  if(num4 > num1)
  if(num4 > num2)
   if(num4 > num3)
    if(num4 > num5)
       cout << "Largest is " << num4 << endl;
  if(num5 > num1)
  if(num5 > num2)
   if(num5 > num3)
    if(num5 > num4)
       cout << "Largest is " << num5 << endl;


//Exit

    return 0;
}

