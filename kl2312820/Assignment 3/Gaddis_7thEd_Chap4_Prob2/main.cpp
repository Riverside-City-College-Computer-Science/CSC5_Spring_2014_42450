/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 26, 2014, 1:00 PM
 * Purpose: To convert a number to Roman Numerals
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    //Input a number from One to Ten
    cout<<"Please input a number between 1 and 10."<<endl;
    cin>>num;
    if (num>10||num<1)
    {
        cout<<"That is not a valid number. "<<endl; 
    }
    //Calculate the Roman Numeral equivalent
    switch(num){
        case 10:cout<<"X";break;
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    return 0;
}