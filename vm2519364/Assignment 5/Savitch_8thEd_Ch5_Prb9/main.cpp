/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 4, 2014, 10:14 AM
 * Covert pounds and ounces to kilograms and grams
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void input9(float& pound, float& ounce);
void cnvrt9(float& pound, float& ounce, float& kg, float& g);
void outpt9(float& pound, float& ounce, float& kg, float& g);
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float pound, ounce, kg, g;
    //Function Call
    input9(pound, ounce);
    cnvrt9(pound, ounce, kg, g);
    outpt9(pound, ounce, kg, g);            
    //Exit Stage Right
    return 0;
}

void input9(float& pound, float& ounce){
    cout<<"\n";
    cout<<"Enter your weight in pounds and then ounces.\n";
    cout<<"Pounds(lbs): ";
    cin>>pound;
    cout<<"Ounces(oz): ";
    cin>>ounce;
    cout<<"\n";
}
void cnvrt9(float& pound, float& ounce, float& kg, float& g){
    pound=pound+(ounce/16);
    kg=(pound/2.2046);
    g=kg*1000;
            
}
void outpt9(float& pound, float& ounce, float& kg, float& g){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your weight has been converted to the following units. \n";
    cout<<"kilograms: ";
    cout<<kg;
    cout<<"\n";
    cout<<"grams: ";
    cout<<g;
    cout<<"\n";
}