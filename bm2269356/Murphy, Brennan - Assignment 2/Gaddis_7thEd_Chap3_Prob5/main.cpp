/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 9:25 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function Prototypes

//Constants Definitions
const float THEATERPERCENT = .20;

//Execution Starts here

int main(int argc, char** argv) {
    //Calculate the amount of profit for a movie
    string movieName;
    float priceKid = 3.00, priceAdult = 6.00, grossProfit, netProfit, distAmt;
    int kidTickets, adultTickets;
    
    cout << "What is the name of the movie? ";
    cin >> movieName;
    
    cout << "How many adult tickets were sold? ";
    cin >> adultTickets;
    
    cout << "How many kid tickets were sold? ";
    cin >> kidTickets;
    
    grossProfit = (kidTickets * priceKid) + (adultTickets * priceAdult);
    netProfit = grossProfit * THEATERPERCENT;
    distAmt = grossProfit - netProfit;
    
    cout << fixed << setprecision(2) << setw(30) << endl;
    cout << left << "Movie Name: ";
    cout << right << "\"" << movieName << "\"" << endl;
    cout << left << setw(30) << "Adult Tickets Sold:";
    cout << right << adultTickets << endl;
    cout << left << setw(30) << "Kid Tickets Sold:";
    cout << right << kidTickets << endl;
    cout << left << setw(30) << "Gross Box Office Profit:";
    cout << right << "$" << grossProfit << endl;
    cout << left << setw(30) << "Net Box Office Profit:";
    cout << right << "$" << netProfit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:";
    cout << right << "$" << distAmt << endl; 
    
    //Exit Stage Right
}