/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 11:41 AM
 * program determines if room meets fire regulations, prompts user accordingly.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {   
    short numppl, maxrm, sptleft, sptexcd;
    
    //Prompt User Inputs
    cout<<"Enter max room capacity ";
    cin>>maxrm;           
    cout<<"Enter number of people in the meeting ";
    cin>>numppl;
    cout<<endl;
    
    //Equations for totals
    sptleft=maxrm-numppl;
    sptexcd=numppl-maxrm;
    
    //If-else statements
    if (numppl > maxrm)
    {
        cout<<"You are in violation of fire law regulations."<<endl;
        cout<<"Reduce number of people in meeting."<<endl;
        cout<<"You need to exclude "<<sptexcd<<" people from your meeting."<<endl;
    }
    else
    {
        cout<<"You meet the fire law regulations."<<endl;
        cout<<"It is legal to hold the meeting."<<endl;
        cout<<"You may have an additional "<<sptleft<<" people in your meeting."<<endl;
    }
    cout<<endl;
    cout<<"This is the end of the program."<<endl;
    
    //Exit Stage Right
    return 0;
}

