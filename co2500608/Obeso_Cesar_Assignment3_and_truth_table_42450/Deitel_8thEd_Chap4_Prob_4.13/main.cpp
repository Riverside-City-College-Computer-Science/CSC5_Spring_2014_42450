/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 26, 2014, 11:06 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants

//Function prototypes

//Execution begins here 
int main()
{
  //Declare variables
  int totalMiles = 0;
  int totalGallons = 0;
  int miles;
  int gallons;
 
  cout << "\nEnter miles driven (-1 to quit): ";
   cin >> miles; //input trip miles
 
  while( miles != -1 ) //loops till user enter -1
  {
     cout << "Enter gallons used: ";
     cin >> gallons; //input used gallons
 
      //total miles and gallons calculation  
     totalMiles += miles;
     totalGallons += gallons;
 
     //Declare mpg
     int thisMPG;
     int totalMPG;
 
     //Calculate
     thisMPG = static_cast< int > ( miles ) / gallons;
     totalMPG = static_cast< int > ( totalMiles ) / totalGallons;
 
     //output
     cout << "MPG this trip: " << setprecision( 6 ) << fixed << thisMPG << endl;
     cout << "Total MPG: " << totalMPG << endl;
 
     cout << "\nEnter miles driven (-1 to quit): ";
     cin >> miles; //input trip miles
 
   }
   //Exit stage right
   return 0;
}
