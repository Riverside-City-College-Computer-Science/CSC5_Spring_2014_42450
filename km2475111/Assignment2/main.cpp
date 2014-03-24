/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on March 17, 2014, 6:13 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

//Global Constants
//Hours to Minutes
const float CNVHMIN=1.0/6.0e1;
//Minutes to Seconds
const float CNVMSEC=CNVHMIN;
//pay increase for retroactive pay
const float PAY_INCREASE=.076;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variables
    short choice;
    bool SENTINEL=true;
    char resp;
    float retrPay,newAnnSal,newMthSal;
    short annSal,numMnth=6;
    short rmCap,numPpl,addPpl,subPpl;
    short num1=0,num2=0,num3=0,num4=0,
          num5=0,num6=0,num7=0,num8=0,
          num9=0,num10=0,
          posSum=0,negSum=0,totSum=0;
    float posAvg=0,negAvg=0,totAvg=0;
    srand(static_cast<unsigned int>(time(0)));
    float num, guess, r;
    float mph, mpm, mps;
    short number;
    string profNam,userNam,food,adj,color,animl;
    float radius,vm;
    short numExc=0,score=0,totScore=0,
          sumScore=0,maxScore=0,maxPnt=0;
    float ovrllPerc=0.0;
    //ask user for which problem to go to
    cout<<"Select a Savitch Problem to execute (1-10): ";
    cin>>choice;
    switch(choice){
        case 1: cout<<"You entered 1, Chapter 2 Problem 3. "<<endl;
                //Loop while user wishes
                while(SENTINEL){
                    //Request annual salary from user
                    cout<<"What was your previous annual salary? "<<endl;
                    cin>>annSal;
                    //calculate retroactive pay, new annual salary
                    //and new monthly salary
                    retrPay=annSal*PAY_INCREASE;
                    newAnnSal=annSal+retrPay;
                    newMthSal=(newAnnSal/12)*numMnth;
                    //Output results
                    cout<<setprecision(5)<<showpoint;
                    cout<<setw(20)<<left<<"Retroactive Pay: "
                        <<setw(20)<<right<<"$"<<retrPay<<endl
                        <<setw(20)<<left<<"New Annual Salary: "
                        <<setw(20)<<right<<"$"<<newAnnSal<<endl
                        <<setw(20)<<left<<"New Monthly Salary: "
                        <<setw(20)<<right<<"$"<<newMthSal<<endl;

                    cout<<"Would you like to start over? (y/n)"<<endl;
                    cin>>resp;
                    if(resp == 'n' || resp == 'N'){
                        cout<<"Good-bye."<<endl;
                        SENTINEL=false;
                    }
                    else{}
                }
                break;
        case 2: cout<<"You entered 2, Chapter 2 Problem 4."<<endl;
                //Loop while user wishes
                while(SENTINEL){
                    //Request annual salary from user
                    cout<<"What was your previous annual salary? ";
                    cin>>annSal;
                    //request number of months
                    cout<<"How many months of retroactive pay do you have? ";
                    cin>>numMnth;
                    //calculate retroactive pay, new annual salary
                    //and new monthly salary
                    retrPay=annSal*PAY_INCREASE;
                    newAnnSal=annSal+retrPay;
                    newMthSal=(newAnnSal/12)*numMnth;
                    //Output results
                    cout<<setprecision(5)<<showpoint;
                    cout<<setw(20)<<left<<"Retroactive Pay: "
                        <<setw(20)<<right<<"$"<<retrPay<<endl
                        <<setw(20)<<left<<"New Annual Salary: "
                        <<setw(20)<<right<<"$"<<newAnnSal<<endl
                        <<setw(20)<<left<<"New Monthly Salary: "
                        <<setw(20)<<right<<"$"<<newMthSal<<endl;

                    cout<<"Would you like to start over? (y/n)"<<endl;
                    cin>>resp;
                    if(resp == 'n' || resp == 'N'){
                        cout<<"Good-bye."<<endl;
                        SENTINEL=false;
                    }
                    else{}
                }
                break;
        case 3: cout<<"You entered 3, Chapter 2 Problem 6."<<endl;
                //loop to keep the process going
                while(SENTINEL){
                    //Ask for rmCap and nPpl from user
                    cout<<"What is the maximum room capacity?"<<endl;
                    cin>>rmCap;
                    cout<<"How many people are attending the meeting?"<<endl;
                    cin>>numPpl;
                    //Check if rmCap>nPpl
                    //if room max hasn't been reached
                    if(rmCap>numPpl){
                        //calculate how many can enter meeting
                        addPpl=rmCap-numPpl;
                        cout<<"It is legal to hold a meeting. You can add "
                            <<endl<<addPpl<<" more people before reaching "
                            <<"max room capacity."<<endl;
                    }
                    //if room max has been reached or surpassed
                    else if(rmCap<numPpl){
                        //calculate how many need to leave meeting
                        subPpl=numPpl-rmCap;
                        cout<<"Room is larger than or equal to max room "
                            <<"capacity!"<<endl<<"Please remove "<<subPpl
                            <<" people in order to hold"<<endl
                            <<"a meeting."<<endl;
                    }
                    else{      
                    }
                    //ask for repeat
                    cout<<"Would you like to test again? (y/n)"<<endl;
                    cin>>resp;
                    if(resp == 'n'){
                        cout<<"Good-bye."<<endl;
                        SENTINEL=false;
                    }
                    else if(resp == 'y'){
                        cout<<"Okay, let's go again."<<endl;
                    }
                    else{
                        cout<<"Error, incorrect response."<<endl;
                    }
                }
                break;
        case 4: cout<<"You entered 4, Chapter 2 Problem 10."<<endl;
                //Ask for input
                cout<<"Enter 10 numbers one at a time: "<<endl;
                cin>>num1;
                cin>>num2;
                cin>>num3;
                cin>>num4;
                cin>>num5;
                cin>>num6;
                cin>>num7;
                cin>>num8;
                cin>>num9;
                cin>>num10;
                //calculate totSum
                totSum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
                //check to see if numbers are negative/positive
                //then calculate sums for corresponding values
                if(num1>0){
                    posSum+=num1;
                }
                else if(num1<=0){
                    negSum+=num1;
                }
                totSum+=num1;
                if(num2>0){
                    posSum+=num2;
                }
                else if(num2<=0){
                    negSum+=num2;
                }
                if(num3>0){
                    posSum+=num3;
                }
                else if(num3<=0){
                    negSum+=num3;
                }
                if(num4>0){
                    posSum+=num4;
                }
                else if(num4<=0){
                    negSum+=num4;
                }
                if(num5>0){
                    posSum+=num5;
                }
                else if(num5<=0){
                    negSum+=num5;
                }
                if(num6>0){
                    posSum+=num6;
                }
                else if(num6<=0){
                    negSum+=num6;
                }
                if(num7>0){
                    posSum+=num7;
                }
                else if(num7<=0){
                    negSum+=num7;
                }
                if(num8>0){
                    posSum+=num8;
                }
                else if(num9<=0){
                    negSum+=num8;
                }
                if(num10>0){
                    posSum+=num10;
                }
                else if(num10<=0){
                    negSum+=num10;
                }
                else{}
                //output results
                cout<<"Total positive sum: "<<posSum<<endl
                    <<"Total negative sum: "<<negSum<<endl
                    <<"Total number sum: "<<totSum<<endl;
                break;
        case 5: cout<<"You entered 5, Chapter 2 Problem 11."<<endl;
                //Ask for input
                cout<<"Enter 10 numbers one at a time: "<<endl;
                cin>>num1;
                cin>>num2;
                cin>>num3;
                cin>>num4;
                cin>>num5;
                cin>>num6;
                cin>>num7;
                cin>>num8;
                cin>>num9;
                cin>>num10;
                //calculate totSum
                totSum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
                //check to see if numbers are negative/positive
                //then calculate sums for corresponding values
                if(num1>0){
                    posSum+=num1;
                }
                else if(num1<=0){
                    negSum+=num1;
                }
                totSum+=num1;
                if(num2>0){
                    posSum+=num2;
                }
                else if(num2<=0){
                    negSum+=num2;
                }
                if(num3>0){
                    posSum+=num3;
                }
                else if(num3<=0){
                    negSum+=num3;
                }
                if(num4>0){
                    posSum+=num4;
                }
                else if(num4<=0){
                    negSum+=num4;
                }
                if(num5>0){
                    posSum+=num5;
                }
                else if(num5<=0){
                    negSum+=num5;
                }
                if(num6>0){
                    posSum+=num6;
                }
                else if(num6<=0){
                    negSum+=num6;
                }
                if(num7>0){
                    posSum+=num7;
                }
                else if(num7<=0){
                    negSum+=num7;
                }
                if(num8>0){
                    posSum+=num8;
                }
                else if(num9<=0){
                    negSum+=num8;
                }
                if(num10>0){
                    posSum+=num10;
                }
                else if(num10<=0){
                    negSum+=num10;
                }
                else{}
                //calculate averages
                posAvg=static_cast<float>(posSum)/10;
                negAvg=static_cast<float>(negSum)/10;
                totAvg=static_cast<float>(totSum)/10;
                //output results
                cout<<"Total positive sum: "<<posSum<<endl
                    <<"Positive Average: "<<posAvg<<endl
                    <<"Total negative sum: "<<negSum<<endl
                    <<"Negative Average: "<<negAvg<<endl
                    <<"Total number sum: "<<totSum<<endl
                    <<"Total Average: "<<totAvg<<endl;
                break;
        case 6: cout<<"You entered 6, Chapter 2 Problem 12."<<endl;
                //Initialize the number to Sqrt
                num=rand()%3+3;//[3,4,5]
                //Initialize Guess
                guess=num/2;
                //Output original num and guess
                cout<<"Find the square root of "<<num<<endl
                    <<"Start with the following guess "<<guess<<endl;
                //1st iteration of r and guess
                r=num/guess;
                guess=(r+guess)/2;
                //Output 1st iteration
                cout<<"1st iteration r="<<r<<" guess="<<guess<<endl;
                //2nd iteration of r and guess
                r=num/guess;
                guess=(r+guess)/2;
                //Output 2nd iteration
                cout<<"2st iteration r="<<r<<" guess="<<guess<<endl;
                //3rd iteration of r and guess
                r=num/guess;
                guess=(r+guess)/2;
                //Output 3rd iteration
                cout<<"3rd iteration r="<<r<<" guess="<<guess<<endl;
                //4th iteration of r and guess
                r=num/guess;
                guess=(r+guess)/2;
                //Output 4th iteration
                cout<<"4th iteration r="<<r<<" guess="<<guess<<endl;
                //compare to actual square root
                cout<<"Actual Square Root of "<<num
                    <<" from the CMATH library = "<<sqrt(num)<<endl;
                break;
        case 7: cout<<"You entered 7, Chapter 2 Problem 13."<<endl;
                //Ask for input from user
                cout<<"Input MPH i.e miles/hour "<<endl;
                cin>>mph;
                //Process for conversion
                mpm=mph*CNVHMIN;
                mps=mpm*CNVMSEC;
                //Output results as textbook describes
                //cout<<setprecision(5)<<showpoint;
                cout<<mph<<" mph should be "<<mpm<<" minute(s) and "
                    <<mps<<" second(s) per mile."<<endl;
                break;
        case 8: cout<<"You entered 8, Chapter 2 Problem 14."<<endl;
                //Ask user for madlib input
                cout<<"Enter your Instructor's First or Last name: ";
                cin>>profNam;
                cout<<"Enter your name: ";
                cin>>userNam;
                cout<<"Enter a food: ";
                cin>>food;
                cout<<"Enter a number between 100 and 120: ";
                cin>>number;
                while(number < 100 || number > 120){
                    cout<<"Number is either less than 100 or bigger than 120."
                        <<endl<<"Try again."<<endl;
                    cin>>number;
                }
                cout<<"Enter an adjective: ";
                cin>>adj;
                cout<<"Enter a color: ";
                cin>>color;
                cout<<"Enter an animal: ";
                cin>>animl;
                //output madlib
                cout<<"Dear Instructor "<<profNam<<","<<endl<<endl
                    <<"I am sorry that I am unable to turn in my homework "
                    <<"at this time."<<" First,"<<endl<<"I ate a rotten "
                    <<food<<", which made me turn "<<color
                    <<" and extremely ill. I"<<endl<<"came down with a fever "
                    <<"of "<<number<<". Next, my "<<adj<<" pet "<<animl
                    <<" must have"<<endl<<"smelled the remains of the "<<food
                    <<" on my homework,"<<" because he ate it."<<endl
                    <<"I am currently rewriting my homework"
                    <<" and hope you will accept it late."<<endl<<endl
                    <<"Sincerely,"<<endl
                    <<userNam<<endl;
                break;
        case 9: cout<<"You entered 9, Chapter 2 Problem 16."<<endl;
                //obtain radius from user
                cout<<"Enter radius of a sphere."<<endl;
                cin>>radius;
                //calculate the volume of a sphere with user inputted radius
                vm=(4.0/3.0)*3.1415*radius*radius;
                //output results
                cout<<"The volume is "<<vm<<"."<<endl;
                break;
        case 10: cout<<"You entered 10, Chapter 2 Problem 19."<<endl;
                //obtain user input
                cout<<"How many exercises to input? ";
                cin>>numExc;
                cout<<endl;
                //loop until all exercises has been inputted
                for(short i=1;i<=numExc;i++){
                    cout<<"Score received for exercise "<<i<<": ";
                    cin>>score;
                    cout<<"Total points possible for exercise "<<i<<": ";
                    cin>>maxScore;
                    cout<<endl;
                    //add up total score and total points possible
                    totScore+=score;
                    maxPnt+=maxScore;
                }
                //Calculate total grade and averages for N problems
                ovrllPerc=(static_cast<float>(totScore)/maxPnt)*100;
                //Output results
                cout<<"Your total is "<<totScore<<" out of "<<maxPnt<<", or "
                    <<fixed<<setprecision(2)<<ovrllPerc<<"%."<<endl;
                break;
        default: cout<<"Error. Choice not listed."<<endl;
                break;
    }
    //Exit Stage Right!
    return 0;
}

