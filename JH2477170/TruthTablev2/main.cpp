/* 
 * File:   main.cpp
 * Author: rcc
 * Created on March 17, 2014, 9:32 AM
 * Purpose:The Truth
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototype

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool x=true;
    bool y=true;
    //output the headings
    cout<<"X Y !X !Y X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^YY !(X&&Y) ";
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //output the second row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //output the third row
    y=true;
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //output forth row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //Exit stage here!
    return 0;
}

