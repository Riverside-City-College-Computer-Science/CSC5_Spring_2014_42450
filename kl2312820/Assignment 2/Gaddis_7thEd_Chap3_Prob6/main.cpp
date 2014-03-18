/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 17, 2014, 12:55 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Define Variables
    float widget,pallet,netwt,grosswt,numwidg;
    //Assign Variables
    widget=9.2;
    grosswt=pallet+netwt;
    //Input the weight of the pallet alone
    //and the weight of the pallet with the widgets
    cout<<"How much does the pallet weigh (in pounds)?"<<endl;
    cin>>pallet;
    cout<<"How much does the pallet weigh (in pounds) with the ";
    cout<<"widgets stacked on it?"<<endl;
    cin>>grosswt;
    //Calculate the weight of the widgets
    //Calculate the number of widgets stacked on the pallet
    netwt=grosswt-pallet;
    numwidg=netwt/9.2;
    //Output the net weight
    cout<<setprecision(1)<<fixed<<showpoint<<endl;
    cout<<"The total number of widgets stacked on the ";
    cout<<"pallet is: "<<numwidg<<endl;
    //Exit Stage Right!
    return 0;
}

