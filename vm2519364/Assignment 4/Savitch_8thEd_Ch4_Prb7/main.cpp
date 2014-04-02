/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 1, 2014, 8:16 PM
 * Purpose: Calculate the gravitational attractive force between two bodies
 */

#include <iostream>
using namespace std;

//Global Constants
const float G = 6.673e-8; //Universal Gravitational Constant

//Function Prototypes

float gravFrc(float massOne, float massTwo, float dist);
//Returns the gravitational force between two bodies.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable
    float massOne, massTwo, dist, Force;
    char ans;
    do{
    //Input Required Data
    cout<<"\n";
    cout<<"Calculate the gravitational force between two bodies.";
    cout<<"\n";
    cout<<"\n";
    cout<<"Enter the mass (in grams) of the first body: ";
    cin>>massOne;
    cout<<"\n";
    cout<<"Enter the mass (in grams) of the second body: ";
    cin>>massTwo;
    cout<<"\n";
    cout<<"Enter the distance (in centimeters) between the two bodies: ";
    cin>>dist;
    //Function Call
    Force=gravFrc(massOne, massTwo, dist);
    cout<<"\n";
    cout<<"The gravitational force between the two bodies is: ";
    cout<<Force;
    cout<<" dynes.";
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to recalculate?";
    cout<<"\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    } while (ans=='y'||ans=='Y');
    cout<<"Good-bye";
    //Exit Stage Right
    return 0;
}
float gravFrc(float massOne, float massTwo, float dist)
{
    float F;
    F=((G*massOne*massTwo)/(dist*dist));
    return (F);
}