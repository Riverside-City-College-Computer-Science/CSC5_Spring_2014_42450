/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 16, 2014, 10:59 PM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{

    //Declare Variables
    int roomcapacity, attendppl, invitedppl;
    char choice;
    do
    {
        //Input Maximum room capacity
        cout<<"Enter Maximum room capacity";
        cin>>roomcapacity;
        //Input number of people to attend to the meeting
        cout<<"Enter number of people to attend to the metting";
        cin>>attendppl;
        //if attending people is less than capacity
       if (attendppl <= roomcapacity) 
       {
           cout<<" Meeting can be conducted legally"<<endl;
           
           if(roomcapacity - attendppl)
           {
               cout<<roomcapacity - attendppl;
               cout<<"more people can attend the meeting"<<endl;
           }    
       }
       else
       {
           cout<<"Meeting could not be legal"<<endl;
           cout<<(attendppl - roomcapacity);
           cout<<"People must be excluded to the meeting to be legal"<<endl;
       }
        cout<<"If you want to repeat the calculation press 'Y'";
        cin>>choice;
       }
    while (choice == 'y' || choice == 'Y');
    
    system("Pause");
    
    return 0;
}

