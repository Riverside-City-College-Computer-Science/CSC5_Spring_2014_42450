/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 17, 2014, 9:33 AM
 * Purpose: Confirm the truth
 */
//system libraries
#include <iostream>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
   //declare variables
   bool x=true;
   bool y=true;
   //output the headings
   cout<<"X Y !X !Y X||Y X&&Y ";
   cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
   cout<<"!X||Y !(X||Y) !X&&!Y "<<endl;
   //output first row of the truth table
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;
   //output second row
   y=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;
   //output third row
   y=true;
   x=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;
   //output fourth row
   y=false;
   x=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;        
   
   return 0;
    
    
}

