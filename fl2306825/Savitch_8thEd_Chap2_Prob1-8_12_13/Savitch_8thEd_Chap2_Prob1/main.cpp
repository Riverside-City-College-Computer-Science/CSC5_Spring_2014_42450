/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 14, 2014, 2:15 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function Prototype

//Execution Starts Here!
int main(int argc, char** argv) {
    
    
    //Declare variable
    float crl, metrc, numBox;
    float mt = 35273.92;
    char yn;
    
    do{
    //Input Weight of cereal in ounces
    cout << "Hello, please enter the weight of your cereal box..\n";
    cin >> crl;
    
    //Calculations
    metrc = crl / mt;
    
    //Output answer
    cout << "your cereal box weighs ";
    cout << metrc;
    cout << " tons.\n";
    
   //Calculate for 1 metric ton
    numBox = mt / crl;
    
    //Answer
    cout << "To yield 1 metric ton, you would require ";
    cout << numBox << " of cereal box\n";
    
    //Looping
    cout << "Do you want to repeat this again?\n\n y: Yes\n n: No\n";
    cin >> yn;
    } while (yn=='y' || yn=='Y');  
    
    cout << "Goodbye.";

    //Execution ends here
    return 0;
}
    

