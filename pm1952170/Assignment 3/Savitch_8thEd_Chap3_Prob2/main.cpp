/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 22, 2014, 2:50 PM
 * Purpose: Calculate the minimum payment for a revolving credit account.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables and Floats
    float intr,oneP,fiftP,tot_Due,mim_Pay;
    int act_Bal;
    
    //Prompt user for input
    cout<<"Enter account balance: $";
    cin>>act_Bal;
    cout<<endl;    
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //if-else for if account balance is under 1000
    if (act_Bal<=1000)
    {
        intr=.015*act_Bal;//interest for 1.5%
        tot_Due=intr+act_Bal;//total due
        //Outputs
        cout<<"Your interest due is $"<<intr<<endl;
        cout<<"Total due $"<<tot_Due<<endl;        
    }
    //if-else for if account balance is over 1000
    else if (act_Bal>1000)
    {
        oneP=.01*(act_Bal-1000);//equation for 1%
        fiftP=1000*.015;//equation for 1.5%
        intr=oneP+fiftP;//interest totaled
        tot_Due=intr+act_Bal;//total due
        //Outputs
        cout<<"Your interest due is $"<<intr<<endl;
        cout<<"Total due $"<<tot_Due<<endl;
    }
    //if statement for if total is above $10
        if (tot_Due>10)
    {
       mim_Pay=.1*tot_Due;
       cout<<"Your minimum pay is $"<<mim_Pay<<endl;
    }
    //if statement for if total is below $10
        if (tot_Due<=10)
                mim_Pay=tot_Due;
    else cout<<endl;
    
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right                    
    return 0;
}

