/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 9:05 PM
 * Purpose: Create a big letter C with any key input.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    char input, X;    
//Input any letter or number from keyboard    
cout<<"Please type any letter on your keyboard.\n";
cout<<"\n";
cin>>input;
//Convert letter to variable
X=input;
//Output big C
cout<<"\n";
cout<<" "; cout<<X; cout<<" "; cout<<X; cout<<" "; cout<<X; 
cout<<"\n";
cout<<X; cout<<" "; cout<<" "; cout<<" "; cout<<" "; cout<<" "; cout<<X;
cout<<"\n";
cout<<X;
cout<<"\n";
cout<<X;  
cout<<"\n";
cout<<X;  
cout<<"\n";
cout<< X;cout<<" "; cout<<" "; cout<<" "; cout<<" "; cout<<" "; cout<< X; 
cout<<"\n";
cout<<" "; cout<<X; cout<<" "; cout<<X; cout<<" "; cout<<X;

cout<<"\n";
cout<<"\n";

//Exit Stage Right
    return 0;
}

