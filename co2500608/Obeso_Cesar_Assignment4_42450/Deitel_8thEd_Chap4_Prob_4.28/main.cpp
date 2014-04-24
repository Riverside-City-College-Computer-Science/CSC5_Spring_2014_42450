/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * program that displays checkerboard pattern using only the following
 * three output statements. cout << "* "; cout << ' '; cout << endl;
 * Created on April 8, 2014, 8:44 AM
 */

//System libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
  int column;
  int row = 1;
 
  while( row <= 8 ){
    column = 1;
    while(column <= 16){
      if( ((column % 2 == 0)&&(row % 2 == 0))||((column % 2 == 1)&&(row % 2 == 1)) )
      {
        cout << "*";
        column++;
      }  
      else
      {
        cout << " ";
        column++;
      }
    }
    cout << endl;
      row++;
   }
 
  //Exit stage right
    return 0;
}

