/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 21, 2014, 8:49 PM
 * Purpose: Calculate Long Distance Call Charge
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    int hour, min, calltm;
    char day, day2, ans;  
    float cost, rate1=0.40, rate2=0.25, rate3=0.15;
    do{    
    //Input day of the week and time of the day
    cout<<"\n";
    cout<<"Please enter the day of the week.\n";
    cout<<"Only the first two letter are required (ex. Mo = Monday).\n";
    cout<<"\n";
    cout<<"Day of the week: ";
    cin>>day>>day2;
    cout<<"\n";
    cout<<"Now enter the time that the call started (in 24 hour format).\n";
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Minutes: ";
    cin>>min;
    cout<<"\n";
    cout<<"Length of call (in minutes): ";
    cin>>calltm;
    cout<<"\n";
    //Echo data inputs
    cout<<"Your call was made on ";    
    cout<<day<<day2;
    cout<<" at ";
    cout<<hour;
    cout<<":";
    if (min<10){
        cout<<"0";
        cout<<min;
    }else cout<<min;
    cout<<" hours and it lasted ";
    cout<<calltm;
    cout<<" minutes.";
    cout<<"\n";
    
    
    if (((day=='M')||(day2=='m'))&&((day=='O')||(day2='o')))
    {
        if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
        {
            cost=calltm*rate1;                    
        }else
        {
            cost=calltm*rate2;
        }
    }
    else if (((day=='T')||(day2=='t'))&&((day=='U')||(day2='u')))
    {
        if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
        {
            cost=calltm*rate1;                    
        }else
        {
            cost=calltm*rate2;
        }   
    }
    else if (((day=='W')||(day2=='w'))&&((day=='E')||(day2='e')))
    {
        if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
        {
            cost=calltm*rate1;                    
        }else
        {
            cost=calltm*rate2;
        }   
    }
    else if (((day=='T')||(day2=='t'))&&((day=='H')||(day2='h')))
    {
        if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
        {
            cost=calltm*rate1;                    
        }else
        {
            cost=calltm*rate2;
        }   
    
    }else if (((day=='F')||(day2=='f'))&&((day=='R')||(day2='r')))
    {
        if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
        {
            cost=calltm*rate1;                    
        }else
        {
            cost=calltm*rate2;
        }   
    
    }else if (((day=='S')||(day2=='s'))&&((day=='A')||(day2='a')))
    {
        {
            cost=calltm*rate3;
        }   
    
    }else if (((day=='S')||(day2=='s'))&&((day=='U')||(day2='u')))
    {
        {
            cost=calltm*rate3;
        }  
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output Cost
    cout<<"\n";
    cout<<"The cost of your call is $";
    cout<<cost;
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to recalculate your telephone call cost?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    } while ((ans=='y')||(ans=='Y'));
        cout<<"Have a nice day.\n";
    //Exit Stage Right
    return 0;
}

