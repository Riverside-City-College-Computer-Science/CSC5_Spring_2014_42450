/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 * Seat Sales
 * Created on March 12, 2014, 3:32 PM
 */
//system libs
#include <iostream>
#include <iomanip>
//global constants 
//
const short A=15;
const short B=12;
const short C=9;
//system prototypes

//execution begins here!!
using namespace std;
int main(int argc, char** argv) {
//declare variables
short ticA, ticB, ticC;
//Ask for input 
cout<<"how many class A seats were bought"<<endl;
cin>>ticA;
cout<<"how many class b seats were bought"<<endl;
cin>>ticB;
cout<<"how many class C seats were bought"<<endl;
cin>>ticC;
//calculations 
float total=(ticA*A)+(ticB*B)+(ticC*C);
cout<<fixed<<setprecision(2)<<showpoint;
cout<<"The total profit is $";
cout<<total<<endl;
//exit stage right    
    return 0; 
}

