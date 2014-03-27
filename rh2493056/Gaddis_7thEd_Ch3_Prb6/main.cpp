/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 9:19 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float palletSingl, palletTotal, widgetWeigh, widgetNum;
    
    //Ask user to input pallet weight and total weight
    cout<<"Please input the weight in pounds of the pallet by itself"<<endl;
    cout<<"and the weight of the pallet with widgets stacked"<<endl;
    
    //Input the pallet and total weight
    cin>>palletSingl>>palletTotal;
    
    //Calculate widget weight and number
    widgetWeigh=palletTotal-palletSingl;
    widgetNum=widgetWeigh/9.2;
    
    //Output number of widgets
    cout<<"Number of widgets on pallet = "<<widgetNum<<endl;
    
    //Exit Stage Right
    return 0;
}

