/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 24, 2014, 9:25 AM
 * Purpose: determine gross pay for # hours worked
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    bool cntMenu=true;
    char choice;
    float hours,rate,gross,hrUnd20,hrUnd40,hrOvr40;
    //loop until user wished to stop
    do{
        //Ask user for hours worked
        cout<<"How many hours have you worked this week?"<<endl
            <<"(i.e. 29 1/2 hours = 29.5): ";
        cin>>hours;
        cout<<"What is your rate of pay? ";
        cin>>rate;
        cout<<endl;
        //calculate gross pay
        //calculates if hours are 20 or under
        if(hours<20){
            hrUnd20=0.0f;
            gross=hours*rate;
            cout<<"You worked "<<hours<<" hours at a rate of $"
                <<rate<<" per hour."<<endl
                <<"Payment increase = 0.0"<<endl
                <<"Gross for above hours: "<<(hrUnd20*rate)<<endl;
        }
        //calculates if hours are above 20 but 40 or below
        else if(hours<=40){
            hrUnd40=40.0f-hours;
            gross=(hours*rate)+((hrUnd40*rate)*1.5f);
            cout<<"You worked "<<hours<<" hours at a rate of $"
                <<rate<<" per hour."<<endl
                <<"Hours (over 20 and under 40): "<<hrUnd40<<endl
                <<"Payment increase = x1.5"<<endl
                <<"Gross for above hours: "<<(hrUnd40*rate)*1.5f<<endl;
        }
        //if hours greater than 40
        else{
            hrUnd40=20;
            hrOvr40=hours-40.0f;
            gross=(hours*rate)+((hrUnd40*rate)*1.5f)+((hrOvr40*rate)*2.0f);
            cout<<"You worked "<<hours<<" hours at a rate of $"
                <<rate<<" per hour."<<endl
                <<"Hours (over 20 and under 40): "<<hrOvr40<<endl
                <<"Payment increase = x2"<<endl
                <<"Gross for above hours: "<<(hrOvr40*rate)*2.0f<<endl;
        }
        //displays calculated gross payment
        cout<<"Total straight-time pay: $"<<gross<<endl<<endl;
        //ask to go again
        cout<<"Would you to try a different rate (y/n)? ";
        cin>>choice;
        //waits for proper response
        while(choice!='y'&&choice!='n'){
            cout<<"Enter a valid entry (y or n): ";
            cin>>choice;
        }
        if(choice=='n'){
            cout<<"Thank you and come again!"<<endl;
            cntMenu=false;
        }
        else{cout<<endl;}
    }while(cntMenu);
    //Exit Stage Right!!
    return 0;
}

