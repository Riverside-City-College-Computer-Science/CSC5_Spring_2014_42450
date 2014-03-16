/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 3, 2014, 8:42 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants
const int MINUTE=60;
const int SECOND=3600;
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Variables
    float milePHr, secPMil;
    int hours, minutes, seconds;
    cout<<"Please enter your speed in MPH, rounded to the nearest tenth"<<endl;
    cin>>milePHr;
    //Calculations
        //Setting precision
    cout<<fixed<<setprecision(2)<<showpoint;
        //Converting MPH to seconds per mile pace
    secPMil=(SECOND/milePHr);
        //Time format
// ??? I don't understand "static cast"
        hours=static_cast<int>(secPMil/SECOND);
        secPMil=secPMil-hours*SECOND;
        minutes=static_cast<int>(secPMil/MINUTE);
        secPMil=secPMil-minutes*MINUTE;
        seconds=secPMil;
    //Display message
        cout<<"Your pace is a ";
    //Displaying time    
            cout<<minutes<<" minute and ";
        if (seconds <10)
            cout<<"0"<<seconds<<" second mile"<<endl;
        else
            cout<<seconds<<" seconds mile"<<endl;     
    //Display in seconds without converting to time format; its for reference
    //for me to check and experiment with the code
    cout<<"This is a "<<SECOND/milePHr<<" second mile ";
    //Exit Stage Right
    return 0;
}

