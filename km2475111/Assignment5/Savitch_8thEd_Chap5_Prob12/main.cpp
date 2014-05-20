/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on May 14, 2014, 7:13 PM
 * Purpose: combine problems 8 and 11
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global constants

//Function Prototypes
void getInput1(float &,float &);//ft & in -> m & cm
void getInput2(float &,float &);//m & cm -> ft & in
void getInput3(float &,float &);//lbs & oz -> kg & g
void getInput4(float &,float &);//kg & g -> lbs & oz
void convert1(float, float, float &, float &);//ft & in -> m & cm
void convert2(float, float, float &, float &);//m & cm -> ft & in
void convert3(float, float, float &, float &);//lbs & oz -> kg & g
void convert4(float, float, float &, float &);//kg & g -> lbs & oz
void print1(float,float,float,float);//ft & in -> m & cm
void print2(float,float,float,float);//m & cm -> ft & in
void print3(float,float,float,float);//lbs & oz -> kg & g
void print4(float,float,float,float);//kg & g -> lbs & oz
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    bool cntLoop=true;
    int choice1,choice2,choice3;
    float input1,input2,conv1,conv2;
    //loop until user quits
    do{
        //ask whether to convert weights or lengths
        cout<<"Do want to convert lengths or weights?"<<endl
            <<"To convert lengths, press 1."<<endl
            <<"To convert weights, press 2"<<endl;
        cin>>choice1;
        switch(choice1){
            case 1:{
                //ask user how they will convert
                cout<<"To convert feet & inches to "
                    <<"meters & centimeters, press 1."<<endl
                    <<"To convert meters & centimeters "
                    <<"to feet & inches, press 2."<<endl;
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
                break;
            }
            case 2:{
                //ask user how they will convert
                cout<<"To convert pounds & ounces "
                    <<"to kilograms & grams, press 1."<<endl
                    <<"To convert kilograms & grams "
                    <<"to pounds & ounces, press 2."<<endl;
                cin>>choice2;
                switch(choice2){
                    case 1:{
                        //Gather user input
                        getInput3(input1,input2);
                        //convert
                        convert3(input1,input2,conv1,conv2);
                        //output
                        print3(input1,input2,conv1,conv2);
                        break;
                    }
                    case 2:{
                        //Gather user input
                        getInput4(input1,input2);
                        //convert
                        convert4(input1,input2,conv1,conv2);
                        //output
                        print4(input1,input2,conv1,conv2);
                        break;
                    }
                    default:{
                        cout<<"Incorrect selection."<<endl;
                    }
                }
                break;
            }
            default:{
                cout<<"Incorrect selection."<<endl;
            }
        }
        //Prompt user to repeat or quit
        cout<<endl<<"To try again, press 1."<<endl
            <<"To Quit, press any other key."<<endl;
        cin>>choice3;
        switch(choice3){
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
void getInput3(float &num1,float &num2){
    cout<<"Enter a weight (in pounds): ";
    cin>>num1;
    cout<<"Enter a weight (in ounces): ";
    cin>>num2;
}
void getInput4(float &num1,float &num2){
    cout<<"Enter a weight (in kilograms): ";
    cin>>num1;
    cout<<"Enter a weight (in grams): ";
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
void convert3(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float LBSTKG=2.2046;
    const float GTKG=1000.0;
    const float OZTLBS=16.0;
    //convert num1 and num2
    cnvrt1=num1/LBSTKG;
    cnvrt2=((num2/OZTLBS)/LBSTKG)*GTKG;
}
void convert4(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float LBSTKG=2.2046;
    const float GTKG=1000.0;
    const float OZTLBS=16.0;
    //convert num1 and num2
    cnvrt1=num1*LBSTKG;
    cnvrt2=((num2*OZTLBS)*LBSTKG)/GTKG;
}
void print1(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" ft"<<" = "<<cnvr1<<" m"<<endl
        <<num2<<" in"<<" = "<<cnvr2<<" cm"<<endl;
}
void print2(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" m"<<" = "<<cnvr1<<" ft"<<endl
        <<num2<<" cm"<<" = "<<cnvr2<<" in"<<endl;
}
void print3(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" lbs"<<" = "<<cnvr1<<" kg"<<endl
        <<num2<<" oz"<<" = "<<cnvr2<<" g"<<endl;
}
void print4(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" kg"<<" = "<<cnvr1<<" lbs"<<endl
        <<num2<<" g"<<" = "<<cnvr2<<" oz"<<endl;
}