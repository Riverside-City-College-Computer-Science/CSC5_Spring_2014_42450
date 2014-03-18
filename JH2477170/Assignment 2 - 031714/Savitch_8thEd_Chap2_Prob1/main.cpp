/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 14, 2014, 11:23 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float mTon=35273.92, ozBox, totBoxs, mtBox;
    char ans;
    
    do{
        
        //Fixed decimal point, not using
        //iomanip for formatting
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(5);
    
        //Input Weight in ounces
        cout<<"Press return after input."<<endl;
        cout<<endl;
        cout<<"Enter cereal box weight in ounces: ";
        cin>>ozBox;
    
        //Convert ounces into metric Tons
        mtBox=ozBox/mTon;
        cout<<"Your cereal box weight is "<<mtBox<<" metric tons."<<endl;
    
        //Calculate amount of boxes
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        totBoxs=mTon/ozBox;
        cout<<"The amount of cereal boxes to equal one metric ton is ";
        cout<<totBoxs<<" boxes"<<endl;
        cout<<endl;
        cout<<"If you would like to restart the process, "<<endl;
        cout<<"Either Press (Y) for yes or (N) for no, then press return:";
        cin>>ans;
        cout<<endl;
    }while (ans == 'y' || ans =='Y');
    
    //Exit Stage Right!
    return 0;
}

