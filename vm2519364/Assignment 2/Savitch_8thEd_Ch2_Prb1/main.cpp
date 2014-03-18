/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 5, 2014, 8:46 PM
 * Purpose: Calculate the Weight of a Cereal Box in Metric Tons
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {

//Declare Variables
float crlBox, mTbox, totBoxs, mT=35273.92;

//Input Weight of Cereal Box in Ounces
cout<<"Enter the weight of your cereal box (in ounces): ";
cin>>crlBox;
cout<<"\n";

//Convert Cereal Weight from Ounces to Metric Tons
mTbox = crlBox/mT;

//Output Cereal Box Weight in Metric Tons
cout<<"Your "<<crlBox<<" ounce cereal box weights ";
cout<<mTbox;
cout<<" metric tons.\n";
cout<<"\n";

//Calculate Amount of Boxes Required to Yield 1 Metric Ton
totBoxs = mT/crlBox;

//Output the Amount of Boxes Required to Yield 1 Metric Ton
cout<<"You would require ";
cout<<totBoxs;
cout<<" boxes of cereal to yield 1 metric ton.\n ";

//Exit Stage Right    
    return 0;
}

