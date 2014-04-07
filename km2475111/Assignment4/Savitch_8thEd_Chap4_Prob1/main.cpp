/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 7, 2014, 7:47 AM
 * Purpose: To calculate miles per gallon a car can deliver.
 */

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

//Global constants
const float LITCONV=0.264179;//liters to gallons
//Function Prototype

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    bool SENTINEL=true;
    string ans;
    float litrGas=0,galGas=0,miles=0,mpg=0;
    //loop until user chooses not to
    while(SENTINEL){
        //Ask user for car model and number of miles/gallons
        cout<<"How man liters of gas is used by your car?"<<endl;
        cin>>litrGas;
        cout<<"How many miles did our car travel with "<<litrGas
            <<" liters of gasoline?"<<endl;
        cin>>miles;
        //Convert liters to gallons
        //1 liter = 0.264179 gallons
        galGas=litrGas*LITCONV;
        //Calculate the miles per gallon
        mpg=miles/galGas;
        //output results
        cout<<fixed<<setprecision(4)<<showpoint
            <<"Your car outputs "<<mpg<<" miles per gallon of gasoline."
            <<endl;
        //Prompt to repeat
        cout<<"Would you like to test again (y/n)? ";
        cin>>ans;
        //check to  make sure the ans is proper
        while(ans!="y"&&ans!="n"&&ans!="yes"&&
              ans!="no"&&ans!="N"&&ans!="No"){
            cout<<"That is not a proper response."<<endl
                <<"Please type yes or no."<<endl;
            cin>>ans;
        }
        //exit when user input no
        if(ans=="n"||ans=="no"||ans=="N"||ans=="No"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }
        //do nothing if ans is yes
        else{}
    }
    return 0;
}

