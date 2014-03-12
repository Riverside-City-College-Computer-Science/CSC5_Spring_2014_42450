/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 8, 2014, 5:36 PM
 * Purpose: Determine if a room is in violation of fire law regulations.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
//Variable Declaration
    int mxCap, pplAtt, xtrppl;
    char ans;

do
{    
    
//Input Room Capacity and People Attending    
    cout<<"\n";
    cout<<"Hello, please enter the maximum room capacity for";
    cout<<" your meeting room: ";
    cin>>mxCap;
    cout<<"\n";
    cout<<"Enter the number of people attending the meeting: ";
    cin>>pplAtt;
    cout<<"\n";

//Output If and Else Calculations and Statements    
    if (pplAtt <= mxCap)
    {
        xtrppl=mxCap-pplAtt;
        cout<<"Your meeting will not violate local fire regulation.\n";
        cout<<"\n";
        cout<<"You may invite another ";
        cout<<xtrppl;
        cout<<" people to your event if you wish.";
        cout<<"\n";
    }
    else
    {    
        xtrppl=pplAtt-mxCap;
        cout<<"Local fire regulation prevent your meeting from proceeding, \n";
        cout<<"you have exceeded the room capacity for your event.\n";
        cout<<"If you would like your meeting to continue as planned,\n";
        cout<<"please exclude ";
        cout<<xtrppl;
        cout<<" people from your event.\n";
    }
cout<<"\n";

//Recalculate Option

    cout<<"Would you like to recalculate?\n";
    cout<<"Press y for yes, n for no, and then press enter:";
    cin>>ans;   
} while (ans == 'y' || ans == 'Y');    

cout<<"\n";
cout<<"Thank you... Good-bye.\n";

//Exit Stage Right!    
    return 0;
}

