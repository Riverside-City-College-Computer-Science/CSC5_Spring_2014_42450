/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 17, 2014, 9:32 AM
 * Purpose: The Truth
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    bool x=true;
    bool y=true;
    //Output the headings
    cout<<"X Y  !X !Y  X||Y  X&&Y ";
    cout<<" X^Y  X^Y^X  X^Y^Y  !(X&&Y) ";
    cout<<" !X||Y  !(X||Y)  !X&&!Y"<<endl;
    //Output the first row of the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<"  "<<(!x?'T':'F')<<" ";
    cout<<" "<<(!y?'T':'F')<<" ";
    cout<<"   "<<(x||y?'T':'F')<<" ";
    cout<<"    "<<(x&&y?'T':'F')<<" ";
    cout<<"   "<<(x^y?'T':'F')<<"  ";
    cout<<"   "<<(x^y^x?'T':'F')<<"  ";
    cout<<"    "<<(x^y^y?'T':'F')<<"  ";
    cout<<"     "<<(!(x&&y)?'T':'F')<<"  ";
    cout<<"     "<<(!x||y?'T':'F')<<"  ";
    cout<<"     "<<(!(x||y)?'T':'F')<<"  ";
    cout<<"     "<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    //Output the second row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<"  "<<(!x?'T':'F')<<" ";
    cout<<" "<<(!y?'T':'F')<<" ";
    cout<<"   "<<(x||y?'T':'F')<<" ";
    cout<<"    "<<(x&&y?'T':'F')<<" ";
    cout<<"   "<<(x^y?'T':'F')<<"  ";
    cout<<"   "<<(x^y^x?'T':'F')<<"  ";
    cout<<"    "<<(x^y^y?'T':'F')<<"  ";
    cout<<"     "<<(!(x&&y)?'T':'F')<<"  ";
    cout<<"     "<<(!x||y?'T':'F')<<"  ";
    cout<<"     "<<(!(x||y)?'T':'F')<<"  ";
    cout<<"     "<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    //Output the third row
    y=true;
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<"  "<<(!x?'T':'F')<<" ";
    cout<<" "<<(!y?'T':'F')<<" ";
    cout<<"   "<<(x||y?'T':'F')<<" ";
    cout<<"    "<<(x&&y?'T':'F')<<" ";
    cout<<"   "<<(x^y?'T':'F')<<"  ";
    cout<<"   "<<(x^y^x?'T':'F')<<"  ";
    cout<<"    "<<(x^y^y?'T':'F')<<"  ";
    cout<<"     "<<(!(x&&y)?'T':'F')<<"  ";
    cout<<"     "<<(!x||y?'T':'F')<<"  ";
    cout<<"     "<<(!(x||y)?'T':'F')<<"  ";
    cout<<"     "<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    //Output the fourth row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<"  "<<(!x?'T':'F')<<" ";
    cout<<" "<<(!y?'T':'F')<<" ";
    cout<<"   "<<(x||y?'T':'F')<<" ";
    cout<<"    "<<(x&&y?'T':'F')<<" ";
    cout<<"   "<<(x^y?'T':'F')<<"  ";
    cout<<"   "<<(x^y^x?'T':'F')<<"  ";
    cout<<"    "<<(x^y^y?'T':'F')<<"  ";
    cout<<"     "<<(!(x&&y)?'T':'F')<<"  ";
    cout<<"     "<<(!x||y?'T':'F')<<"  ";
    cout<<"     "<<(!(x||y)?'T':'F')<<"  ";
    cout<<"     "<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;      
    
    //Exit Stage Right
    return 0;
}

