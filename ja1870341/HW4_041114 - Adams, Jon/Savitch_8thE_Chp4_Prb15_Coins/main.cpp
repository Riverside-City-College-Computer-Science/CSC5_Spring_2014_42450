/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11, 2014, 11:01 PM
 */
//System libraries
#include <iostream>

using namespace std;
//Global Constants
//Function prototypes
//Execution
int main(int argc, char** argv) {
    //variables
    float input, sum=0;
    //prompt
    cout<<"It cost $3.50 to buy a twinkie."<<endl;
    cout<<"Input your coins! Press 1 for a dollar, 2 for a quarter, \n";
    cout<<"3 for a dime and 4 for a nickel!!"<<endl;
    //inputs
    do {
        cout<<"Insert coin: "<<endl;
        cin>>input;
        if (input==1) {
            sum=sum+100;
        }
        else if (input==2) {
            sum=sum+25;
        }
        else if (input==3) {
            sum=sum+10;
        }
        else if (input==4) {
            sum=sum+5;
        }
        else {
            cout<<"Invalid input"<<endl;
        }
        cout<<"Current total is $"<<sum/100<<endl;
    } while (sum<350);
    
    cout<<"You have bought a twinkie!"<<endl;
            //Exit stage right
    return 0;
}

