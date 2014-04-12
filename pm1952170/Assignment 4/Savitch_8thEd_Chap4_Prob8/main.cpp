/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 6, 2014, 8:14 PM
 * Purpose: Create a program that totals the annual after-tax cost of a house
 *          after down payment.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float cos(float aMor_par,float taxS_par);
//aMor represents the annual morgage
//taxS represents the tax savings
float tax(float ilb_par,float intrT_par,float taxS_par);
//ilb represents the inital loan balance
//intrT represents the 6% tax
//taxS represents the tax savings
float mor(float intr_par, float ilb_par, float intrT_par);
//intr represents the 3% tax
//ilb represents the inital loan balance
//taxS represents the tax savings
float ilBal(float pHouse_par, float dPaymt_par);
//pHouse represents the price of the house
//dPaymt represents the down payment
//Execution Beings Here
int main(int argc, char** argv) {
    //Define Variables
    float pHouse,dPaymt,ilb,aMor,intr=.03,intrT=.06,sPerc,taxS=.35,cost;
    char ans;
    //Prompt user for inputs
    //user inputs price of house and down payment
    do{
    cout<<"Enter the price of your house $";
    cin>>pHouse;
    cout<<"Enter the down payment $";
    cin>>dPaymt;
    //set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //function calls
    ilb=ilBal(pHouse,dPaymt);
    aMor=mor(intr,ilb,intrT);
    taxS=tax(ilb,intrT,taxS);    
    cost=cos(aMor,taxS);
    //output the total after-tax cost
    cout<<"Your annual after-tax cost is $"<<cost<<" for the first year of ownership"<<endl;
    cout<<endl;
    cout<<"Would you like to repeat the program? (Y/N): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right
    return 0;
}
float cos(float aMor_par,float taxS_par){//function heading
    return (aMor_par-taxS_par);
}
float tax(float ilb_par,float intrT_par,float taxS_par){//function heading
    return ((ilb_par*intrT_par)*taxS_par);
}
float mor(float intr_par, float ilb_par, float intrT_par){//function heading
    return ((intr_par*ilb_par)+(intrT_par*ilb_par));
}
float ilBal(float pHouse_par, float dPaymt_par){//function heading
    return (pHouse_par-dPaymt_par);
}