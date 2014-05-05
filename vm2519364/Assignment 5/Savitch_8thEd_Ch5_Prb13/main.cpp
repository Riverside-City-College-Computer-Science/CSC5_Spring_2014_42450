/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 4, 2014, 7:58 PM
 * Area and Perimeter of a Triangle
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void inpt(float& a, float& b, float& c);
void calc(float& a, float& b, float& c, float& s, float& area, float& p);
void outpt(float& area, float& p);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float a, b, c, s, p, area;
    //Function Call
    inpt(a, b, c);
    calc(a, b, c, s, area, p);
    outpt(area, p);
    //Exit Stage Right
    return 0;
}

void inpt(float& a, float& b, float& c){
    do{
    cout<<"\n";
    cout<<"Calculate the area of a triangle. Enter all side individually.\n";
    cout<<"Enter any value less than zero and application will restart.\n";
    cout<<"First Side:  ";
    cin>>a;
    cout<<"Second Side: ";
    cin>>b;
    cout<<"Third Side:  ";
    cin>>c;
    cout<<"\n";
    }while (a<=0||b<=0||c<=0);
}
void calc(float& a, float& b, float& c, float& s, float& area, float& p){
    s=((a+b+c)/2);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    p=a+b+c;
}
void outpt(float& area, float& p){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Area of the rectangle is "<<area<<" units and its perimeter is "<<p<<" units."<<endl;
    }