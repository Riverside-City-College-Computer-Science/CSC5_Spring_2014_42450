/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 * Created on March 14, 2014, 9:33 AM
 * Purpose: Confirm the truth
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
    
    //Output Heading
    cout<<"X Y !X !Y X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    
    //Output First Row of truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<endl;
    
    //Output Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<endl;
    
    //Output Third Row
    y=true;
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<endl;
    
    //Output Fourth Row
    
    
//Exit Stage Right
    return 0;
}
