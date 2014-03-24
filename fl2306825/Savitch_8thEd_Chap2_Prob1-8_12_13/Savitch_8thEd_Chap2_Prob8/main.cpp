/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 16, 2014, 3:46 PM
 */

//System Libraries
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//Global Constant
const float CNVPCNT = 100;

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare Variable
    float costItm, yearsP, infl, estCost;
    int count = 0;
    
    //Inputting item cost, years, and the inflation
    cout << "Hello, please input the cost of the item you will purchase yearly:\n";
    cin >> costItm;
    cout << "Input the numbers of years that the item will be purchased\n";
    cin >> yearsP;
    cout << "Input the percent rate of the inflation\n";
    cin >> infl;
    
    //Changing inflation into decimal
    infl = (infl/CNVPCNT);
    
    //Looping
    while(costItm < infl);
    {
        estCost = costItm + infl * costItm;
        count++;
    }
   
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The estimated cost for your item will be " << estCost;
    
    //Execution ends here
    return 0;
}

