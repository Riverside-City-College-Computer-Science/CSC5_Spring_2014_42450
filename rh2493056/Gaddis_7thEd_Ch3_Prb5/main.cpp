/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 8:36 PM
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
    string movieName;
    unsigned short tickAdlt, tickKid;
    float profitGross, profitNet, amntPaid;
    
    //Ask user for movie name
    cout<<"Please input the name of the movie whose profits you wish to calculate"<<endl;
    
    //Input movie name
    getline(cin, movieName);
    
    //Ask user for tickets sold
    cout<<"Please input the amount of Adult and Child tickets sold"<<endl;
    
    //Input tickets sold
    cin>>tickAdlt>>tickKid;
    
    //Calculate gross profit, net profit, and amount paid
    profitGross=tickAdlt*6+tickKid*3;
    profitNet=profitGross*0.2;
    amntPaid=profitGross-profitNet;
    
    //Output movie name, ticket sales, profits, and amount paid
    cout<<"Movie Name:                 ''"<<right<<movieName<<"''"<<endl;
    cout<<"Adult Tickets Sold:            "<<right<<tickAdlt<<endl;
    cout<<"Child Tickets Sold:            "<<right<<tickKid<<endl;
    cout<<"Gross Box Office Profit:    $"<<right<<setprecision(2)<<fixed<<profitGross<<endl;
    cout<<"Net Box Office Profit:      $"<<right<<setprecision(2)<<fixed<<profitNet<<endl;
    cout<<"Amount Paid to Distributor: $"<<right<<setprecision(2)<<fixed<<amntPaid<<endl;
    
    //Exit Stage Right
    return 0;
}

