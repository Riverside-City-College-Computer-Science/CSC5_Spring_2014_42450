/* 
 * File:   main.cpp
 * Author: Jose Luna
 * Created on August 20, 2013, 2:45 PM
 * Purpose:Confirm the Truth
 */


//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    bool x=true;
    bool y=true;
    //output the headings
    cout <<"X Y !X !Y X||Y X&&Y";
    cout <<"X^Y X^Y^X X^Y^Y !(X&&Y)";
    cout <<"!X||Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row of the truth table
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout <<(x||y?'T':'F')<<"  ";
    cout <<(x&&y?'T':'F')<<"  ";
    cout<<endl;
    //Output the second row
    y=false;
    
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout <<(x||y?'T':'F')<<"  ";
    cout <<(x&&y?'T':'F')<<"  ";
    cout<<endl;
    //Output the third row
    y=true;
    x=false;
    
    //Output the third row
    y=false;
    
    //Exit Stage Right!

    return 0;
}

