/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 26, 2014, 8:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Prompt user to choose a problem
    cout<<"Enter the number of the corresponding"<<endl;
    cout<<"problem you would like to run."<<endl;
    cout<<"1. Gaddis_7thEd_Chap4_Prob1"<<endl;
    cout<<"2. Gaddis_7thEd_Chap4_Prob2"<<endl;
    cout<<"3. Gaddis_7thEd_Chap4_Prob3"<<endl;
    cout<<"4. Gaddis_7thEd_Chap4_Prob4"<<endl;
    cout<<"5. Gaddis_7thEd_Chap4_Prob5"<<endl;
    cout<<"6. Gaddis_7thEd_Chap4_Prob6"<<endl;
    cout<<"7. Gaddis_7thEd_Chap4_Prob10"<<endl;
    cout<<"8. Gaddis_7thEd_Chap4_Prob14"<<endl;
    cout<<"9. Savitch_8thEd_Chap3_Prob7"<<endl;
    cout<<"10. Savitch_8thEd_Chap3_Prob8"<<endl;
    cin>>choice;
//List of problems
    switch(choice){
        case 1:{
            //Gaddis_7thEd_Chap4_Prob1
            //Declare Variables
            float a, b;
            //Prompt user for two numbers
            cout<<"Enter two numbers:"<<endl;
            cin>>a;
            cin>>b;
            //Determine and display which number is larger, smaller or equal
            a>b?cout<<"The first number is bigger.":
            a<b?cout<<"The second number is bigger." :
                cout<<"The numbers are equal.";
                //Exit Stage Right
            break;
        }
        case 2:{
            //Gaddis_7thEd_Chap4_Prob2
            //Declare Variables
            int num;
            //Prompt user for a number between 1 and 10.
            cout<<"Enter a number between 1 and 10."<<endl;
            cin>>num;   
            //Input Validation
            if((num<1)||(num>10)){
                cout<<num<<" isn't a number between 1 and 10."<<endl;
                cout<<"Run the program again and input a number"<<endl;
                cout<<"between 1 and 10."<<endl;
            }
            else{
                switch (num){//Output the Roman numeral version of the number.
                        case 1:cout<<"I";break;
                        case 2:cout<<"II";break;
                        case 3:cout<<"III";break;
                        case 4:cout<<"IV";break;
                        case 5:cout<<"V";break;
                        case 6:cout<<"VI";break;
                        case 7:cout<<"VII";break;
                        case 8:cout<<"VIII";break;
                        case 9:cout<<"IX";break;
                        case 10:cout<<"X";break;
                        //Exit Stage Right!
                }
            }
            break;
        }
        case 3:{
            //Gaddis_7thEd_Chap4_Prob3
            //Declare Variables
            int month, day, yr, magic;
            //Prompt user for month, day, and year.
            cout<<"Enter the number of the month."<<endl;
            cin>>month;
            cout<<"Enter the day."<<endl;
            cin>>day;
            cout<<"Enter the last two digits of the year."<<endl;
            cin>>yr;
            //Calculation for magic date.
            magic=month*day;
            //Determine whether the date is magic.
            if (magic==yr)
                cout<<"~*~The Date is Magic~*~"<<endl;
            else
                cout<<"The date is not magic."<<endl;
            //Exit Stage Right!
        }
        break;
        case 4:{
            //Gaddis_7thEd_Chap4_Prob4
            //Declare Variables
            float length1, width1, length2, width2, rect1, rect2;
            //Prompt user to input the length and width of both rectangles.
            cout<<"Enter the length of the first rectangle."<<endl;
            cin>>length1;
            cout<<"Enter the width of the first rectangle."<<endl;
            cin>>width1;
            cout<<"Enter the length of the second rectangle."<<endl;
            cin>>length2;
            cout<<"Enter the width of the second rectangle."<<endl;
            cin>>width2;
            //Calculate the area of both rectangles.
            rect1=length1*width1;
            rect2=length2*width2;
            //Determine which triangle is larger or if they are equal.
            if (rect1>rect2){
                cout<<"The first rectangle has a larger area than the second."<<endl;
            }
            else if (rect1<rect2){
                cout<<"The second rectangle has a larger area than the first."<<endl;
            }
            else if (rect1==rect2){
                cout<<"Both rectangles have the same area."<<endl;
            }
        }
        break;
        case 5:{
            //Gaddis_7thEd_Chap4_Prob5
            //Declare Variables
            int books, points;
            //Prompt user for how many books they purchased this month.
            cout<<"How many books were purchased this month?"<<endl;
            cin>>books;
            //Determine how many points the user earned this month
            (books>=4)?points=60:
            (books==3)?points=30: 
            (books==2)?points=15:
            (books==1)?points=5:
                       points=0;
            //Display the number of points earned.
            cout<<"If you bought "<<books<<" book(s),"<<endl;
            cout<<"you earned "<<points<<" points."<<endl;
        }
        break;
        case 6:{
            //Gaddis_7thEd_Chap4_Prob6
            //Declare Variables
            float mass, weight;
            //Prompt user for the mass of an object.
            cout<<"What is the mass of the object?"<<endl;
            cin>>mass;
            //Calculate the weight of the object.
            weight=mass*9.8;
            //Display the the weight of the object.
            if (weight>1000){
                cout<<"The object is too heavy."<<endl;
            }
            else if (weight<10){
                cout<<"The object is too light."<<endl;
            }
            else if (weight){
                cout<<"The weight of the object is "<<weight<<" newtons."<<endl;
            }
        }
        break;
        case 7:{
            //Gaddis_7thEd_Chap4_Prob10
            //Declare Variables
            float monChrg=10, numChck, chckFee, ttlFee;
            //Ask the user how many checks they wrote this month.
            cout<<"How many check did you write this month?"<<endl;
            cin>>numChck;
            //Input validation
            if(numChck<0){
                cout<<"You couldn't have written less than 0 checks."<<endl;
                cout<<"Please enter a a valid number."<<endl;
            }
            //Calculate the total monthly fee.
            else{
                if (numChck<20)chckFee=numChck*.10;
                else if(numChck<=39)chckFee=numChck*.08;
                else if(numChck<=59)chckFee=numChck*.06;
                else if(numChck>=60)chckFee=numChck*.04;   
            //Output the results.
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Your total monthly charge is $"<<monChrg+chckFee<<endl;
            }
        }
        break;
        case 8:{
            //Gaddis_7thEd_Chap4_Prob14
            //Declare Variables
            float weight, height, bmi;
            //Prompt user to enter a weight and height
            cout<<"Enter your weight and height to calculate your BMI."<<endl;
            cout<<"Weight(lbs): ";
            cin>>weight;
            cout<<"Height(in): ";
            cin>>height;
            //BMI formula
            bmi=weight*703/(pow(height,2));
            //Output results using if/else statement
            if(bmi<18.5)
                cout<<"Your BMI of "<<bmi<<" suggests you are underweight."<<endl;
            else if(bmi>25)
                cout<<"Your BMI of "<<bmi<<" suggests you are overweight."<<endl;
            else
                cout<<"Your BMI of "<<bmi<<" suggests your weight is optimal."<<endl;
            //Exit Stage Right
        }
        break;
        case 9:{
            //Savitch_8thEd_Chap3_Prob7
            //Determine Random Number Seed 
            srand(static_cast<unsigned int>(time(0)));
            //declare random number/choose year
            int year=rand()%2001+1000;//[1000, 3000]
            cout<<"The year is "<<year<<endl;
            //declare and calculate how many 1000s
            //100s, 10s, and 1s
            int n1000s, n100s, n10s, n1s;
            n1000s=year/1000;
            year-=(n1000s*1000);
            n100s=year/100;
            year-=(n100s*100);
            n10s=year/10;
            year-=(n10s*10);
            n1s=year;
            //output the num of 1000s in roman numerals
            switch(n1000s){
                case 3:cout<<'M';
                case 2:cout<<'M';
                case 1:cout<<'M';
            }
            //output the number of 100s in roman numerals
            switch(n100s){
                case 9:cout<<"CM";break;
                case 8:cout<<"DCCC";break;
                case 7:cout<<"DCC";break;
                case 6:cout<<"DC";break;
                case 5:cout<<"D";break;
                case 4:cout<<"CD";break;
                case 3:cout<<"C";
                case 2:cout<<"C";
                case 1:cout<<"C";
        
            }
            //output the number of 10s in roman numerals
            switch(n10s){
                case 9:cout<<"XC";break;
                case 8:cout<<"LXXX";break;
                case 7:cout<<"LXX";break;
                case 6:cout<<"LX";break;
                case 5:cout<<"L";break;
                case 4:cout<<"XL";break;
                case 3:cout<<"X";
                case 2:cout<<"X";
                case 1:cout<<"X";
        
            }
            //output the number of 1s in roman numerals
            switch(n1s){
                case 9:cout<<"IX";break;
                case 8:cout<<"VIII";break;
                case 7:cout<<"VII";break;
                case 6:cout<<"VI";break;
                case 5:cout<<"V";break;
                case 4:cout<<"IV";break;
                case 3:cout<<"I";
                case 2:cout<<"I";
                case 1:cout<<"I";
        
            }
        }
        break;
        case 10:{
            //Savitch_8thEd_Chap3_Prob8
            //Set random number seed
            srand(static_cast<unsigned int>(time(0)));
            //pull first card
            int card=rand()%52, numVal, sum=0;
            char suit, faceVal;
            //Determine suit
            if (card<13)suit='S';
            else if (card<26)suit='D';
            else if (card<39)suit='C';
            else suit='H';
            switch(card%13+1){
                case 1:faceVal='A';numVal=11;break;
                case 2:faceVal='2';numVal=2;break;
                case 3:faceVal='3';numVal=3;break;
                case 4:faceVal='4';numVal=4;break;
                case 5:faceVal='5';numVal=5;break;
                case 6:faceVal='6';numVal=6;break;
                case 7:faceVal='7';numVal=7;break;
                case 8:faceVal='8';numVal=8;break;
                case 9:faceVal='9';numVal=9;break;
                case 10:faceVal='T';numVal=10;break;
                case 11:faceVal='J';numVal=10;break;
                case 12:faceVal='Q';numVal=10;break;
                case 13:faceVal='K';numVal=10;break;
            }
            sum+=numVal;
            //print 1st pulled card
            cout<<"The sum of your cards = "<<sum<<endl;
            cout<<"The first card pulled was ";
            cout<<faceVal<<suit<<endl;
            //pull second card
            card=rand()%52;
            //Determine suit
            if (card<13)suit='S';
            else if (card<26)suit='D';
            else if (card<39)suit='C';
            else suit='H';
            switch(card%13+1){
                case 1:faceVal='A';numVal=11;break;
                case 2:faceVal='2';numVal=2;break;
                case 3:faceVal='3';numVal=3;break;
                case 4:faceVal='4';numVal=4;break;
                case 5:faceVal='5';numVal=5;break;
                case 6:faceVal='6';numVal=6;break;
                case 7:faceVal='7';numVal=7;break;
                case 8:faceVal='8';numVal=8;break;
                case 9:faceVal='9';numVal=9;break;
                case 10:faceVal='T';numVal=10;break;
                case 11:faceVal='J';numVal=10;break;
                case 12:faceVal='Q';numVal=10;break;
                case 13:faceVal='K';numVal=10;break;
            }
            sum+=numVal;
            //print 2nd pulled card
            cout<<"The sum of your cards = "<<sum<<endl;
            cout<<"The second card pulled was ";
            cout<<faceVal<<suit<<endl;
        }
        break;
    }
    return 0;
}

