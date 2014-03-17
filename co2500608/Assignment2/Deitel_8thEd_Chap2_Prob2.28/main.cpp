/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 *
 * Created on March 13, 2014, 6:37 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here 
int main() {
    //Declare Variables
    
   int fivedigit;
   int first, second, third, fourth, fifth;
 
    cout << "Please enter the five digit integer: ";
  cin >> fivedigit;
 
    if(fivedigit < 10000)
    {
    cout << "Incorrect digit! Try again!";
  }
 
  if(fivedigit > 99999)
  {
    cout << "Incorrect digit! Try again!";
  }
 
  first = fivedigit/10000;
  second = (fivedigit/1000)%10;
  third = (fivedigit/100)%10;
  fourth = (fivedigit/10)%10;
  fifth = fivedigit%10;
 
  cout << first;
  cout << " " << second;
  cout << " " << third;
   cout << " " << fourth;
   cout << " " << fifth;
 
   //Exit Stage Right
   return 0;
}


