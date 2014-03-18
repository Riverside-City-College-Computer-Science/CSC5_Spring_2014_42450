/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C 42450
 *
 * Created on March 17, 2014, 1:23 PM
 */
//LAB MAKE UP
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
//Declare Variables
    bool x=true;
    bool y=true;
    //output the headings
    cout<<"X Y !X !Y X||Y X&&Y ";
    cout<<"X^Y X^Y^X X^YY !(X&&Y) ";
    cout<<"!X||Y !(X||Y) !X&&!Y"<<endl;
    //Output first row
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<" ";
    cout<<(x^y^y?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<" ";
    cout<<(!x||y?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    //Output second row 
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<" ";
    cout<<(x^y^y?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<" ";
    cout<<(!x||y?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    //Output third row
    y=true;
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<" ";
    cout<<(x^y^y?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<" ";
    cout<<(!x||y?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    //Output forth row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<" ";
    cout<<(x^y^y?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<" ";
    cout<<(!x||y?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    //Exit Stage Right
    return 0;
}

