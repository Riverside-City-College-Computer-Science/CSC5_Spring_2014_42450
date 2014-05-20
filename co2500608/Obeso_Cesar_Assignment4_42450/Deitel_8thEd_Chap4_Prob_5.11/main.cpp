/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Modify the compound interest program of Section 5.4 to repeat its steps 
 * for the interest rates 5%, 6%, 7%, 8%, 9% and 10%.
 * Use a for statement to vary the interest rate
 * Created on April 10, 2014, 8:12 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    float amount; // amount on deposit at end of each year
   float principal;
 
   cout << setw( 4 ) << "Year" << setw( 9 ) << "Dep.(%X)" <<endl; // display headers

   cout << fixed << setprecision( 2 ); // set floating-point number format
 
  for( int rate = 5; rate <= 10; rate++){
 
     principal = 1000.0;
 
     // calculate amount on deposit for each of ten years
     for ( int year = 1; year <= 10; year++) 
     {
       principal = principal * pow( 1 + rate/100.0, year );
        cout << setw( 4 ) << year << setw( 9 ) << principal << endl;
      }
 
   cout << endl;   
   }

//Exit stage right
    return 0;
}

