/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 9, 2014, 7:55 AM
 * Menu With Functions
 */

//System Libraries
#include <cstdlib>//srand
#include <iostream>//standard input ouput
#include <ctime>//time for random and program
#include <iomanip>//formatting
#include <cmath>//math functions
using namespace std;

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Menu variables
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis_7thEd_Chap5_Prob1"<<endl;
        cout<<"2. Gaddis_7thEd_Chap5_Prob2"<<endl;
        cout<<"3. Gaddis_7thEd_Chap5_Prob3"<<endl;
        cout<<"4. Gaddis_7thEd_Chap5_Prob4"<<endl;
        cout<<"5. Gaddis_7thEd_Chap5_Prob5"<<endl;
        cout<<"6. Gaddis_7thEd_Chap5_Prob6"<<endl;
        cout<<"7. Gaddis_7thEd_Chap5_Prob7"<<endl;
        cout<<"8. Gaddis_7thEd_Chap5_Prob8"<<endl;
        cout<<"9. Gaddis_7thEd_Chap5_Prob9"<<endl;
        cout<<"10. Gaddis_7thEd_Chap5_Prob10"<<endl;
        cout<<"Anything else Exit"<<endl;
        //input choice
        cin>>choice;
        //solve chosen problem
        switch(choice){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem1();break;
            case 5:problem2();break;
            case 6:problem3();break;
            case 7:problem1();break;
            case 8:problem2();break;
            case 9:problem3();break;
            case 10:problem10();break;
            default: exitMnu=true;
        }
        
    }while(!exitMnu);
//Exit program
    return 0;
}

//solution to problem 1
void problem1(){
    //Display characters for each ASCII code 32 through 127
    //Declare Variables
    char lettr=32;
    //Loop until 127
    for (int lettr= 32;lettr<= 127;lettr++){
        if (lettr%16==0)
            cout<<endl;
        cout<<char(lettr)<<" ";
    }
}

//solution to problem 2
void problem2(){
    //Loop to get the sum of all the 
    //integers from 1 up to the number entered.
    //Declare Variables
    int num;
    //Prompt user for a number greater than 1
    cout<<"Enter a number greater than 1"<<endl;
    cin>>num;
    //Test for input validation using while loop
    while(num<1){
        cout<<num<<" isn't a valid input."<<endl;
        cout<<"Enter a number greater than 1"<<endl;
        cin>>num;
    }
    //Loop and add up the number entered
    int sum=0;
    for(int count=1;count<=num;count++){
        sum+=count;
    }
    cout<<"The sum all numbers from 1 to "<<num<<" is "<<sum<<endl;
}

//solution to problem 3
void problem3(){
    //Loop to display the total distance traveled
    //at the end of each hour of a given time period.
    //Declare variables
    float distnce,speed,time;
    //Prompt user for speed
    cout<<"How fast was the train traveling?"<<endl;
    cin>>speed;
    //Speed input validation
    while(speed<0){
        cout<<"Please enter a valid speed."<<endl;
        cin>>speed;
    }
    cout<<"How many hours was the train traveling?"<<endl;
    cin>>time;
    while(time<1){
        cout<<"Please enter a value greater than 1."<<endl;
        cin>>time;
    }
    distnce=speed*time;
    cout<<"Hours Traveled      Distance Traveled(MPH)"<<endl;
    cout<<"------------------------------------------"<<endl;
    for(int hour=1;hour<=time;hour++){
        cout<<"      "<<hour<<"                    "<<speed*hour<<endl;
    }
}

//solution to problem 4
void problem4(){
    //Loop to display a table of the Celsius temperatures
    //from 0 to 20 and their Fahrenheit equivalents.
    //Declare variables
    int celsius,fahren;
    //Loop and display conversion from 0 to 20 degrees
    for(int celsius=0;celsius<=20;celsius++){
        fahren=1.8*celsius+32;
        cout<<celsius<<"C = "<<fahren<<"F"<<endl;
    }
}

