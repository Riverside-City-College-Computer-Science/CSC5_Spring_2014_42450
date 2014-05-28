/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 19, 2014, 7:46 PM
 * Purpose: output day of week
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void getInput(int &,int &,int &);
int dOfWeek(int,int,int);
bool isLeapYear(int);
int getCenturyValue(int);
int getYearValue(int);
int getMonthValue(int,int);
void print(int,int,int,int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    bool leapYr=false;
    int year,month,day,century,monthVal,dom,yearVal,dow;
    //get input
    getInput(year,month,day);
    //calculate
    century=getCenturyValue(year);
    monthVal=getMonthValue(month,year);
    yearVal=getYearValue(year);
    dow=(day+monthVal+yearVal+century)%7;
    //print according to day of week
    print(year,month,day,dow);
    //dow=dOfWeek(year,month,day);
    //Exit Stage Right!!
    return 0;
}
void getInput(int &y,int &m, int &d){
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
void print(int year,int month,int day, int dow){
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