/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 5, 2014, 9:05 PM
 * Convert from kilograms or grams to pounds and ounces
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void inpt(float& mass1, float& mass2, int& pick);
void calc(float& mass1, float& mass2, float& mass2o, float& mass1o);
void outpt(float& mass1, float& mass2, float& mass2o, float& mass1o);

//Execution Starts here
int main(int argc, char** argv) {
    //Declare Variables
    float mass1, mass2, mass2o, mass1o;
    int pick;
   //Function Call
   inpt(mass1, mass2, pick);
   calc(mass1, mass2, mass2o, mass1o);  
   outpt(mass1, mass2, mass2o, mass1o);  
    //Exit Stage Right
    return 0;
}

void inpt(float& mass1, float& mass2, int& pick){
    cout<<"\n";
    cout<<"Convert your mass from kilograms or grams to pounds and ounces.\n";
    cout<<"Enter 1 for kilograms, 2 for grams: ";
    cin>>pick;
    if(pick==1){
        cout<<"\n";
        cout<<"Enter your mass, in kilograms: ";
        cin>>mass1;
    }else if (pick==2){
        cout<<"\n";
        cout<<"Enter your mass, in grams: ";
        cin>>mass2;
    }
}
void calc(float& mass1, float& mass2, float& mass2o, float& mass1o){
    float cnvrtlb=2.2046;
    float cnvrtkg=1000;
    mass1=mass1*cnvrtlb;
    mass1o=mass1*16;
    mass2=(mass2/cnvrtkg)*cnvrtlb;
    mass2o=mass2*16;
}
void outpt(float& mass1, float& mass2, float& mass2o, float& mass1o){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(mass2==0&&mass2o==0){
        cout<<"\n";
        cout<<"Your mass converts to "<<mass1<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass1o<<" ounces.";
        cout<<"\n";
    }else if (mass1==0&&mass1o==0){
        cout<<"\n";
        cout<<"Your mass converts to "<<mass2<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass2o<<" ounces.";
        cout<<"\n";
    }
}