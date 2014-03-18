/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 3, 2014, 8:13 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
   
    //Declare Variables
    float cmpSals=4.5e6,divPerc=6.2E-1,divSals;
   
    //Calculate the Division Sales In Dollars
    divSals=cmpSals*divPerc;
   
    //Output the Division Sales
    cout<<"Division Sales = $"<<divSals<<endl;
  
    //Exit Stage Right!
    return 0;
}

