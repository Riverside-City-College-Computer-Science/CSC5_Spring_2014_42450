/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 2, 2014, 10:32 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants
float VelLite=1.86e5f;//186,000 miles per hour
float CnvSM=6e1f;//60 Sec/Min
float CnvMH=6e1f;//60 Min/Hour
float CnvHD=2.4e1f;//24 Hour/Day
float CnvDY=3.65e2f;//365 Day/Year
//funtion prototypes

//execution Begins Here!
int main(int argc, char** argv) {
     //Declare Input and Output variables
    float dLYears,VEscape;
    float dMiles,tReach;
    //Set the initial conditions
    dLYears=4.2;//Light years to Proxima Centauri
    VEscape=1e5;//Escape velocity from the Solar System
    //Calculations
    dMiles=dLYears*VelLite*CnvSM*CnvMH*CnvHD*CnvDY;
    tReach=dMiles/VEscape/CnvHD/CnvDY;
    //Output the Results
    cout<<"Light Years to Proxima Centauri = "<<dLYears<<endl;
    cout<<"Solar System Escape Velocity = "<<VEscape<<
            " Miles/Hour"<<endl;
    cout<<"Distance = "<<dMiles<<" Miles"<<endl;
    cout<<"Time to Reach = "<<tReach<<" Years"<<endl;
    return 0;
}