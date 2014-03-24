/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 23, 2014, 6:28 PM
 * Purpose: Solve Quadratic Equation
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    int a, b, c, i;
    float x, xT, xD;
    //Input Quadratic Equation Information
    cout<<"\n";
    cout<<"Quadratic Equation: ax^2 + bx + c = 0";
    cout<<"\n";
    cout<<"Enter your values to solve your quadratic equation.\n";
    cout<<"\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"\n";
    
    xT=sqrt((b*b)-(4*a*c));
    
    if (xT==0){        
        x=-b/(2*a);
        cout<<"x = ";
        cout<<x;
        cout<<"\n";
    }
    else if (xT>0){
        x=(-b +(xT))/(2*a);
        xD=(-b-(xT))/(2*a);
        cout<<"x= "<<x<<" and "<<xD;
    }
    else if (xT<0){
        xT=sqrt((-1)*((b*b)-(4*a*c)));
        //x=(-b +(xT))/(2*a);
        //xD=(-b-(xT))/(2*a);
        cout<<"x = "<<"-"<<b/(2*a)<<" + "<<xT/(2*a)<<"i";
        cout<<"\n";
        cout<<"and";
        cout<<"\n";
        cout<<"x = "<<"-"<<b/(2*a)<<" - "<<xT/(2*a)<<"i";
        cout<<"\n";
    }
    else
        cout<<"Invalid Entry";
    //Exit Stage Right
    return 0;
}

