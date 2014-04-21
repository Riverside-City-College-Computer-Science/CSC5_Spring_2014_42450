/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 11, 2014, 6:50 PM
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants
const float LITCONV=0.264179;//liters to gallons
//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
//Problem 13 functions
string nmWrd1(short);
string nmWrd2(short);
void plySong(short,short);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool exitMnu=false;
    int choice;
    //loop menu
    while(!exitMnu){
        //Ask user to select problem to test
        cout<<"Choose which problem you wish to test."<<endl
            <<"Press any other key to quit."<<endl
            <<"1. Savitch 8thEd Chap 4 Prob 1"<<endl
            <<"2. Savitch 8thEd Chap 4 Prob 2"<<endl
            <<"3. Savitch 8thEd Chap 4 Prob 4"<<endl
            <<"4. Savitch 8thEd Chap 4 Prob 5"<<endl
            <<"5. Savitch 8thEd Chap 4 Prob 6"<<endl
            <<"6. Savitch 8thEd Chap 4 Prob 9"<<endl
            <<"7. Savitch 8thEd Chap 4 Prob 13"<<endl;
          /*<<"8. Savitch 8thEd Chap 4 Prob 1"<<endl
            <<"9. Savitch 8thEd Chap 4 Prob 1"<<endl
            <<"10. Savitch 8thEd Chap 4 Prob 1"<<endl;*/
        cin>>choice;
        //Instantiate Menu
        switch(choice){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
          /*case 8:prob8();break;
            case 9:prob9();break;
            case 10:prob10();break;*/
            default:{
                exitMnu=true;
                cout<<"Good-bye!"<<endl;
            }
        }
    }
    //Exit Stage Right!
    return 0;
}
//function solutions here
void prob1(){
    //problem 1 - savitch 8thEd chap 4
    //declare variables
    bool SENTINEL=true;
    string ans;
    float litrGas=0,galGas=0,miles=0,mpg=0;
    //begin loop
    while(SENTINEL){
        //Ask user for car model and number of miles/gallons
        cout<<"How man liters of gas is used by your car?"<<endl;
        cin>>litrGas;
        cout<<"How many miles did our car travel with "<<litrGas
            <<" liters of gasoline?"<<endl;
        cin>>miles;
        //Convert liters to gallons
        //1 liter = 0.264179 gallons
        galGas=litrGas*LITCONV;
        //Calculate the miles per gallon
        mpg=miles/galGas;
        //output results
        cout<<fixed<<setprecision(4)<<showpoint
            <<"Your car outputs "<<mpg
            <<" miles per gallon of gasoline."<<endl;
        //Prompt to repeat
        cout<<"Would you like to test again (y/n)? ";
        cin>>ans;
        //check to  make sure the ans is proper
        while(ans!="y"&&ans!="n"&&ans!="yes"&&
              ans!="no"&&ans!="N"&&ans!="No"){
            cout<<"That is not a proper response."<<endl
                <<"Please type yes or no."<<endl;
            cin>>ans;
        }
        //exit when user input no
        if(ans=="n"||ans=="no"||ans=="N"||ans=="No"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }
        //do nothing if ans is yes
        else{}
    }
}
void prob2(){
    //problem 2 - savitch 8thEd chap 4
    //Declare Variables
    bool SENTINEL=true;
    string ans;
    //car 1
    float litrGas=0,galGas=0,miles=0,mpg=0;
    //car 2
    float litrGas2=0,galGas2=0,miles2=0,mpg2=0;
    //loop until user chooses not to
    while(SENTINEL){
        //Ask user for car model and number of miles/gallons
        cout<<"How man liters of gas is used by car 1?"<<endl;
        cin>>litrGas;
        cout<<"How many miles did car 1 travel with "<<litrGas
            <<" liters of gasoline?"<<endl;
        cin>>miles;
        //ask for car 2
        cout<<"How man liters of gas is used by car 2?"<<endl;
        cin>>litrGas2;
        cout<<"How many miles did car 2 travel with "<<litrGas2
            <<" liters of gasoline?"<<endl;
        cin>>miles2;
        //Convert liters to gallons
        //1 liter = 0.264179 gallons
        galGas=litrGas*LITCONV;
        galGas2=litrGas2*LITCONV;
        //Calculate the miles per gallon
        mpg=miles/galGas;
        mpg2=miles2/galGas2;
        //output results
        cout<<fixed<<setprecision(4)<<showpoint
            <<"Car 1 outputs "<<mpg<<" miles per gallon of gasoline."
            <<endl
            <<"Car 2 outputs "<<mpg2<<" miles per gallon of gasoline."
            <<endl;
        //compare car mpg's
        if(mpg>mpg2){
            cout<<"Car 1 has the better fuel efficiency."<<endl;
        }
        else if(mpg<mpg2){
            cout<<"Car 2 has the better fuel efficiency."<<endl;
        }
        else{
            if(mpg==mpg2){
                cout<<"Both have equal efficiency."<<endl;
            }
        }
        //Prompt to repeat
        cout<<"Would you like to test again (y/n)? ";
        cin>>ans;
        //check to  make sure the ans is proper
        while(ans!="y"&&ans!="n"&&ans!="yes"&&
              ans!="no"&&ans!="N"&&ans!="No"){
            cout<<"That is not a proper response."<<endl
                <<"Please type yes or no."<<endl;
            cin>>ans;
        }
        //exit when user input no
        if(ans=="n"||ans=="no"||ans=="N"||ans=="No"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }
        //do nothing if ans is yes
        else{}
    }
}
void prob3(){
    //problem 4 - savitch 8thEd chap 4
    //declare variables
    string ans;
    float infRate,pastPrc,curPrc;
    bool SENTINEL=true;
    //loop until user says to exit
    while(SENTINEL){
        //ask for current and past prices
        cout<<"What is the current price of item? ";
        cin>>curPrc;
        cout<<"What is the price of item from last year? ";
        cin>>pastPrc;
        //calculate inflation
        infRate=((pastPrc-curPrc)/pastPrc)*100.00f;
        //output inflation rate
        cout<<"Inflation Rate: "
            <<fixed<<showpoint<<setprecision(2)
            <<infRate<<"%"<<endl
            <<"Again (y/n)? ";
        //receive answer for loop
        if(ans=="no"||ans=="No"||ans=="n"|ans=="N"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }else{}
    }
}
void prob4(){
    //problem 5 - savitch 8thEd chap 4
    //declare variables
    string ans;
    float infRate,pastPrc,curPrc,prcIncr;
    bool SENTINEL=true;
    //loop until user says to exit
    while(SENTINEL){
        //ask for current and past prices
        cout<<"What is the current price of item? ";
        cin>>curPrc;
        cout<<"What is the price of item from last year? ";
        cin>>pastPrc;
        //calculate inflation
        infRate=((pastPrc-curPrc)/pastPrc)*100.00f;
        prcIncr=curPrc*(infRate/100.00f);
        //output inflation rate
        cout<<"Inflation Rate: "
            <<fixed<<showpoint<<setprecision(2)
            <<infRate<<"%"<<endl
            <<"The price increase for this item will be $"
            <<fixed<<showpoint<<setprecision(2)<<prcIncr<<endl
            <<"After 1 year, the price will be $"
            <<fixed<<showpoint<<setprecision(2)
            <<curPrc+prcIncr<<endl
            <<"Again (y/n)? ";
        //receive answer for loop
        if(ans=="no"||ans=="No"||ans=="n"|ans=="N"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }else{}
    }
}
void prob5(){
    //Problem 6 - Savitch 8thEd Chap 4
    //declare variables
    string ans;
    float curBal,iBal,mRate,interest,intrDue;
    short term;
    const float PERC=100.00f;
    bool SENTINEL=true;
    //set up loop
    while(SENTINEL){
        cout<<"Enter your current balance: ";
        cin>>curBal;
        iBal=curBal;
        cout<<"Enter the Interest Rate in percent (%) ";
        cin>>mRate;
        cout<<"Enter the Number of Months to pay: ";
        cin>>term;
        //calculate interest
        while(term>0){
            intrDue=iBal*mRate;
            iBal+=intrDue;
            interest+=intrDue;
            term--;
        }
        //output results of calculated interest
        cout<<fixed<<showpoint<<setprecision(2)
            <<"Previous Balance: "<<setw(5)<<"$"<<curBal<<endl
            <<"Total Interest Due: "<<setw(3)<<"$"<<interest<<endl
            <<"End-of-Term Balance: "<<setw(2)<<"$"<<iBal<<endl
            <<"Again (y/n)? ";
        cin>>ans;
        //receive answer for loop
        if(ans=="no"||ans=="No"||ans=="n"|ans=="N"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }else{}
    }
}
void prob6(){
    //problem 9 - Savitch 8thEd Chap 4
    //Declare variables
    float height,weight,hatSize,jackSz,waistSz;
    unsigned short age;
    string ans;
    bool SENTINEL=true;
    //loop the problem
    while(SENTINEL){
        //Ask for measurements
        cout<<"What is your weight(lbs)? ";
        cin>>weight;
        cout<<"What is your height(inches)? ";
        cin>> height;
        cout<<"What is your age? ";
        cin>>age;
        cout<<endl;
        //calculate measurements
        //Hat Size
        hatSize=(weight/height)*2.9;
        //Jacket Size
        if(age<40){
            jackSz=((height*weight)/288);
        }
        else{
            float adjstmt=age%10;
            jackSz=((height*weight)/288)+(0.125*adjstmt);
        }
        //Waist Size
        if(age<30){
            waistSz=(weight/5.7);
        }
        else{
            float adjstmt=age%2;
            waistSz=(weight/5.7)+(0.1*adjstmt);
        }
        //display results
        cout<<left<<setw(20)<<"Hat Size:"
            <<right<<setw(10)<<hatSize<<endl
            <<left<<setw(20)<<"Jacket Size:"
            <<right<<setw(10)<<jackSz<<endl
            <<left<<setw(20)<<"Waist Size:"
            <<right<<setw(10)<<waistSz<<endl
            <<endl;
        //prompt for repeat
        cout<<"Would you like to try again (y/n)? ";
        cin>>ans;
        //check to  make sure the ans is proper
        while(ans!="y"&&ans!="n"&&ans!="yes"&&
              ans!="no"&&ans!="N"&&ans!="No"){
            cout<<"That is not a proper response."<<endl
                <<"Please type yes or no."<<endl;
            cin>>ans;
        }
        //exit if no
        if(ans=="n"||ans=="no"||ans=="N"||ans=="No"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }
        //do nothing but loop if ans is yes
        else{}
    }
}
void prob7(){
    //Problem 13 - Savitch 8thEd Chap 4
    //declare variables:
    bool SENTINEL=true;
    string ans;
    unsigned short cnt,tenths,ones;
    while(SENTINEL){
        //ask for how many bottles to count
        cout<<"Enter the # of beer bottles: ";
        cin>>cnt;
        cout<<"Let's sing Ninety-nine bottles of beer!"<<endl<<endl;
        //nested loop
        while(cnt>0){
            tenths=cnt/10;
            ones=cnt%10;
            plySong(tenths,ones);
            if(tenths==0&&ones==1)cout<<" bottle of Beer on the wall,"<<endl;
            else cout << " bottles of beer on the wall,"<<endl;
            plySong(tenths,ones);
            if(tenths==0&&ones==1)cout<<" bottle of beer!"<<endl;
            else cout<<" bottles of beer!"<<endl;
            cout<<"Take one down & pass it around,"<<endl;
            cnt--;
            tenths=cnt/10;
            ones=cnt%10;
            plySong(tenths,ones);
            if(tenths==0&&ones==1)cout<<" bottle of beer on the wall!"<<endl;
            else cout << " bottles of beer on the wall!"<<endl<<endl;
        }
        //determine if looping again
        if(ans=="n"||ans=="no"||ans=="N"||ans=="No"){
            cout<<"Good-bye."<<endl;
            SENTINEL=false;
        }else{}
    }
}
//functions for problem 13
string nmWrd1(short digit){
    switch(digit){
        case 9: return "Nine";
        case 8: return "Eight";
        case 7: return "Seven";
        case 6: return "Six";
        case 5: return "Five";
        case 4: return "Four";
        case 3: return "Three";
        case 2: return "Two";
        case 1: return "One";
        default: return "";
    }
}
string nmWrd2(short digit){
    switch(digit){
        case 5: return "Fif";
        case 4: return "Four";
        case 3: return "Thir";
        case 2: return "Twen";
        case 1: return "Ten";
        default: return "";
    }
}
void plySong(short tenths, short ones){
    if(tenths>8||(tenths<8&&tenths>5)){
        if(ones==0)cout<<nmWrd1(tenths)<<"ty";
        else cout<<nmWrd1(tenths)<<"ty-"<<nmWrd1(ones);
    }
    if(tenths==8){
        if(ones==0)cout<<nmWrd1(tenths)<<"y";
        else cout<<nmWrd1(tenths)<<"y-"<<nmWrd1(ones);
    }
    if(tenths<=5&&tenths>1){
        if(ones==0){
            if(tenths==4)cout<<"Forty";
            else cout<<nmWrd2(tenths)<<"ty";
        }
        else if(tenths==4&&ones!=0)cout<<"Forty-"<<nmWrd1(ones);
        else cout<<nmWrd2(tenths)<<"ty-"<<nmWrd1(ones);
    }
    if(tenths==1){
        if(ones>5)cout<<nmWrd1(ones)<<"teen";
        else if(ones==2)cout<<"Twelve";
        else if(ones==1)cout<<"Eleven";
        else if(ones==0)cout<<"Ten";
        else cout<<nmWrd2(ones)<<"teen";
    }
    if(tenths==0){
        if(ones!=0)cout<<nmWrd1(ones);
        else cout<<"Zero";
    }
}