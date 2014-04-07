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
    //car 1
    float litrGas=0,galGas=0,miles=0,mpg=0;
    //car 2
    float litrGas2=0,galGas2=0,miles2=0,mpg2=0;
    //loop until user chooses not to
    while(SENTINEL){
        //Ask user for car model and number of miles/gallons
        cout<<"How man liters of gas is used by car 1?"<<endl;
        cin>>litrGas;
        cout<<"How many miles did car 1 travel with "<<litrGas
            <<" liters of gasoline?"<<endl;
        cin>>miles;
        //ask for car 2
        cout<<"How man liters of gas is used by car 2?"<<endl;
        cin>>litrGas2;
        cout<<"How many miles did car 2 travel with "<<litrGas2
            <<" liters of gasoline?"<<endl;
        cin>>miles2;
        //Convert liters to gallons
        //1 liter = 0.264179 gallons
        galGas=litrGas*LITCONV;
        galGas2=litrGas2*LITCONV;
        //Calculate the miles per gallon
        mpg=miles/galGas;
        mpg2=miles2/galGas2;
        //output results
        cout<<fixed<<setprecision(4)<<showpoint
            <<"Car 1 outputs "<<mpg<<" miles per gallon of gasoline."
            <<endl
            <<"Car 2 outputs "<<mpg2<<" miles per gallon of gasoline."
            <<endl;
        //compare car mpg's
        if(mpg>mpg2){
            cout<<"Car 1 has the better fuel efficiency."<<endl;
        }
        else if(mpg<mpg2){
            cout<<"Car 2 has the better fuel efficiency."<<endl;
        }
        else{
            if(mpg==mpg2){
                cout<<"Both have equal efficiency."<<endl;
            }
        }
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