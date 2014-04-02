/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 25, 2014, 1:44 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int sales;
    float comissn;
    //Input the amount of sales (in dollars)
    cout<<"Input the amount of sales (in dollars):"<<endl;
    cin>>sales;
    cout<<endl;
    //If else if statement to determine the sales and commission for <=10000
    if (sales>=15000)
    {
        comissn=0.20*sales;
        //Output the Results
        cout<<"Your commission is $"<<comissn<<"."<<endl;
    }
    //Else if for sales and commission for >10000
    else if (sales>=10000)
    {
        comissn=0.15*sales;
        //Output the Results
        cout<<"Your commission is $"<<comissn<<"."<<endl;
    }
    else
    {
        comissn=0.10*sales;
        //Output the Results
        cout<<"Your commission is $"<<comissn<<"."<<endl;
    }
    //Exit Stage Right!
    return 0;
}

