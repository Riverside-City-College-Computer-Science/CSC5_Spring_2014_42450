/* 
 * File:   main.cpp
 * Author: Frank Luna
 *Purpose: Confirm the truth
 * Created on March 17, 2014, 9:32 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {

    //Declare variable
    bool x = true;
    bool y = true;
    
    //output the headings
    cout << "X Y !X !Y X||Y X&&Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||Y !(X||Y) !X&&!Y" << endl;
    
    //Output the first row of the truth table
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << " ";
    
    cout << (!x? 'T' : 'F') << " ";
    cout << (!y? 'T' : 'F') << " ";
    
    cout << (x||y? 'T' : 'F') << " ";
    cout << (x&&y? 'T' : 'F') << " " << endl;
    
    //Output the second row
    y=false;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << " ";
    
    cout << (!x? 'T' : 'F') << " ";
    cout << (!y? 'T' : 'F') << " ";
    
    cout << (x||y? 'T' : 'F') << " ";
    cout << (x&&y? 'T' : 'F') << " " << endl;
    
    //Output the third row
    y = true;
    x = false;
            
   //Output the third row
    y = false;
    //Execution ends here
    return 0;
}

