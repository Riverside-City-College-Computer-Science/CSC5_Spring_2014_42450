/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 9:40 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Constants Definitions
const int COOKIESINBAG = 40, SERVINGSPERBAG = 10, SERVINGSCOOKIES = 4, CALSPERSERVING = 300;
//Execution Starts here

int main(int argc, char** argv) {
    //Tell the user how many calories are in the cookies they have eaten
    int cookiesEaten;
    float calsPerCookie, calsConsumed;
    
    cout << "How many cookies have you actually eaten? ";
    cin >> cookiesEaten;
    
    //Calculate amount of calories for one cookie
    calsPerCookie = CALSPERSERVING / SERVINGSCOOKIES;
    calsConsumed = cookiesEaten * calsPerCookie;
    
    cout << "You have consumed about " << calsConsumed << " calories from those " << cookiesEaten << " cookies eaten." << endl;
    //Exit Stage Right
    return 0;
}


