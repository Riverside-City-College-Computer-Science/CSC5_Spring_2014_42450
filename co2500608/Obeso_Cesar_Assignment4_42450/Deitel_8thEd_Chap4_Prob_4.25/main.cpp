/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * program that reads in the size of the side of a square then prints 
 * a hollow square of that size out of asterisks and blanks
 * Created on April 8, 2014, 5:18 AM
 */

//System libraries
#include <iostream>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
 //Declare variables
    
  int x;
  int row = 1;
  int column;
 
  cout << "Enter the X (more than 1): ";
  cin >> x;
    while( row <= x )
    {
      column = 1;
      while( column <= x )
      {
        if( row == 1 )
        {
           cout << "*";
           column++;
         }
        else if(( row > 1 )&&( row < x ))
        {
          if( column == 1 )
          {
           cout << "*";
             column++;            
          }
           else if( (column > 1)&&(column < x) )
           {
             cout << " ";
              column++;
            }
           else
           {
             cout << "*";
              column++;
            }
         }
         else
         {
           cout << "*";
           column++;
         }
       }
   cout << endl;
   row++;    
   }
  //Exit stage right
    return 0;
}

