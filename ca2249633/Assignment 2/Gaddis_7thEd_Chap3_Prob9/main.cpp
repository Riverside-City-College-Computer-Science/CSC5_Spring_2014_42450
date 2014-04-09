/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 16, 2014, 3:57 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float palWght, totWght, numWidg, wigWght=9.2;
    
    //Prompt user for weight of the pallet by itself and with 
    //the widgets stacked.
    cout<<"How much does the pallet weigh(lbs) by itself?"<<endl;
    cin>>palWght;
    cout<<"How much does the pallet weigh(lbs) with"<<endl;
    cout<<"the widgets stacked on top?"<<endl;
    cin>>totWght;
    
    //Calculate the number of widgets stacked on the pallet
    numWidg=(totWght-palWght)/wigWght;
    
    //output the number of widgets on the pallet
    cout<<"There are "<<numWidg<<" widgets on the pallet.";

    return 0;
}

