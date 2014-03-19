/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 19, 2014, 7:29 AM
 * Confirm the truth
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
   //Output the Headings
   cout<<"X Y !X !Y X||Y X&&Y ";
   cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
   cout<<"!X||Y !(X||Y) !X&&!Y "<<endl;
   //Output first row of the truth table
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";   
   cout<<endl;
   
   //Output second row
   y=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";   
   cout<<endl;
   
   //Output third row
   y=true;
   x=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";   
   cout<<endl;
   
   //Output fourth row
   y=false;
   x=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";   
   cout<<endl;        
   
   return 0;
    
    
}

