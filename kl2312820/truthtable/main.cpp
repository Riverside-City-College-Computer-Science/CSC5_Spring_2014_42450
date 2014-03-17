/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 17, 2014, 9:32 AM
 * Purpose: Confirm the Truth
 */

//System Libraries
#include <iostream>
using namespace std;

//Gloabl Constants

//Function Prototypes

//Eecution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool x=true;
    bool y=true;
    //Output the headings
    cout<<"X Y !X !Y X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row of the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    //Output he second row of the truth table
    y=false;
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    //Output the third row of the truth table
    y=true;
    x=false;
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" ";

    return 0;
}

