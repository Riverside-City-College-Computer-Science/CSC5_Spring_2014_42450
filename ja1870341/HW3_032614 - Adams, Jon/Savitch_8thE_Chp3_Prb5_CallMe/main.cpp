/* 
 * File:   main.cpp
 * Author: Adams, Jonathan -42450
 *
 * Created on March 28, 2014, 11:09 PM
 */

#include <iostream>

using namespace std;
//Global Constants
//Function prototypes
//Execution 
int main(int argc, char** argv) {
//Declare variables
    float dWeek=.40,nWeek=.25,wkend=.15;
    int length, time;
    char dInput1, dInput2;
    cout<<"Please enter the time of the day your call started"<<endl;
    cout<<"in a 4 digit, 24H format. EX: 1:30PM = 1330"<<endl;
    cin>>time;
    cout<<"Enter the length of your call in whole minutes"<<endl;
    cin>>length;
    cout<<"Please enter the day of your call using"<<endl;
    cout<<"two character format. Ex. (Mo, Tu, We, Th, Fr, Sa, Su)"<<endl;
    cin>>dInput1>>dInput2;
    if ((dInput1=='m')||(dInput1=='M')||(dInput1=='t')||(dInput1=='T')||
            (dInput1=='w')||(dInput1=='W')||(dInput1=='f')||(dInput1=='F'))  {
        if (time>759&&time<1800) {
            cout<<"Your "<<length<<" minute call cost $";
            cout<<length*dWeek<<" at a rate of "<<dWeek<<" per minute"<<endl;
            return 0;
        }
        else {
            cout<<"Your "<<length<<" minute call cost $";
            cout<<length*nWeek<<" at a rate of "<<nWeek<<" per minute"<<endl;
            return 0;
        }
    }
    else if ((dInput1=='s')||(dInput1=='S')) {
        cout<<"Your "<<length<<" minute call cost $";
        cout<<length*wkend<<" at a rate of "<<wkend<<" per minute"<<endl; 
        return 0;
    }
    else { 
        cout<<"Invalid input";
    }
    return 0;
}

