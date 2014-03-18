/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 17, 2014, 9:32 AM
 * Purpose: Confirm the truth
 */

//Include System Libraries
#include <iostream>
using namespace std;

//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables
    bool x=true;
    bool y=true;
    //Output headings
    cout<<"X  Y  !X  !Y  X||Y  X&&Y  ";
    cout<<"X^Y  X^Y^X  X^Y^Y  !(X&&Y)  ";
    cout<<"!X||Y  !(X||Y)  !X&&!Y"<<endl;
    //Output the first row of the truth table
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
    //Output 2nd row
    y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
    //Output 3rd row
    x=false;
    y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
    //Output 4th row
    x=false;
    y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
    //exit stage right
    return 0;
}

