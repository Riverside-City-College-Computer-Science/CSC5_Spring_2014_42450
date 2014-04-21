/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * program that uses a for statement to evaluate the factorials
 * of the integers from 1 to 5
 * Created on April 10, 2014, 5:09 AM
 */

//System libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    int result = 1;
 
  for( int n = 1; n <= 5; n++ ){
    result *= n;
  cout << "Factorial of\t" << n << "\tis\t" << result << endl;
  }

//Exit stage right
    return 0;
}

