/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem2.18:One large chemical company pays its salespeople on a commission basis. The salespeople 
 *             receive $200 per week plus 9 percent of their gross sales for that week. For example, a
 *             salesperson who sells $5000 worth of chemicals in a week receive $200 plus 9 percent of 
 *             $5000, or a total of $650. Develop a C++ program that will input each salesperson's gross
 *             sales for last week and calculate and display that salesperson's earning. Process one 
 *             salesperson's figures at a time. 
 *
 * Created on March 24, 2014, 10:05 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    float sales,grossSales;
    cout << "Enter sales in dollars (-1 to end):";
    cin >> sales;
    
    
   
    
    //Processing Phase
    while ( sales != -1){
    grossSales= 200+ sales*.09;
            cout << "Your salary is:$ " << grossSales<< endl; 
            cout << "Enter sales in dollars (-1 to end):";
            cin >> sales;
    }
    
    
    return 0;
}

