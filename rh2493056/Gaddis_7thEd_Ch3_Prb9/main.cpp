/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 17, 2014, 9:56 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float loan, insure, gas, oil, tires, maint, totalMonth, totalYear;
    
    //Ask user to input monthly costs
    cout<<"Please input the monthly cost of your car loan payment, insurance, gas, oil, tires, and maintenance"<<endl;
    
    //Input monthly costs
    cin>>loan>>insure>>gas>>oil>>tires>>maint;
    
    //Calculate monthly and yearly total
    totalMonth=loan+insure+gas+oil+tires+maint;
    totalYear=totalMonth*12;
            
    //Output monthly and yearly cost
    cout<<"Total Monthly Cost of Expenses = $"<<setprecision(2)<<fixed<<totalMonth<<endl;
    cout<<"Total Yearly Cost of Expenses = $"<<setprecision(2)<<fixed<<totalYear<<endl;
    //Exit Stage Right
    return 0;
}

