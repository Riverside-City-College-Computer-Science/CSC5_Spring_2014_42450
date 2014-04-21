/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 6, 2014, 10:16 AM
 * Purpose: Modify program 4 to include future prices.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float rate(float hotdog_par,float lastyr_par);//Function Declaration
//dotdog is the price of hot dogs today
//lastyr is the price of hotdogs 1 year ago
float cost(float perc_par,float hotdog_par);
//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    float hotdog, lastyr, perc, yraft, yraftT;
    char ans;
    do{
    //Prompt user for inputs
    //Ask user for price of hot dog today and 1 year ago.
    cout<<"Please enter the price of a hot dog today: $";
    cin>>hotdog;
    cout<<"Please enter the price of a hot dog a year ago: $";
    cin>>lastyr;
    //function call
    perc=rate(hotdog,lastyr);
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //output percent of inflation.
    cout<<"the rate of inflation for hot dogs is "<<perc<<"%."<<endl;
    //function call for year after
    yraft=cost(perc,hotdog);
    //output estimated cost for the year after
    cout<<"the estimated cost of hotdogs in one year is $"<<yraft<<endl;
    //function call for the year after that
    yraftT=cost(perc,yraft);
    //output estimated price for the year after that
    cout<<"the estimated cost of hotdogs in two years is $"<<yraftT<<endl;
    //ask user to repeat calculations
    cout<<"Would you like to repeat this program? (Y/N): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    cout<<endl;
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right   
    return 0;   
    
}
float rate(float hotdog_par,float lastyr_par){//Function heading
    return ((hotdog_par - lastyr_par)/lastyr_par)*100;
    }
float cost(float perc_par,float hotdog_par){
    return (perc_par/100)*hotdog_par+hotdog_par;
}


