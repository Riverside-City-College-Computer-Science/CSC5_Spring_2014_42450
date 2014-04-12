/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 1, 2014, 8:32 AM
 * Purpose: Out max parameter
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

float max(float n1, float n2, float n3);
//Returns largest parameter

float max(float n1, float n2);
//Returns largest parameter

//Execution Starts Here
int main(int argc, char** argv) {
    float a, b, n1, n2, n3;
    cout<<"\n";
    cout<<"Enter three numbers\n";
    cout<<"\n";
    cin>>n1;
    cout<<"\n";
    cin>>n2;
    cout<<"\n";
    cin>>n3;
    cout<<"\n";
    a=max(n1,n2,n3);
    cout<<"The largest number is: ";
    cout<<a;
    cout<<"\n";   
    cout<<"\n";
    cout<<"Enter two numbers\n";
    cout<<"\n";
    cin>>n1;
    cout<<"\n";
    cin>>n2;
    cout<<"\n";
    b=max(n1,n2);
    cout<<"The largest number is: ";
    cout<<b;
    cout<<"\n"; 
    //Exit Stage Right
    return 0;
}

float max(float n1, float n2, float n3)
{
    float n=n1;
    if (n2>n)
    {
        n=n2;
    }
    if (n3>n)
    {
        n=n3;
    }
    return (n);
}
float max(float n1, float n2)
{
    float n=n1;
    if (n2>n)
    {
        n=n2;
    }
    return (n);
}
