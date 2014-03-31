/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 26, 2014, 10:29 PM
 * Purpose: Assignment 3
 */

//Include system libraries
#include <cstdlib>//I/O stream
#include <iostream>
#include <cmath>//calculations
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char day1,day2;
    int timeCal, lngtCal;
    float costCal;
    //prompt for call info
    cout<<"Let's calculate the cost of your long distance call"<<endl;
    cout<<"Enter the day of the week of the call "<<endl;
    cout<<"Enter the day using the first 2 letters of the name of the day"<<endl;
    cin>>day1>>day2;
    cout<<"Enter the time that you started the call."<<endl;
    cout<<"Enter the time using a 24 hours clock."<<endl;
    cin>>timeCal;
    cout<<"Enter the length of the call to the nearest minute"<<endl;
    cin>>lngtCal;
    
    //begin if/else statement to determine charge per minute
    if ((day1=='S'||day1=='s')&&(day2=='A'||day2=='a')){
        //calc cost for Saturday call
        costCal=lngtCal*.15;
    }    
    else if((day1=='S'||day1=='s')&&(day2=='U'||day2=='u')){
        //calc cost for Sunday call
        costCal=lngtCal*.15;
    }
    else if((day1=='M'||day1=='m')&&(day2=='O'||day2=='o')){
        //determine call start time
        if (timeCal>=800&&timeCal<=1800){
          //calc cost for Monday call
          costCal=lngtCal*.40;
        }
        else{
          costCal=lngtCal*.25;  
        }
    }    
    else if((day1=='T'||day1=='t')&&(day2=='U'||day2=='u')){
        //determine call start time
        if (timeCal>=800&&timeCal<=1800){
          //calc cost for Monday call
          costCal=lngtCal*.40;
        }
        else{
          costCal=lngtCal*.25;  
        }   
        
    }
    else if((day1=='W'||day1=='w')&&(day2=='E'||day2=='e')){
        //determine call start time
        if (timeCal>=800&&timeCal<=1800){
          //calc cost for Monday call
          costCal=lngtCal*.40;
        }
        else{
          costCal=lngtCal*.25;  
        }
    } 
    else if((day1=='T'||day1=='t')&&(day2=='H'||day2=='h')){
        //determine call start time
        if (timeCal>=800&&timeCal<=1800){
          //calc cost for Monday call
          costCal=lngtCal*.40;
        }
        else{
          costCal=lngtCal*.25;  
        }
    }
    else if((day1=='F'||day1=='f')&&(day2=='R'||day2=='r')){
        //determine call start time
        if (timeCal>=800&&timeCal<=1800){
          //calc cost for Monday call
          costCal=lngtCal*.40;
        }
        else{
          costCal=lngtCal*.25;  
        }
    }
    
            //set decimal place to 2
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        //output cost
        cout<<"The total cost of the call is"<<endl;
        cout<<"$"<<costCal<<endl;  
    return 0;
}