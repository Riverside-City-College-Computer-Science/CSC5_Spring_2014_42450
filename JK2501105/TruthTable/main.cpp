/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 12, 2014, 10:15 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Funtions Prototypes

//Execution Stars Here

int main(int argc, char** argv) 

{

    //Declare Variable
    bool x=true;
    bool y=true;
    //Output the headings
    cout<<"X Y !Y !X X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row of the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"  "<<endl;
    //Output second row of the truth table
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"  "<<endl;   
    //Output the third row of the truth table
    y=true;
    x=false;
    //Output the third row of the truth table
    y=false;
    //Exit  
    return 0;
}

