/* 
 * File:   main.cpp
 * Author: Home Computer
 *
 * Created on April 11, 2014, 3:58 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float intrst = 0.03;
const float divide = 0.06;
const float TXSV = 0.35;

//Function prototype
float aMortg(float intrst_par, float initlL2_par);
float initlL(float homeP_par, float downP_par);

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float homeP, downP, initlL2, aMortg2, aMortg3;
    char ans;
    
    do{
    //Inputting
    cout << "Hi, please add the the cost of the house you recently "
            "purchased\n";
    cin >> homeP;
    cout << "Insert the down payment\n";
    cin >> downP;
    
    //Calculations
    initlL2 = initlL(homeP, downP);
    aMortg2 = aMortg(intrst, initlL2);
    aMortg3 = aMortg2 * TXSV;
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting
    cout << "Your annual after-tax cost is " << aMortg3 << endl;
    cout << "Would you like to try again?\Y = Yes\nn = No\n";
    cin >> ans;
    
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
    return 0;
}
float aMortg(float intrst_par, float initlL2_par)
{
    return (intrst_par + initlL2_par);
}

float initlL(float homeP_par, float downP_par)
{
    return (homeP_par - downP_par);
}