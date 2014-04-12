/* 
 * File:   main.cpp
 * Author: rcc
 * Created on March 17, 2014, 9:32 AM
 * confirm the truth
 */
//system libraries
#include <cstdlib>
#include<iostream>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare our variables
    bool x=true;
    bool y=true;
    //output the headings
    cout<<"X Y !X !Y x||Y X&&Y ";
    cout<<"x^Y x^Y^X X^Y^Y !(X&&Y)";
    cout<<"!X||Y !(X||y) !X&&!Y"<<endl;
    //output the first row of the truth table
    cout<<(x?'T':'F')<< " ";
    cout<<(y?'T':'F')<< " ";    
    cout<<(!x?'T':'F')<< "  ";
    cout<<(!y?'T':'F')<< "  ";
    cout<<(x||y?'T':'F')<< "    ";
    cout<<(x&&y?'T':'F')<< "    ";
    cout<<(x^y?'T':'F')<< "   ";
    cout<<(x^y^x?'T':'F')<< "     ";
    cout<<(!(x&&y)?'T':'F')<< "     ";
    cout<<(!x||y?'T':'F')<< "      ";
    cout<<(!(x&&y)?'T':'F')<< "     ";
    cout<<(!x&&y?'T':'F')<< "       ";
    cout<<(!x&&!y?'T':'F')<< " ";

    return 0;
}

