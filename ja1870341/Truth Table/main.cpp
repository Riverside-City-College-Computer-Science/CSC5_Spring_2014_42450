/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C 42450 
 *
 * Created on March 17, 2014, 1:23 PM
 */

#include <iostream>
//System Libraries
using namespace std;
//Global Constants
//Function Prototypes
//Execution starts here 
int main(int argc, char** argv) {
//Declare Variables
    bool x=true;
    bool y=true;
    //Output begins
    cout<<"X Y !X !Y X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^YY !(X&&Y) ";
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    //Output row #1
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //Output Row #2
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //Output row #3
    y=true;
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //Output row #4
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    //Exit stage right
    return 0;
}

