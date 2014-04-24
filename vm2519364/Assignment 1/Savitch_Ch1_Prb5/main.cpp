/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 4:24 AM
 * Purpose: Add and Multiply two integers.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here
int main( ) 
{
//Variable Declaration
    int seats = 5, rows = 5, totl;
//Calculate the product of the two integers
    totl = seats * rows;
//Output of Classroom Seats    
    cout << "If a classroom has ";
    cout << seats; 
    cout << " seats per row\n";
    cout << "and ";
    cout << rows; 
    cout << " rows are in the classroom\n";
    cout << "you would have a total of ";
    cout << totl; 
    cout << " seats in that classroom.\n";
    cout << "\n";
    
//Calculate the Sum of the two integers
    totl = seats + rows;
    cout << "It would be incorrect to think that if a classroom had \n";
    cout << seats;
    cout << " seats per row and ";
    cout << rows;
    cout << " rows per classroom ";
    cout << "the total seats\n";
    cout << "in the classroom would be ";
    cout << totl;
    cout << "\n";
    cout << "\n";
    cout << "All Done!\n";
//Exit Stage Right
    return 0;
}