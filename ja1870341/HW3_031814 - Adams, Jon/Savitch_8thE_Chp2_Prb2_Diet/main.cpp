/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 13, 2014, 10:21 PM
 */

#include <iostream>

using namespace std;

//Global Constants
const float SWEETP=1.0e-3;
const float GRAM_LBS=2.2046e-3;
const float LBS_GRAM=4.53592e2;
const float OZ_mL=2.9574e1;
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Variable
    unsigned int weight;
    cout<<"OK big guy, heres what you need to know!"<<endl;
    cout<<"It took 5 mL of aspartame to kill a 25g mouse"<<endl;
    cout<<"That mouse weighed "<<25*GRAM_LBS<<" pounds"<<endl;
    cout<<"Now, your 12oz diet soda has only 1/10th of a percent of"<<endl;
    cout<<"aspartame within it's ingredients; thats good news!"<<endl;
    cout<<"That means there's only "<<(12*OZ_mL)*SWEETP<<" ounces"<<endl;
    cout<<"of aspartame in one diet soda can!"<<endl;
    cout<<"It would take "<<5/(12*OZ_mL*SWEETP);
    cout<<" cans to kill a mouse!"<<endl;
    cout<<"It will take A LOT more to kill you. Enter your weight"<<endl;
    cout<<"In pounds to find out how many!(Round to whole #)"<<endl;
    cin>>weight;
    cout<<"It would take "<<((weight*LBS_GRAM)/5)/(12*OZ_mL*SWEETP);
    cout<<" diet soda cans in a day to provide the "<<(weight*LBS_GRAM)/5.0e3<<endl;
    cout<<"liters of aspartame needed to kill you"<<endl;
    cout<<"So drink up!";
    cin.get();
    cin.get();
    //Exit Stage Right
    return 0;
}

