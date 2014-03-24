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
    char frst,sec;
    int lngth,sTime;
    float total;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Input day of the week using the first to letters of the day: ";
    cin>>frst>>sec;
    cout<<"Enter time call started in 24-hour notation (ex: 1:30pm is 1330): ";
    cin>>sTime;
    cout<<"What was the length of the call in minutes? ";
    cin>>lngth;

    
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
            
    cout<<"The total cost of your call was $"<<total<<endl;
    //Exit Stage Right    
        
        return 0;
}