//Solution to problem 5
void problem5(){
    //Display a table of speeds in kilometers per hour 
    //with their values converted to miles per hour.
    //Declare variables
    float mph, kph;
    //Loop from 60 KPH to 130 KPH and the MPH equivalent
    cout<<"  KPH       MPH"<<endl;
    cout<<"----------------"<<endl;
    for(float kph=60;kph<=130;kph+=5){
        mph=kph*0.6214;
        cout<<fixed<<setw(6)<<setprecision(2)<<kph; 
        cout<<fixed<<setw(10)<<setprecision(2)<<mph<<endl; 
    }
}

//Solution to problem 6
void problem6(){
    //Display a table showing the total number of millimeters the
    //oceans will have risen each year for the next 25 years.
    //Loop for 25 years
    cout<<"Year      Increase in Sea Level"<<endl;
    cout<<"-------------------------------"<<endl;
    for(float yr=1,sealvl=3.1;yr<=25;yr+=1,sealvl+=3.1){
        cout<<fixed<<setw(3)<<setprecision(0)<<yr;
        cout<<fixed<<setw(15)<<setprecision(1)<<sealvl<<"mm"<<endl;
    }
}

//Solution to problem 7
void problem7(){
    //Write a program that calculates how much a 
    //person earns in a month if the salary is one
    //penny the first day, two pennies the second day, 
    //four pennies the third day, and so on with the 
    //daily pay doubling each day the employee works.
    //declare variables
    float daysW;
    cout<<"How many days did you work this month?"<<endl;
    cin>>daysW;
    while(daysW<1||daysW>31){//Input validation
        cout<<"Invalid input!"<<endl;
        cout<<"How many days did you work this month?"<<endl;
        cin>>daysW;
    }
    cout<<"Days Worked       Pay"<<endl;
    cout<<"-------------------------"<<endl;
    //Loop to calculate payment
    for(float days=1,pay=0.01;days<=daysW;days++,pay*=2){
        cout<<fixed<<setw(5)<<setprecision(0)<<days;
        cout<<fixed<<setw(13)<<setprecision(2)<<"$"<<right<<pay<<endl;
    }
}

//Solution to problem 8
void problem8(){
    //Running on a particular treadmill you 
    //burn 3.9 calories per minute. Write a 
    //program thatuses a loop to display the 
    //number of calories burned after 10, 15, 20, 25, and 30 minutes.
    //Loop from 10 to 30 in multiples of 5
    cout<<"Minutes   Calories Burned"<<endl;
    cout<<"--------------------------"<<endl;
    for(float min=10,kcal=39;min<=30;min+=5,kcal+=19.5){
        cout<<fixed<<setw(3)<<setprecision(0)<<min;
        cout<<fixed<<setw(15)<<setprecision(1)<<kcal<<endl;
    }
}

//Solution to problem 9
void problem9(){
    //Write a program that uses a loop to 
    //display the projected rates for the next six years.
    for(float yr=1,fee=2500;yr<=6;yr++,fee+=(fee*0.04)){
        cout<<fixed<<setprecision(0)<<"Year "<<yr;
        cout<<fixed<<setprecision(2)<<" will cost $"<<fee<<endl;
    }
}

//Solution to problem 10
void problem10(){
    //Write a program that generates a random number 
    //between 1 and 100 and asks the user to guess what the number is.
    //Declare Variables
    int guess;
    int num;
    char reply;
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    num=rand()%100+1;
    cout<<"I'm thinking of a number between 1 and 100."<<endl;
    cout<<"What is it?"<<endl;
    cin>>guess;
    //Loop if the guess is wrong
    while (guess!= num){
        if (guess < num){
            cout << "Too low. Try again."<<endl;
            cin>>guess;
        }
        if (guess > num){
            cout << "Too high. Try again."<<endl;
            cin>>guess;
        }
    }
    //Congratulate player if they right
    if (guess==num){
        cout << "Congratulations! You figured it out!"<<endl;
    }
}