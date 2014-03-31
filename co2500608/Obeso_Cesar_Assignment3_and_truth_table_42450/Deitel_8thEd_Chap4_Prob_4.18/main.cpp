/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 27, 2014, 5:29 AM
 */

//System Libraries
#include <iostream>
 
using namespace std;
 
 //Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    
    int num = 1;

   cout << "N\tN*10\tN*100\tN*1000\n"; //output
 
  while( num <= 5) //Loop 5 timea
  {
      //Calculate
     cout << num << "\t" <<num * 10<< "\t" <<num * 100<< "\t" <<num * 1000<< endl;
     num++; //increment counter by 1
   }

   //Exit stage right
   return 0;
}
