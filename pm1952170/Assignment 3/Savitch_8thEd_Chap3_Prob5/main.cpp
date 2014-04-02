/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 22, 2014, 4:52 PM
 * Purpose: write a program that computes the cost of a long-distance call.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    char frst,sec;
    int lngth,sTime;
    float total;
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Prompt user for inputs
    cout<<"Input day of the week using the first to letters of the day: ";
    cin>>frst>>sec;
    cout<<"Enter time call started in 24-hour notation (ex: 1:30pm is 1330): ";
    cin>>sTime;
    cout<<"What was the length of the call in minutes? ";
    cin>>lngth;

    //if-else Monday rates
    if (((frst=='M')||(frst=='m'))&&((sec=='O')||(sec=='o')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.40;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.25;
        }
        else cout<<endl;              
    }
    //if-else Tuesday rates
    if (((frst=='T')||(frst=='t'))&&((sec=='U')||(sec=='u')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.40;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.25;
        }
        else cout<<endl;              
    }
    //if-else Wednesday rates
    if (((frst=='W')||(frst=='w'))&&((sec=='E')||(sec=='e')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.40;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.25;
        }
        else cout<<endl;              
    }
    //if-else Thursday rates
    if (((frst=='T')||(frst=='t'))&&((sec=='H')||(sec=='h')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.40;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.25;
        }
        else cout<<endl;              
    }
    //if-else Friday rates
    if (((frst=='F')||(frst=='f'))&&((sec=='R')||(sec=='r')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.40;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.25;
        }
        else cout<<endl;              
    }
    //if-else Saturday rates
    if (((frst=='S')||(frst=='s'))&&((sec=='A')||(sec=='a')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.15;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.15;
        }
        else cout<<endl;              
    }
    //if-else Sunday rates
        if (((frst=='S')||(frst=='s'))&&((sec=='U')||(sec=='u')))
    {
        if ((sTime>=800)||(sTime<=1800))
        {
            total=lngth*.15;
        }
        if ((sTime<=800)||(sTime>=1800))
        {
            total=lngth*.15;
        }
        else cout<<endl;              
    }
    cout<<endl;
    //Output total charges        
    cout<<"The total cost of your call was $"<<total<<endl;
    //Exit Stage Right    
        
        return 0;
}