/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 3, 2014, 9:08 PM
 * Purpose: Deep Fried Twinkie Vending Machine Calculations
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes


//Execution Starts Here
int main(int argc, char** argv) {
    float coinIn, totl, chng;
    
    cout<<"DEEP FRIED TWINKIES - $3.50";
    cout<<"\n";
    cout<<"\n";
    cout<<"Vending Machine Only Accepts The Following Coins";
    cout<<"\n";
    cout<<"$1.00, $.25, $.10, and $.05";
    cout<<"\n";
    cout<<"\n";
    totl=0;
    do{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"Insert Coin: ";       
    cin>>coinIn;
        totl=totl+coinIn;
        cout<<"You have inserted $";
    cout<<totl;
    cout<<"\n";
    }while (totl<3.50);
    chng=totl-3.50;
       if (chng>0){
       cout<<"\n";
       cout<<"Your change is: $";
       cout<<chng;
       cout<<"\n";
       cout<<"\n";
       cout<<"Enjoy your deep-fried twinkie!";
       cout<<"\n";
       }else
       {
           cout<<"\n";
           cout<<"Enjoy your deep-fried twinkie!";
           cout<<"\n";
       }
    return 0;
}

