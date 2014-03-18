/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 *Box office
 * Created on March 17, 2014, 3:15 PM
 */
//system libs
#include <iostream>
#include <iomanip>

//global constants 
const short ATIC=6;
const short CTIC=3;

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
//declare variables
   std::string movie;
    short adults, childs;
    //user input
    cout<<"enter in the name of the film "<<endl;
    std::getline (std::cin,movie);
    cout<<"how many adult tickets were sold?"<<endl;
    cin>>adults;
    cout<<"how many child tickets were sold?"<<endl;
    cin>>childs;
    //calculations
     float grospft=adults*ATIC+childs*CTIC;
     float thetpft=grospft*2e-1;
     float distpft=grospft-thetpft;
    //output
     cout<<fixed<<setprecision(2)<<showpoint;
     cout<<"Movie Name "<<setw(25)<<movie<<endl;
     cout<<"Adult Tickets Sold "<<setw(15)<<adults<<endl;
     cout<<"Child Tickets Sold "<<setw(15)<<childs<<endl;
     cout<<"Gross Box office Profit "<<setw(8)<<"$"<<grospft<<endl;
     cout<<"Net Box Office Profit "<<setw(10)<<"$"<<thetpft<<endl;
     cout<<"Amount Paid to Distributor "<<setw(5)<<"$"<<distpft<<endl;
     //exit stage right  
    return 0;
}

