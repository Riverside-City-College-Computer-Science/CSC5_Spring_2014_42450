/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on May 14, 2014, 6:11 PM
 * Purpose: Convert weights: lbs & oz -> kg & g
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global constants

//Function Prototypes
void getInput(float &,float &);
void convert(float, float, float &, float &);
void print(float,float,float,float);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    bool cntLoop=true;
    int choice;
    float input1,input2,conv1,conv2;
    do{
        
        //Gather user input
        getInput(input1,input2);
        //convert
        convert(input1,input2,conv1,conv2);
        //output
        print(input1,input2,conv1,conv2);
        //Prompt user to repeat or quit
        cout<<endl<<"To try again, press 1."<<endl
            <<"To Quit, press any other key."<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                //do not change cntLoop
                break;
            }
            default:{
                cout<<"Good-bye."<<endl;
                cntLoop=false;
            }
        }
    }while(cntLoop);
    //Exit Stage Right!!
    return 0;
}
void getInput(float &num1,float &num2){
    cout<<"Enter a weight (in pounds): ";
    cin>>num1;
    cout<<"Enter a weight (in ounces): ";
    cin>>num2;
}
void convert(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float LBSTKG=2.2046;
    const float GTKG=1000.0;
    const float OZTLBS=16.0;
    //convert num1 and num2
    cnvrt1=num1/LBSTKG;
    cnvrt2=((num2/OZTLBS)/LBSTKG)*GTKG;
}
void print(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" lbs"<<" = "<<cnvr1<<" kg"<<endl
        <<num2<<" oz"<<" = "<<cnvr2<<" g"<<endl;
}