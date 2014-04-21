/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 4, 2014, 8:43 AM
 * Print the numbers 1 to 4 on the same line with each pair of
 * adjacent numbers separated by one space. Do this in three
 * different ways.
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
   
cout<<"12 34\n"; //One stream insertion operator
cout<<"12"<<" "<<"34"<<endl; //One statement with 4 stream insertion operators
cout<<"1";//Four statements
cout<<"2 ";
cout<<"3";
cout<<"4"<<endl;

//Exit
    return 0;
}

