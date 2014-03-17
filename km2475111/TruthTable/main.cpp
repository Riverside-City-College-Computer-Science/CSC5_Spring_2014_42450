/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on March 17, 2014, 9:32 AM
 */

#include <iostream>
using namespace std;

//Global Variables

//Prototype Functions

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    bool x=true;
    bool y=true;
    //output heading
    cout<<"X Y !X !Y X||Y X&&Y "
        <<"X^Y X^Y^Y X^Y^X !(X&&Y) "
        <<"!X||!Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row of the truth table
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x||y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"       "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"      "
        <<(!x||!y?'T':'F')<<endl;
    //Output second row
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x||y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"       "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"      "
        <<(!x||!y?'T':'F')<<endl;
    //Output third row
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x||y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"       "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"      "
        <<(!x||!y?'T':'F')<<endl;
    //Output forth row
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x||y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"       "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"      "
        <<(!x||!y?'T':'F')<<endl;
    
    //Exit Stage Right!
    return 0;
}

