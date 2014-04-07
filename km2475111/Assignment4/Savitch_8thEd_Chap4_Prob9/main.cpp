/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 7, 2014, 9:01 AM
 * Purpose: computes clothing based on user measurements
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float height,weight,hatSize,jackSz,waistSz;
    unsigned short age;
    string ans;
    bool SENTINEL=true;
    while(SENTINEL){
        //Ask for measurements
        cout<<"What is your weight(lbs)? ";
        cin>>weight;
        cout<<"What is your height(inches)? ";
        cin>> height;
        cout<<"What is your age? ";
        cin>>age;
        cout<<endl;
        //calculate measurements
        //Hat Size
        hatSize=(weight/height)*2.9;
        //Jacket Size
        if(age<40){
            jackSz=((height*weight)/288);
        }
        else{
            float adjstmt=age%10;
            jackSz=((height*weight)/288)+(0.125*adjstmt);
        }
        //Waist Size
        if(age<30){
            waistSz=(weight/5.7);
        }
        else{
            float adjstmt=age%2;
            waistSz=(weight/5.7)+(0.1*adjstmt);
        }
        //display results
        cout<<left<<setw(20)<<"Hat Size:"
            <<right<<setw(10)<<hatSize<<endl
            <<left<<setw(20)<<"Jacket Size:"
            <<right<<setw(10)<<jackSz<<endl
            <<left<<setw(20)<<"Waist Size:"
            <<right<<setw(10)<<waistSz<<endl
            <<endl;
        //prompt for repeat
        cout<<"Would you like to try again (y/n)? ";
        cin>>ans;
        //check to  make sure the ans is proper
        while(ans!="y"&&ans!="n"&&ans!="yes"&&
              ans!="no"&&ans!="N"&&ans!="No"){
            cout<<"That is not a proper response."<<endl
                <<"Please type yes or no."<<endl;
            cin>>ans;
        }
        //exit if no
        if(ans=="n"||ans=="no"||ans=="N"||ans=="No"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }
        //do nothing but loop if ans is yes
        else{}
    }
    return 0;
}

