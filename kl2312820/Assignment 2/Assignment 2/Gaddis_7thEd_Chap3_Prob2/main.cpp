/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 13, 2014, 9:20 AM
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
    float aSeats,bSeats,cSeats;
    float aCost,bCost,cCost,incom;
    //Assign Variables
    aCost=15;
    bCost=12;
    cCost=9;
    //Input the number of seats sold per class
    cout<<"How many seats were sold for each seat class "<<endl;
    cout<<"in the stadium?"<<endl;
    cout<<"Class A?"<<endl;
    cin>>aSeats;
    cout<<"Class B?"<<endl;
    cin>>bSeats;
    cout<<"Class C?"<<endl;
    cin>>cSeats;
    //Converting the income
    incom=aCost*aSeats+bCost*bSeats+cCost*cSeats;
    //Output amount of income generated
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The income generated from the ticket sales is: "<<endl;
    cout<<"$"<<incom;
    //Exit Stage Right!
    return 0;
}

