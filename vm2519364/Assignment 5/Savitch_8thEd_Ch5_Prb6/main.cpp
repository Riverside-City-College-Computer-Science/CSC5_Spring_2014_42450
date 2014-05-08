/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 3, 2014, 8:16 PM
 * Unit Conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void input6(float& feet, float& inch);
void cnvrt6(float& feet, float& inch, float& mtrs, float& cmtrs);
void outpt6(float& feet, float& inch, float& mtrs, float& cmtrs);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float feet, inch, mtrs, cmtrs;
    char ans;
    do{
    //Function Call
    input6(feet, inch);
    cnvrt6(feet, inch, mtrs, cmtrs);
    outpt6(feet, inch, mtrs, cmtrs);
    cout<<"Would you like to convert another length?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}
void input6(float& feet, float& inch){
    cout<<"\n";
    cout<<"Convert your length from feet and inches to meters and centimeters.\n";
    cout<<"Enter your length in two parts, feet then inches.\n\n";
    cout<<"Feet: ";
    cin>>feet;
    cout<<"Inches: ";
    cin>>inch;     
    cout<<"\n";
    cout<<"You entered "<<feet<<"\'"<<inch<<"\"";
    cout<<"\n";
}
void cnvrt6(float& feet, float& inch, float& mtrs, float& cmtrs){
        feet=feet+(inch/12);
        mtrs=feet*0.3048;
        cmtrs=mtrs*100;     
}
void outpt6(float& feet, float& inch, float& mtrs, float& cmtrs){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"\n";
    cout<<"Your length in meters: "<<mtrs<<" meters"<<endl;
    cout<<"Your length in centimeters: "<<cmtrs<<" centimeters"<<endl;
    cout<<"\n";
}