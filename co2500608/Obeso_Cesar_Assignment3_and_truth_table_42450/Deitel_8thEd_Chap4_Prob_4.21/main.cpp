/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 27, 2014, 6:07 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    
   int count = 1;
 
   while ( count <= 10 ) //Loop 10 times
   {   
      
      cout << ( count % 2 ? "****" : "++++++++" ) << endl;
      count++;
   }
 
   //Exit stage right
   return 0;
}

