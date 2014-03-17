/* 
 * File:   main.cpp
 * Author: Neco Martinez
 *
 * Created on March 17, 2014, 9:32 AM
 * Purpose: confirm the truth
 */
//System libraries
#include <iostream>

using namespace std;

// Global Constants

// Function Prototypes

// Execution starts here

int main(int argc, char** argv) {
//Declare Variable
    bool x = true;
    bool y=true;
    //Output the headings
    cout<<"X Y !X !Y X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
    cout<<" !X||Y !(X||Y !X&&!Y"<<endl;
    //Output the first row of the truth table
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
     cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
     cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
 
    //Output the second row
    y=false;
    cout<<(x?'T':'F')<<"    ";
    cout<<(y?'T':'F')<<"     ";
     cout<<(!x?'T':'F')<<"      ";
    cout<<(!y?'T':'F')<<"       ";
     cout<<(x||y?'T':'F')<<"      ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<endl;
    //Output the third row
    y=true;
    x=false;
    
    //Exit stage right
    
    return 0;
}

