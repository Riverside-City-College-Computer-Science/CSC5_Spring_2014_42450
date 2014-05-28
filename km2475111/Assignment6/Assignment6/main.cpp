/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 19, 2014, 8:54 PM
 * Purpose: Assignment 6
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
//functions for prob 4
void getInpt1(float &,float &,float &,float &);
void calcAvg(float,float,float,float,float &,float &);
void print1(float,float,float,float,float,float);
//functions for prob 5
void compute_coins(int,int &,int &);
void print2(int,int,int,int);
//functions for prob 13
void getInpt3(float &,float &,float &);
void areaPer(float,float,float,float &,float &);
void print3(float,float,float,float,float);
//functions for prob 14
void getInput4(float &,float &);
void wndChll(float,float,float &);
void print4(float,float,float);
//functions for prob 16
void getInput5(int &,int &,int &);
int dOfWeek(int,int,int);
bool isLeapYear(int);
int getCenturyValue(int);
int getYearValue(int);
int getMonthValue(int,int);
void print5(int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    int choice;
    bool cntMenu=true;
    //variables for prob 4
    float score1,score2,score3,score4,average,stdDev;
    //variables for prob 5
    const int QUARTER=25;
    const int DIME=10;
    const int PENNIES=1;
    int amnt,newAmnt,totQtr,totDim,totPen;
    //variables for prob 13
    float num1,num2,num3,area,perimtr;
    //variables for prob 14
    float velocty,temp,windChil;
    //variables for prob 16
    bool leapYr=false;
    int year,month,day,century,monthVal,dom,yearVal,dow;
    do{
        cout<<"Choose a problem to test:"<<endl
            <<"============================================="<<endl
            <<"1. Savitch 8th Ed. Chapter 5 Problem 4"<<endl
            <<"2. Savitch 8th Ed. Chapter 5 Problem 5"<<endl
            <<"3. Savitch 8th Ed. Chapter 5 Problem 13"<<endl
            <<"4. Savitch 8th Ed. Chapter 5 Problem 14"<<endl
            <<"5. Savitch 8th Ed. Chapter 5 Problem 16"<<endl
            <<"Press and other key to quit."<<endl
            <<"============================================="<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<endl;
                //get input
                getInpt1(score1,score2,score3,score4);
                //calculate
                calcAvg(score1,score2,score3,score4,average,stdDev);
                //print
                print1(score1,score2,score3,score4,average,stdDev);
                cout<<endl;
                break;
            }
            case 2:{
                cout<<endl;
                //ask for change total (1 to 99)
                cout<<"Enter amount of change (1 to 99 cents): ";
                cin>>amnt;
                while(amnt<1||amnt>99){
                    cout<<"Enter amount of change between 0 & 99: ";
                    cin>>amnt;
                }
                newAmnt=amnt;
                //calculate
                compute_coins(QUARTER,totQtr,newAmnt);
                compute_coins(DIME,totDim,newAmnt);
                compute_coins(PENNIES,totPen,newAmnt);
                //print
                print2(totQtr,totDim,totPen,amnt);
                cout<<endl;
                break;
            }
            case 3:{
                cout<<endl;
                //get input
                getInpt3(num1,num2,num3);
                //calculate
                areaPer(num1,num2,num3,area,perimtr);
                //print
                print3(num1,num2,num3,area,perimtr);
                cout<<endl;
                break;
            }
            case 4:{
                cout<<endl;
                //get input
                getInput4(velocty,temp);
                //calculate
                wndChll(velocty,temp,windChil);
                //output
                print4(velocty,temp,windChil);
                cout<<endl;
                break;
            }
            case 5:{
                cout<<endl;
                //get input
                getInput5(year,month,day);
                //calculate
                century=getCenturyValue(year);
                monthVal=getMonthValue(month,year);
                yearVal=getYearValue(year);
                dow=(day+monthVal+yearVal+century)%7;
                //print according to day of week
                print5(year,month,day,dow);
                cout<<endl;
                break;
            }
            default:{
                cntMenu=false;
                cout<<"Good-bye."<<endl;
            }
        }
    }while(cntMenu);
    return 0;
}
//problem 4 functions
void getInpt1(float &s1,float &s2,float &s3,float &s4){
    cout<<"Enter four scores: ";
    cin>>s1>>s2>>s3>>s4;
    while(s1<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s1;
    }
    while(s2<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s2;
    }
    while(s3<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s3;
    }
    while(s4<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s4;
    }
}
void calcAvg(float s1,float s2,float s3,
             float s4,float &average,float &stdDev){
    average=(s1+s2+s3+s4)/4;
    stdDev=sqrt(pow(s1-average,2)+
                pow(s2-average,2)+
                pow(s3-average,2)+
               (pow(s4-average,2)/4)
               );
}
void print1(float s1,float s2,float s3,
           float s4,float average,float stdDev){\
    cout<<"The average of "<<s1<<", "
        <<s2<<", "<<s3<<","<<" and "<<s4<<" = "<<average<<endl
        <<"The Standard Deviation of "<<s1<<", "
        <<s2<<", "<<s3<<","<<" and "<<s4<<" = "<<stdDev<<endl;
}
//functions for prob 5
void compute_coins(int coin_value,int &number,int &amount_left){
    number=amount_left/coin_value;
    amount_left-=(coin_value*number);
}
void print2(int quarters,int dimes,int pennies,int amnt){
    cout<<amnt<<" cents can be given as"<<endl
        <<quarters<<" quarter(s) "<<dimes
        <<" dime(s) "<<pennies<<" penny(pennies)"<<endl;
}
//functions for prob 13
void getInpt3(float &num1,float &num2,float &num3){
    cout<<"Enter a length (greater than zero) "
        <<"for each side of your triangle: ";
    cin>>num1>>num2>>num3;
    while(num1<1){
        cout<<"Enter a number greater than 0: ";
        cin>>num1;
    }
    while(num2<1){
        cout<<"Enter a number greater than 0: ";
        cin>>num2;
    }
    while(num3<num1&&num3<num2){
        cout<<"Enter a number greater than "
            <<num1<<" and "<<num2<<": ";
        cin>>num3;
    }
}
void areaPer(float n1,float n2,float n3,float &area,float &perimeter){
    float semiPer=(n1+n2+n3)/2;
    area=sqrt((semiPer*(semiPer-n1)*(semiPer-n2)*(semiPer-n3)));
    perimeter=n1+n2+n3;
}
void print3(float n1,float n2,float n3,float area,float perimtr){
    cout<<"The area of "<<n1<<", "<<n2
        <<", and "<<n3<<" = "<<area<<endl
        <<"The Perimeter of "<<n1<<", "
        <<n2<<", and "<<n3<<" = "<<perimtr<<endl;
}
//functions for prob 14
void getInput4(float &v,float &t){
    cout<<"Enter the wind speed (in meters per second): ";
    cin>>v;
    while(v<0.0f){
        cout<<"Enter a speed 0 m/sec or above: ";
        cin>>v;
    }
    cout<<"Enter the temperature below 10 degrees Celsius: ";
    cin>>t;
    while(t>10){
        cout<<"Enter a temperature below 10 degrees Celsius: ";
        cin>>t;
    }
}
void wndChll(float v,float t,float &w){
    float n1=pow(v,0.16f);
    float n2=pow(v,0.016f);
    w=13.12f+0.6215f*t-11.37f*n1+0.3965f*t*n2;
}
void print4(float v,float t,float w){
    cout<<endl<<"The velocity of the wind: "<<v<<" m/sec"<<endl
        <<"The temperature (in Celsius): "<<t<<" degrees"<<endl
        <<"Wind Chill Index (in Celsius): "<<w<<" degrees"<<endl;
}
//functions for prob 16
void getInput5(int &y,int &m, int &d){
    cout<<"Enter the year (4-digit format i.e. 2011): ";
    cin>>y;
    cout<<"Enter the month in number format (i.e. 1 = January): ";
    cin>>m;
    while(m>12&&m<1){
        cout<<"Enter a proper month (1-12): ";
        cin>>m;
    }
    cout<<"Enter the day: ";
    cin>>d;
    if(isLeapYear(y)){
        if(m==2){
            while(d>29&&d<1){
                cout<<"Enter a proper day for this month (1-29): ";
                cin>>d;
            }
        }else if(m==1||m==3||m==5||m==7||
                 m==8||m==10||m==12){
            while(d>31&&d<1){
                cout<<"Enter a proper day for this month (1-31): ";
                cin>>d;
            }
        }else{
            while(d>30&&d<1){
                cout<<"Enter a proper day for this month (1-30): ";
                cin>>d;
            }
        }
    }else{
        if(m==2){
            while(d>28&&d<1){
                cout<<"Enter a proper day for this month (1-28): ";
                cin>>d;
            }
        }else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            while(d>31&&d<1){
                cout<<"Enter a proper day for this month (1-31): ";
                cin>>d;
            }
        }else{
            while(d>30&&d<1){
                cout<<"Enter a proper day for this month (1-30): ";
                cin>>d;
            }
        }
    }
}
int dOfWeek(int y, int m, int d){
       static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
       y-=m<3;
       return (y+y/4-y/100+y/400+t[m-1]+d)%7;
   }
