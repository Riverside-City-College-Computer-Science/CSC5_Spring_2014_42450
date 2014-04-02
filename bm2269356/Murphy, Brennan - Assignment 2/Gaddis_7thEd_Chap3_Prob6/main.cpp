/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 9:28 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Constants Definitions
const float WIDGETWEIGHTEA = 9.2;
//Execution Starts here

int main(int argc, char** argv) {
    //Determine how many widgets are on a pallet
    float palletWeight, palletWeightFull;
    int numberOfWidgets;
    
    cout << "How much does the pallet weigh (in LBs) without any widgets? ";
    cin >> palletWeight;
    
    cout << "How much does the pallet weigh (in LBs) with the widgets on it? ";
    cin >> palletWeightFull;
    
    int difference = palletWeightFull - palletWeight;
    numberOfWidgets = WIDGETWEIGHTEA * difference;
    
    cout << "It appears there are " << numberOfWidgets << " widgets on this pallet." << endl;
    
    //Exit Stage Right
}


