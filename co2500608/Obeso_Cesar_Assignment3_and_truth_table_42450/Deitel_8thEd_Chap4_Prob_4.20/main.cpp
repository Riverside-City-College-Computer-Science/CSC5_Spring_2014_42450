/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 27, 2014, 7:15 AM
 */

//System Libraries
#include <iostream>
using namespace std; 

//Global constants

//Function prototypes

//Execution begins here
int main() {
    //Declare variables
    
int passes = 0;
int failures = 0;
int studentCounter = 1;
int result = 1 || 2;

cout <<"Enter 1 or 2 for result"<<endl;
while (studentCounter<=10)
{
cout <<"Enter result ( 1 = pass, 2 = fail): ";
cin >>result;
if (result == 1)
        passes += 1;
        else                
        failures += 1;
studentCounter += 1;
}
cout << "Passed" <<passes<<"Failed"<<failures<<endl;
if ( passes > 8 )
cout << "Bonus to instructor!" <<endl;

//Exit stage right
    return 0;
}

