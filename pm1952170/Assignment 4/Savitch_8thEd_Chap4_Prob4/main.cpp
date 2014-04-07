/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 6, 2014, 9:41 AM
 * Purpose: Calculate the rate of inflation
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float rate(float hotdog_par,float hotdogT_par);//Function Declaration
//hotdog is the price of hot dogs today
//hotdogT is the price of hotdogs 1 year ago
//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    float hotdog, hotdogT, perc;
    char ans;
    do{
    //Prompt user for inputs
    //Ask user for price of hot dog today and 1 year ago.
    cout<<"Please enter the price of a hot dog today: $";
    cin>>hotdog;
    cout<<"Please enter the price of a hot dog a year ago: $";
    cin>>hotdogT;
    //function call
    perc=rate(hotdog,hotdogT);
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //output percent of inflation.
    cout<<"the rate of inflation for hot dogs is "<<perc<<"%."<<endl;
    //Repeat calculations
    cout<<"Would you like to repeat this program? (Y/N): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    cout<<endl;
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right   
    return 0;   
    
}
float rate(float hotdog_par,float hotdogT_par){//Function heading
    return ((hotdog_par - hotdogT_par)/hotdogT_par)*100;
    }

