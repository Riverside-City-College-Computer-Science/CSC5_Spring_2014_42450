/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 26, 2014, 07:35 PM
 */
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//variables
    float balance, total, intr1=.015, intr2=.01;
    char input;
    float penies;
    /* After playing with pennies =.005, I noticed you don't need to add
     * pennies because line 22,23,24 automatically have the program round up */
        cout<<"Please enter your account balance."<<endl;
        cin>>balance;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        if (balance<=1000){
            total=(balance*intr1)+balance;
            if (total<=10) {
                cout<<"You owe $"<<total+penies<<" dollars. ";
                cout<<"Pay balance in full."<<endl;
            }
            else if (total>10) {
                if ((((total*intr1)+total)/10)<=10) {
                cout<<"You owe $"<<total+penies<<" dollars. ";
                cout<<"Your minimum payment is 10 dollars.";
                }
                else {
                    cout<<"You owe $"<<total+penies<<" dollars. ";
                    cout<<"Your minimum payment is $"<<(((total*intr1)+total)/10)+penies<<" dollars.";
                    //Exit Stage Right
                    return 0;
                }
            }
        }
        else {
            total=((1000*intr1)+1000)+((balance-1000)*intr2)+(balance-1000);
            cout<<"Oh yeah, we got you good."<<endl;
            cout<<"You owe us $"<<total+penies<<" dollars."<<endl;
            cout<<"Your minimum payment (get used to that term) is $"<<(total/10)+penies<<" dollars"<<endl; 
        }
    
    return 0;
}

