/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 3:17 PM
 * calculate an individuals net take home pay after taxes and fees.
 * person makes $16.78
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables and floats
    int hours,kids;
    float grpay, rate=16.78, sstax, inctax, sttax, unifee, takehm;
    //Prompt user for inputs
    cout<<"Enter number of hours worked"<<endl;
    cin>>hours;
    cout<<"enter number of kids you have "<<endl;
    cin>>kids;
    //if-else statements if the individual worked OT vs if he/she did not    
    if (hours>40)
        grpay=(rate*40)+(1.5*rate)*(hours-40);
    else
        grpay=(rate*hours);
    //Equations for withholdings
    sstax=(grpay*.06);
    inctax=(grpay*.14);
    sttax=(grpay*.05);
    unifee=10;
    //if-else statements if the individual had 3 or more kids.
    if (kids>=3)
        takehm=grpay-sstax-inctax-sttax-unifee-35;
    else
        takehm=grpay-sstax-inctax-sttax-unifee;
    //Set to 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Outputs
    cout<<"gross pay = $"<<grpay<<endl;
    cout<<"social security withheld $"<<sstax<<endl;
    cout<<"federal income tax withheld $"<<inctax<<endl;
    cout<<"state income tax withheld $"<<sttax<<endl;
    cout<<"union fees withheld $"<<unifee<<endl;
    cout<<"net take home pay for the week is $"<<takehm<<endl;   
    
          return 0;
}

