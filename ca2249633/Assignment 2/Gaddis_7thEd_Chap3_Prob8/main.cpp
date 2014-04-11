/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 16, 2014, 2:07 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//global constants

//function prototypes

//executions begins here
int main(int argc, char** argv) {
    //declare variables
    string movie;
    float adult, child, gross, dist, net;
    
    //Input movie name and tickets sold
    cout<<"Enter movie name: ";
    getline(cin, movie);
    cout<<"Adult tickets sold: ";
    cin>>adult;
    cout<<"Child tickets sold: ";
    cin>>child;
    
    //calculate the gross and net
    gross=adult*6+child*3;
    dist=gross*.8;
    net=gross-dist;
    
    //Output summary including gross profit, amount 
    //paid to distributor, and net profit
    cout<<setw(30)<<left<<"Movie Name:";
    cout<<setw(10)<<right<<movie<<endl;
    cout<<setw(30)<<left<<"Adult Tickets Sold:";
    cout<<setw(10)<<right<<adult<<endl;
    cout<<setw(30)<<left<<"Child Tickets Sold:";
    cout<<setw(10)<<right<<child<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(25)<<left<<"Gross Box Office Profit:";
    cout<<setw(10)<<right<<"$"<<gross<<endl;
    cout<<setw(25)<<left<<"Amount Paid to Distributor:";
    cout<<setw(8)<<right<<"-$"<<dist<<endl;
    cout<<setw(25)<<left<<"Net Box Office Profit:";
    cout<<setw(10)<<right<<"$"<<net<<endl;
    

    return 0;
}

