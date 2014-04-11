/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 6, 2014, 12:13 PM
 * Purpose: Compute the gravitational force between two objects in dynes.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float G=6.673e-8;
//Function Prototypes
float gravF(float mOne_par,float mTwo_par,float dist_par);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mOne, mTwo, dist, dyne;
    char ans;
    do{
    //Prompt user for inputs
    //User inputs for mass one and two as well as the distance between each
    cout<<"Input mass of first body in grams: ";
    cin>>mOne;
    cout<<"Input mass of second body in grams: ";
    cin>>mTwo;
    cout<<"Enter distance between two the two bodies in centimeters: ";
    cin>>dist;
    //function call
    dyne=gravF(mOne,mTwo,dist);
    //output the result of the function
    cout<<"The gravitational force between the two bodies is "<<dyne<<" dynes"<<endl;
    //ask user if he/she would like to repeat the program
    cout<<"Do you want to repeat the program? (Y/N): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right
    return 0;
}
float gravF(float mOne_par,float mTwo_par,float dist_par)//function heading
{
    return (G*mOne_par*mTwo_par)/(dist_par*dist_par);
}


