/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * program that calculates world population growth each year for the next
 * 75 years. Print the results in a table
 * Created on April 10, 2014, 4:05 AM
 */

//System libraries
#include <iostream>
#include <iomanip>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    float pop = 7000000000;
  float rate = 0.01;
  float increase = 0;
  int x = 1;
 
  cout << "Year\tPopulation\tIncrease" << endl;
  for( int y = 2012; y <= 2087; y++ )
  {
    cout << fixed << setprecision(0) << y << "\t" << pop << "\t" << increase << endl;
    increase = pop * rate;
      pop += increase;
      if ( pop > 14000000000 )
      {
        while( x > 0 )
        {
          cout << "Population floatd at end of " << y << endl;
          x--;
        }
      }
 
   }
 
//Exit stage right
    return 0;
}

