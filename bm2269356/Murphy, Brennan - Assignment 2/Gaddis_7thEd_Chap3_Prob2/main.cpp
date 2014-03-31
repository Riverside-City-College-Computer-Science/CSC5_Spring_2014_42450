/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 6:57 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes

//Constants Definitions
const int CLASSAPRICE = 15, CLASSBPRICE = 12, CLASSCPRICE = 9;

//Execution Starts here

int main(int argc, char** argv) {
    //Calculate profit from ticket sales of various tiers
    int classA, classB, classC;
    float sumTotalSales;
    
    cout << "How many Class A tickets would you like? ";
    cin >> classA;
    
    cout << "How many Class B tickets would you like? ";
    cin >> classB;

    cout << "How many Class C tickets would you like? ";
    cin >> classC;
    
    sumTotalSales = (classA * CLASSAPRICE) + (classB * CLASSBPRICE) + (classC * CLASSCPRICE);
    
    cout << showpoint << fixed << setprecision(2) << endl;
    cout << "You sold " << classA << " class A tickets, " << classB << " class B tickets, and " << classC << " class C tickets." << endl;
    cout << "The profit from the sales of all these is $" << sumTotalSales << "." << endl;
    
    //Exit Stage Right
    return 0;
}