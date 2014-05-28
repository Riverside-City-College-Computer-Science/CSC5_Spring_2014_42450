/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 14, 2014, 7:43 AM
 * Purpose: Convert feet & inches -> meters & centimeters
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global constants

//Function Prototypes
void getInput1(float &,float &);
void getInput2(float &,float &);
void convert1(float, float, float &, float &);
void convert2(float, float, float &, float &);
void print1(float,float,float,float);
void print2(float,float,float,float);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    bool cntLoop=true;
    int choice1,choice2;
    float input1,input2,conv1,conv2;
    //loop until user quits
    do{
        //ask user how they will convert
        cout<<"To convert from feet & inches to meters & centimeters,"<<endl
            <<"Press 1."<<endl
            <<"To convert from meters & centimeters to feet & inches,"<<endl
            <<"Press 2."<<endl;
        cin>>choice1;
        switch(choice1){
            case 1:{
                //Gather user input
                getInput1(input1,input2);
                //convert
                convert1(input1,input2,conv1,conv2);
                //output
                print1(input1,input2,conv1,conv2);
                break;
            }
            case 2:{
                //Gather user input
                getInput2(input1,input2);
                //convert
                convert2(input1,input2,conv1,conv2);
                //output
                print2(input1,input2,conv1,conv2);
                break;
            }
            default:{
                cout<<"Incorrect selection."<<endl;
            }
        }
        //Prompt user to repeat or quit
        cout<<endl<<"To try again, press 1."<<endl
            <<"To Quit, press any other key."<<endl;
        cin>>choice2;
        switch(choice2){
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
void getInput1(float &num1,float &num2){
    cout<<"Enter a length (in feet): ";
    cin>>num1;
    cout<<"Enter a length (in inches): ";
    cin>>num2;
}
void getInput2(float &num1,float &num2){
    cout<<"Enter a length (in meters): ";
    cin>>num1;
    cout<<"Enter a length (in centimeters): ";
    cin>>num2;
}
void convert1(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float MTRTFT=0.3048;
    const float CNTTMTR=100.0;
    const float INCHTFT=12.0;
    //convert num1 and num2
    cnvrt1=num1*MTRTFT;
    cnvrt2=((num2/INCHTFT)*MTRTFT)*CNTTMTR;
}
void convert2(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float MTRTFT=0.3048;
    const float CNTTMTR=100.0;
    const float INCHTFT=12.0;
    //convert num1 and num2
    cnvrt1=num1/MTRTFT;
    cnvrt2=((num2*INCHTFT)/MTRTFT)/CNTTMTR;
}
void print1(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" ft"<<" = "<<cnvr1<<" m"<<endl
        <<num2<<" in"<<" = "<<cnvr2<<" cm"<<endl;
}
void print2(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" m"<<" = "<<cnvr1<<" ft"<<endl
        <<num2<<" cm"<<" = "<<cnvr2<<" in"<<endl;
}