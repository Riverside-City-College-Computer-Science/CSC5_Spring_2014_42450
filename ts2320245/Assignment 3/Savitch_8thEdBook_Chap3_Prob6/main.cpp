
/* 
 * File:   main.cpp
 * Author: Saldana, Thomas 
 * Problem6: Write a C++ program that solves a quadratic equation to find its roots. The Program 
 *           takes values of a, b, and c as input and outputs the roots. Be creative in how you 
 *           ouput complex roots. Include a loop that allows the user to repeat this calculation 
 *           for new input values until the user says she or he wants to end the program. 
 *
 * Created on March 24, 2014, 1:54 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;
//System Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int a, b, c, x;
    
    cout << "This program helps solve a quadratic equation in order to find its roots.\n"
         << "A quadratic equation has the form \"ax^2+bx+c=0.\" \nType"
         <<  " in a, b, and c, and the computer will solve for x.\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin>> b;
    cout << "c=";
    cin >> c; cout<<endl;
    
    float x1=(-b+sqrt(b*b-4*a*c))/2*a, 
          x2=(-b-sqrt(b*b-4*a*c))/2*a,
           dscmnt=(b*b-4*a*c);
    
    if ( dscmnt == 0 )
    cout << "The polynomial has one real root."
         << "Namely, x= "<< x1;
    
    if ( dscmnt > 0 )
        cout << "The polynomial has two real roots."
             << "Namely, x= "<<x1 << " and x= " <<x2;    
    if ( dscmnt < 0 )
        cout << "The polynomial has two complex roots."
             << " Namely, x= "<<x1 << " and x= " <<x2;
    
    
    
    
    
    return 0;
}

