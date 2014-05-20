/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 7, 2014, 10:11 AM
 * Purpose: Chapter 5 Homework
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
//Functions for Problem 1
void input1(int& hour, int& mins);//Input 24-hour format time
void convrt1(int& hour, int& mins, char& ampm);//Convert time to 12-hour format time
void out1(int& hour, int& mins, char& ampm);//Output 12-hour format time
//Functions for Problem 2
void input2(int& hour, int& mins);
void wait2(int& hour, int& mins);
void output2(int& hour, int& mins);
//Functions for Problem 3
void input3(int& hour, int& mins);
void wait3(int& hour, int& mins);
void twelve3(int& hrs, int& mins, char& ampm);
void output3(int& hour, int& mins, char& ampm);
//Functions for Problem 4
void inpt4(float& score1, float& score2, float& score3, float& score4);
void calc4(float&score1, float& score2, float& score3, float& score4, float& avg, float& stdDv);
void outpt4(float& avg, float& stdDv);
//Functions for Problem 6
void input6(float& feet, float& inch);
void cnvrt6(float& feet, float& inch, float& mtrs, float& cmtrs);
void outpt6(float& feet, float& inch, float& mtrs, float& cmtrs);
//Functions for Problem 7
void inpt7(float& lngth1, float& lngth2, char pick);
void calc7(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i);
void outpt7(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i);
//Functions for Problem 9
void input9(float& pound, float& ounce);
void cnvrt9(float& pound, float& ounce, float& kg, float& g);
void outpt9(float& pound, float& ounce, float& kg, float& g);
//Functions for Problem 10
void inpt10(float& mass1, float& mass2, int& pick);
void calc10(float& mass1, float& mass2, float& mass2o, float& mass1o);
void outpt10(float& mass1, float& mass2, float& mass2o, float& mass1o);
//Functions for Problem 13
void inpt13(float& a, float& b, float& c);
void calc13(float& a, float& b, float& c, float& s, float& area, float& p);
void outpt13(float& area, float& p);
//Functions for Problem 14
void inpt14(float& wspd, float& temp);
void calc14(float& wspd, float& temp, float& windch);
void outpt14(float& windch);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 5 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 5 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 5 Problem 3"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 5 Problem 4"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 5 Problem 6"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 5 Problem 7"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 5 Problem 9"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 5 Problem 10"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 5 Problem 13"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 5 Problem 14"<<endl;
    cout<<"Enter your selection: ";
    cin>>choose;
    //Utilize switch to implement the menu
    switch(choose){
        case 1:{
            //Declare Variables
            int hour, mins;
            char ampm, ans;
            do{
            //Function Call    
            input1(hour, mins);
            convrt1(hour, mins, ampm);
            out1(hour, mins, ampm);
            cout<<"\n";
            cout<<"Would you like to convert your 24-hour notation time again?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            }while (ans=='y'||ans=='Y');
            //Exit Stage Right
            break;
        }
        case 2:{
            //Declare Variables
            int hour, mins;
            char ans;
            do{
            //Function Call    
            input2(hour, mins);
            wait2(hour, mins);
            output2(hour, mins);
            cout<<"\n";
            cout<<"Would you like to recalculate your wait time?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            }while(ans=='y'||ans=='Y');
            //Exit Stage Right
           break;
        }
        case 3:{
            //Declare Variables
            int hour, mins;
            char ans, ampm;
            do{
            //Function Call    
            input3(hour, mins);
            wait3(hour, mins);
            twelve3(hour, mins, ampm);
            output3(hour, mins, ampm);
            cout<<"\n";
            cout<<"Would you like to recalculate your wait time?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            }while(ans=='y'||ans=='Y');
            //Exit Stage Right
            break;
        }
        case 4:{
            //Declare Variables
            float score1, score2, score3, score4, avg, stdDv;
            char ans;
            do{
            //Function Call
            inpt4(score1, score2, score3, score4);
            calc4(score1, score2, score3, score4, avg, stdDv);
            outpt4(avg, stdDv);
            cout<<"\n";
            cout<<"Would you like to calculate the average and standard deviation of another four scores?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            }while (ans=='y'||ans=='Y');
            //Exit Stage Right
            break;
        }
        case 5:{
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
            break;
        }
        case 6:{
            //Declare Variables
            float lngth1, lngth2, lngth1i, lngth2i;
            char pick;
            //Function Call
            inpt7(lngth1, lngth2, pick);
            calc7(lngth1, lngth2, lngth2i, lngth1i);
            outpt7(lngth1, lngth2, lngth2i, lngth1i);
            //Exit Stage Right
            break;
        }
        case 7:{
            //Declare Variables
            float pound, ounce, kg, g;
            //Function Call
            input9(pound, ounce);
            cnvrt9(pound, ounce, kg, g);
            outpt9(pound, ounce, kg, g);            
            //Exit Stage Right
            break;
        }
        case 8:{
                //Declare Variables
                float mass1, mass2, mass2o, mass1o;
                int pick;
               //Function Call
               inpt10(mass1, mass2, pick);
               calc10(mass1, mass2, mass2o, mass1o);  
               outpt10(mass1, mass2, mass2o, mass1o);  
                //Exit Stage Right
            break;
        }
        case 9:{
            //Declare Variables
            float a, b, c, s, p, area;
            //Function Call
            inpt13(a, b, c);
            calc13(a, b, c, s, area, p);
            outpt13(area, p);
            //Exit Stage Right
            break;
        }
        case 10:{
            //Declare Variables
            float wspd, temp, windch;
            char ans;
            do{
            //Function Call
            inpt14(wspd, temp);
            calc14(wspd, temp, windch);
            outpt14(windch);
            cout<<"\n";
            cout<<"Would you like to recalculate your Wind Chill?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            }while (ans=='y'||ans=='Y');
            //Exit Stage Right
            break;
        }
        default:{
            cout<<"Not an option!"<<endl;
        }
    }
    //Exit Stage Right
    return 0;
}

//Functions for Problem 1
void input1(int& hour, int& mins){
    cout<<"Enter your 24 hour format time. Hours then minutes."<<endl;
    cout<<"HH: ";
    cin>>hour;
    cout<<"MM: ";
    cin>>mins;
    cout<<endl;
    cout<<"You have entered the 24-hour format time of: ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins<<endl;
}
void convrt1(int& hour, int& mins, char& ampm){  
    
    if (hour>12&&hour<=23){
        hour=hour-12;
        ampm='P';
    }else if (hour==12){
        ampm='P';
    }else if(hour==0){
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){
        cout<<"\n";
        cout<<"Error! Try again.";
    }
    
}     
void out1(int& hour, int& mins, char& ampm){
    cout<<endl;
    if(hour<=12&&mins<=59){
    cout<<"The 12-hour format is ";
    cout<<hour<<":"<<setw(2)<<setfill('0')<<mins<<" "<<ampm<<"M"<<endl; 
    }
}
//Functions for Problem 2
void input2(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}
void wait2(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    }    
}
void output2(int& hour, int& mins){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" hours after your wait.\n";
}
//Functions for Problem 3
void input3(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}
void wait3(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    } 
}

void twelve3(int& hour, int& mins, char& ampm){
    
    if (hour>12&&hour<=23){
        hour=hour-12;
        ampm='P';
    }else if (hour==12){
        ampm='P';
    }else if(hour==0){
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){
        cout<<"\n";
        cout<<"Error! Try again.";
    }
}

void output3(int& hour, int& mins, char& ampm){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" "<<ampm<<"M after your wait.\n";
}
//Functions for Problem 4
void inpt4(float& score1, float& score2, float& score3, float& score4){
    cout<<"\n";
    cout<<"Calculate the average and standard deviation of four of your scores.\n";
    cout<<"Enter each score individually.\n";
    cout<<"First Score:  ";
    cin>>score1;
    cout<<"Second Score: ";
    cin>>score2;
    cout<<"Third Score:  ";
    cin>>score3;
    cout<<"Fourth Score: ";
    cin>>score4;
    cout<<"\n";    
}
void calc4(float& score1, float& score2, float& score3, float& score4, float& avg, float& stdDv){
    float temp1, temp2, temp3, temp4, totTemp;
    cout.setf(ios::fixed);
    cout.precision(0);
    avg=(score1+score2+score3+score4)/4;
    temp1=((score1-avg)*(score1-avg));
    temp2=((score2-avg)*(score2-avg));
    temp3=((score3-avg)*(score3-avg));
    temp4=((score4-avg)*(score4-avg));
    totTemp=temp1*temp2*temp3*temp4;
    stdDv=sqrt(totTemp);
}
void outpt4(float& avg, float& stdDv){
    cout<<"\n";
    cout<<"Your average score is ";
    cout<<avg;
    cout<<"\n";
    cout<<"The standard deviation of the four scores is ";
    cout<<stdDv;
    cout<<"\n";
}
//Functions for Problem 6
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
//Functions for Problem 7
void inpt7(float& lngth1, float& lngth2, char pick){
    cout<<"\n";
    cout<<"Convert your length from meters or centimeters to feet and inches.\n";
    cout<<"Enter A for meters, B for centimeters: ";
    cin>>pick;
    if(pick=='A'||pick=='a'){
        cout<<"\n";
        cout<<"Enter your length, in meters: ";
        cin>>lngth1;
    }else if (pick=='B'||pick=='b'){
        cout<<"\n";
        cout<<"Enter your length, in centimeters: ";
        cin>>lngth2;
    }
}
void calc7(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i){
    float cnvrtft=0.3048;
    float cnvrtmt=100;
    lngth1=lngth1/cnvrtft;
    lngth2=(lngth2/100)/cnvrtft;
    lngth1i=lngth1*12;
    lngth2i=lngth2*12;
}
void outpt7(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(lngth2==0&&lngth2i==0){
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth1<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth1i<<" inches.";
        cout<<"\n";
    }else if (lngth1==0&&lngth1i==0){
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth2<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth2i<<" inches.";
        cout<<"\n";
    }
}

//Functions for Problem 9
void input9(float& pound, float& ounce){
    cout<<"\n";
    cout<<"Enter your weight in pounds and then ounces.\n";
    cout<<"Pounds(lbs): ";
    cin>>pound;
    cout<<"Ounces(oz): ";
    cin>>ounce;
    cout<<"\n";
}
void cnvrt9(float& pound, float& ounce, float& kg, float& g){
    pound=pound+(ounce/16);
    kg=(pound/2.2046);
    g=kg*1000;
            
}
void outpt9(float& pound, float& ounce, float& kg, float& g){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your weight has been converted to the following units. \n";
    cout<<"kilograms: ";
    cout<<kg;
    cout<<"\n";
    cout<<"grams: ";
    cout<<g;
    cout<<"\n";
}
//Functions for Problem 10
void inpt10(float& mass1, float& mass2, int& pick){
    cout<<"\n";
    cout<<"Convert your mass from kilograms or grams to pounds and ounces.\n";
    cout<<"Enter 1 for kilograms, 2 for grams: ";
    cin>>pick;
    if(pick==1){
        cout<<"\n";
        cout<<"Enter your mass, in kilograms: ";
        cin>>mass1;
    }else if (pick==2){
        cout<<"\n";
        cout<<"Enter your mass, in grams: ";
        cin>>mass2;
    }
}
void calc10(float& mass1, float& mass2, float& mass2o, float& mass1o){
    float cnvrtlb=2.2046;
    float cnvrtkg=1000;
    mass1=mass1*cnvrtlb;
    mass1o=mass1*16;
    mass2=(mass2/cnvrtkg)*cnvrtlb;
    mass2o=mass2*16;
}
void outpt10(float& mass1, float& mass2, float& mass2o, float& mass1o){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(mass2==0&&mass2o==0){
        cout<<"\n";
        cout<<"Your mass converts to "<<mass1<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass1o<<" ounces.";
        cout<<"\n";
    }else if (mass1==0&&mass1o==0){
        cout<<"\n";
        cout<<"Your mass converts to "<<mass2<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass2o<<" ounces.";
        cout<<"\n";
    }
}
//Functions for Problem 13
void inpt13(float& a, float& b, float& c){
    do{
    cout<<"\n";
    cout<<"Calculate the area of a triangle. Enter all side individually.\n";
    cout<<"Enter any value less than zero and application will restart.\n";
    cout<<"First Side:  ";
    cin>>a;
    cout<<"Second Side: ";
    cin>>b;
    cout<<"Third Side:  ";
    cin>>c;
    cout<<"\n";
    }while (a<=0||b<=0||c<=0);
}
void calc13(float& a, float& b, float& c, float& s, float& area, float& p){
    s=((a+b+c)/2);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    p=a+b+c;
}
void outpt13(float& area, float& p){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Area of the rectangle is "<<area<<" units and its perimeter is "<<p<<" units."<<endl;
    }
//Functions for Problem 14
void inpt14(float& wspd, float& temp){
    do{
    cout<<"\n";
    cout<<"Calculate Windchill in your area in temperatures below 50 degrees Fahrenheit.\n";
    cout<<"If the temperature entered is over 50 degrees Fahrenheit the program will start again.\n";
    cout<<"Enter the following required information.\n";
    cout<<"Wind Speed(mph): ";
    cin>>wspd;
    cout<<"Temperature(F): ";
    cin>>temp;
    cout<<"\n";
    }while (temp>=51);
}
void calc14(float& wspd, float& temp, float& windch){
    //Utilized Wind Chill Formula from the National Weather Service Website
    windch=35.74+(0.6215*temp)-(35.75*pow(wspd,0.16))+(0.4275*temp*pow(wspd,0.16));
}
void outpt14(float& windch){
    cout.setf(ios::fixed);
    cout.precision(0);
    cout<<"\n";
    cout<<"Your Wind Chill temperature is ";
    cout<<windch;
    cout<<" degrees Fahrenheit.\n";
}