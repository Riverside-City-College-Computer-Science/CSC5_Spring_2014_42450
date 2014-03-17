/* 
 * File:   main.cpp
 * Author: Dale Rios
 * Created on March 17, 2014, 9:33 AM
 * Purpose: Confirm the truth
 */

//System Libraries
#include <iostream>
using namespace std;

//Global constants

//Function Prototypes

//Execution Starts here
int main(int argc, char** argv) {
    //Declare Variables
    bool x=true;
    bool y=true;
    //Output the headings
    //output the first row of the truth table
    cout<<"X  Y |X  |Y  X||Y  X&&Y"<<endl;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(y||x?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(y&&x?'T':'F')<<"  ";
    cout<<endl<<endl;
    //Output the second row
     cout<<"X^Y X^Y^X X^Y^Y !(X&&Y)"<<endl;
    cout<<(x^y?'T':'F')<<" ";
    cout<<(y^x?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<"   ";
    cout<<(y^y^x?'T':'F')<<"   ";
    cout<<(x^y^y?'T':'F')<<"  ";
    cout<<(y^y^y?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(y&&x)?'T':'F')<<"  ";
    cout<<endl<<endl;
    y=true;
    x=true;
    //Output the third row
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    cout<<(!x||y?'T':'F')<<"  ";
    cout<<(!y||x?'T':'F')<<" ";
    cout<<((x||y)?'T':'F')<<"   ";
    cout<<((y||y)?'T':'F')<<"   ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<(!y&&!x?'T':'F')<<"  ";
    cout<<endl;

    return 0;
}

