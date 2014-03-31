/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 26, 2014, 10:29 PM
 * Purpose: Assignment 3
 */

//Include system libraries
#include <cstdlib>//I/O stream
#include <iostream>
#include <cmath>//calculations
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int a,b,c;
    float roots, root1, root2, num, num1, num2, denom, discrim;
    //prompt for equation info
    cout<<"Let's solve the quadratic formula."<<endl;
    cout<<"Enter the values for a, b, and c "<<endl;
    cout<<"from the form,  ax^2 + bx + c = 0."<<endl;
    cin>>a>>b>>c;
    //calc discriminant, numerator, and denominator
    discrim=(b*b)-(4*a*c);
    if (discrim==0){
        denom=2*a;
        roots=-b/denom;
        //output answers
    cout<<"The roots for this quadratic equation are"<<endl;
    cout<<roots<<endl;
    }
    else if (discrim>0){
        num1=-b+sqrt(discrim);
        denom=2*a;
        root1=num1/denom;
        num2=-b-sqrt(discrim);
        root2=num2/denom;
    //output answers
    cout<<"The roots for this quadratic equation are"<<endl;
    cout<<root1<<" & "<<root2<<endl;
    }
    else if (discrim<0){
        num1=-b+sqrt(-1*discrim);
        denom=2*a;
        root1=num1/denom;
        num2=-b-sqrt(-1*discrim);
        root2=num2/denom;
    //output answers
    cout<<"The roots for this quadratic equation are"<<endl;
    cout<<root1<<"i"<<" & "<<root2<<"i"<<endl;
    }
    //exit stage right
    return 0;
}