bool isLeapYear(int y){
    if((y%4==0&&y%100!=0)||(y%400==0)){
        return true;
    }else{
        return false;
    }
}
int getCenturyValue(int y){
    int temp=y%4;
    if(temp<=3){
        temp=3-temp;
    }
    else{
        temp-=3;
    }
    return temp*2;
}
int getYearValue(int y){
    int temp=(y%100)/4;
    return (y%100)+temp;
}
int getMonthValue(int m,int y){
    if(m==1){
        if(isLeapYear(y)){
            return 6;
        }else{
            return 0;
        }
    }else if(m==2){
        if(isLeapYear(y)){
            return 2;
        }else{
            return 3;
        }
    }else if(m==3){
        return 3;
    }else if(m==4){
        return 6;
    }else if(m==5){
        return 1;
    }else if(m==6){
        return 4;
    }else if(m==7){
        return 6;
    }else if(m==8){
        return 2;
    }else if(m==9){
        return 5;
    }else if(m==10){
        return 0;
    }else if(m==11){
        return 3;
    }else if(m==12){
        return 5;
    }
}
void print5(int year,int month,int day, int dow){
    if(dow==1){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Monday."<<endl;
    }else if(dow==2){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Tuesday."<<endl;
    }else if(dow==3){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Wednesday."<<endl;
    }else if(dow==4){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Thursday."<<endl;
    }else if(dow==5){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Friday."<<endl;
    }else if(dow==6){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Saturday."<<endl;
    }else if(dow==0){
        cout<<"The day of the week for "
            <<month<<"/"<<day<<"/"<<year
            <<" is Sunday."<<endl;
    }
}