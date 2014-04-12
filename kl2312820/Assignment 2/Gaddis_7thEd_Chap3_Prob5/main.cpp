/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 16, 2014, 10:48 AM
 * Purpose: To find the gross profit, net box office profit
 * and amount paid to the distributor
 */
//System Libraries
#include <iostream> //I/O
#include <cmath> //Mathematical Equations
#include <iomanip> //Formatting

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char movName[50];
    int aTixSold,cTixSold;
    float aTixPrc,cTixPrc,gProfit,nProfit,monDist;
    
    //Assign Variables
    aTixPrc=6;
    cTixPrc=3;
    //Input the name of the movie
    cout<<"Input the name of the movie."<<endl;
    cin.getline (movName,50);
    //Input the number of adult tickets sold
    cout<<"Input the number of adult tickets sold."<<endl;
    cin>>aTixSold;
    //Input the number of child tickets sold
    cout<<"Input the number of child tickets sold."<<endl;
    cin>>cTixSold;
    //Calculate the gross profit
    gProfit=(aTixPrc*aTixSold)+(cTixPrc*cTixSold);
    //Calculate the net profit
    nProfit=gProfit*0.20;
    //Calculate the amount paid to Distributor
    monDist=gProfit-nProfit;
    //Output the results
    cout<<setprecision(2)<<fixed;
    cout<<endl;
    cout<<"Movie Name:"<<setw(35)<<movName<<endl;
    cout<<"Adult Tickets Sold:"<<setw(25)<<aTixSold<<endl;
    cout<<"Child Tickets Sold:"<<setw(25)<<cTixSold<<endl;
    cout<<"Gross Box Office Profit:"<<setw(15)<<"$ "<<gProfit<<endl;
    cout<<"Net Box Office Profit:"<<setw(17)<<"$ "<<nProfit<<endl;
    cout<<"Amount Paid to Distributor:"<<setw(12)<<"$ "<<monDist<<endl;
return 0;
}

