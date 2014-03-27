/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on March 19, 2014, 8:32 AM
 */

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>//I/O stream
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    //prob 1 variables
    bool SENTINEL=true;
    string p1turn,p2turn,replay;
    //prob 2
    float amt, intrst1=.015, intrst2=.01, totlDu, minPymnt;
    char ans;
    //prob 3
    unsigned short day;
    //char month[15];
    string month;
    string astrSgn;
    //prob 4
    int hour,min,calltm;
    char day1,day2,answ;  
    float cost,rate1=0.40,rate2=0.25,rate3=0.15;
    //prob 5
    int a, b, c, i;
    float x, xT, xD, xH;
    char answr;
    //prob 6
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare the random number/choose a year and output
    int year=rand()%2001+1000;//[1000,3000]
    //prob 7
    //srand(static_cast<unsigned int>(time(0))); //shares time as prob 6
    //prob8
    bool prime=true;
    //prob 9
    float bForce,vol,wtrWht=62.4,rad,sphWht;
    float pi=3.14159265;
    //prob 10
    short celcius=100,fahrenheit;
    //menu
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl
        <<"1. Savitch 8th Edition Chapter 3 Problem 1"<<endl
        <<"2. Savitch 8th Edition Chapter 3 Problem 2"<<endl
        <<"3. Savitch 8th Edition Chapter 3 Problem 3"<<endl
        <<"4. Savitch 8th Edition Chapter 3 Problem 5"<<endl
        <<"5. Savitch 8th Edition Chapter 3 Problem 6"<<endl
        <<"6. Savitch 8th Edition Chapter 3 Problem 7"<<endl
        <<"7. Savitch 8th Edition Chapter 3 Problem 8"<<endl
        <<"8. Savitch 8th Edition Chapter 3 Problem 14"<<endl
        <<"9. Savitch 8th Edition Chapter 3 Problem 15"<<endl
        <<"10. Savitch 8th Edition Chapter 3 Problem 16"<<endl;
    cin>>choose;
    //utilize switch to implement the menu
    switch(choose){
        case 1:{
            do{
            //ask for turns
            cout<<"Let's play Rock-Paper-Scissors!"<<endl
                <<"Player 1, make your move (P,R,or S): ";
            cin>>p1turn;
            cout<<"Player 2, make your move (P,R,or S): ";
            cin>>p2turn;
            //calculate who wins with rule: r>s, s>p, p>r
            if((p1turn=="R"||p1turn=="r")&&(p2turn=="P"||p2turn=="p")){
                cout<<"Player 2 wins!"<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="R"||p1turn=="r")&&(p2turn=="S"||p2turn=="s")){
                cout<<"Player 1 wins!"<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="R"||p1turn=="r")&&(p2turn=="R"||p2turn=="r")){
                cout<<"Nobody wins."<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="P"||p1turn=="p")&&(p2turn=="S"||p2turn=="s")){
                cout<<"Player 2 wins!"<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="P"||p1turn=="p")&&(p2turn=="R"||p2turn=="r")){
                cout<<"Player 1 wins!"<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="P"||p1turn=="p")&&(p2turn=="P"||p2turn=="p")){
                cout<<"Nobody wins."<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="S"||p1turn=="s")&&(p2turn=="P"||p2turn=="p")){
                cout<<"Player 1 wins!"<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="S"||p1turn=="s")&&(p2turn=="R"||p2turn=="r")){
                cout<<"Player 2 wins!"<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            else if((p1turn=="S"||p1turn=="s")&&(p2turn=="S"||p2turn=="s")){
                cout<<"Nobody wins."<<endl
                    <<"Remember: Paper beats Rock, Rock beats Scissors, "
                    <<"and Scissors beats Paper!"<<endl;
            }
            //prompt user and ask to play again
            cout<<"Do you wish to play again? (y/n): ";
            cin>>replay;
            if(replay=="No"||replay=="no"||replay=="n"||replay=="N"){
                cout<<"Thanks for playing! Good-bye!";
                SENTINEL=false;
            }
            else{}
            }while(SENTINEL);
            break;
        }
        case 2:{
            do{
                //Input Loan Amount
                cout<<"Calculate payment due on your account"<<endl
                    <<"Enter Account Balance: $";
                cin>>amt;
                cout<<endl;
                //Two decimal points
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);    
                //Calculate and Output Total Due and Minimum Payment
                if (amt<=1000){
                    float tmpInt = amt*intrst1;//Calculate Interest
                    totlDu = tmpInt + amt;//Calculate Total
                    cout<<"Your total amount due is $"
                        <<totlDu
                        <<endl;
                         cout<<"Your minimum payment is $";
                         if (totlDu<=10){
                             cout<<totlDu;
                         }else if (totlDu>10){
                             minPymnt=totlDu*.10;
                                     cout<<minPymnt;
                         }
                         else{}
                }
                else if (amt>=1000){
                    float tmp = amt-1000;//Subtract 1st $1000 to calculate interest on remainder
                    float tmpInt = 1000*intrst1;//Calculate interest on first $1000
                    float tmpInt2 = tmp*intrst2;//Calculate interest on remainder amount
                    totlDu = tmpInt+tmpInt2+tmp+1000;//Calculate Total
                    minPymnt=totlDu*.10;
                    cout<<"Your total amount due is $"
                        <<totlDu<<endl
                        <<"Your minimum payment is $"
                        <<minPymnt<<endl;
                }
                else{}
                //Option to repeat calculation
                cout<<endl<<endl
                    <<"Would you like to calculate another amount?"<<endl
                    <<"y for yes and n for no: "<<endl;
                cin>>ans;
            }while (ans=='y'||ans=='Y');
            cout<<endl<<"Good-bye.";
            break;
        }
        case 3:{
            //Ask for user's birthday
            cout<<"Welcome! Here for your Horoscope?"<<endl
                <<"Enter the Month you were born (i.e. Dec, December, 12): ";
            //cin.getline(month,15);
            cin>>month;
            cout<<"Enter the Day you were born (1-31): ";
            cin>>day;
            //barrier for incorrect day
            while(day>31||day==0){
                cout<<"That's an incorrect value. Try again: ";
                cin>>day;
            }
            //Calculate astrological sign
            /* Aries = March 21-April 19
             * Taurus = April 20-May20
             * Gemini = May 21-June 21
             * Cancer = June 22-July 22
             * Leo = July 23- August 22
             * Virgo = August 23-September 22
             * Libra = September 23- October 22
             * Scorpio = October 23-November 21
             * Sagittarius = November 22-December 21
             * Capricorn = December 22-January 19
             * Aquarius = January 20-February 18
             * Pisces = February 19-March 20
             */
            //month of january
            if(month=="Jan"||month=="jan"||month=="January"||
               month=="january"||month=="1"||month=="01"){
                if(day>=1&&day<20){
                    //capricorn
                    cout<<"Your sign is the Capricorn!"<<endl<<endl;
                    cout<<"If your ship starts to go down, try not "
                        <<"to bring anyone down with you. Emotional "<<endl
                        <<"strain may cause minor health concerns. You "
                        <<"have an outgoing personality, but sometimes"<<endl
                        <<"you keep it hidden. Use your heightened "
                        <<"charm to your advantage."<<endl;
                }
                else if(day>=20&&day<=31){
                    //aquarius
                    cout<<"Your sign is the Aquarius!"<<endl<<endl;
                    cout<<"Avoid worrying about why things approximately "
                        <<"you are happening. Focus instead on what is"<<endl
                        <<"within your control. Try to sketch for the "
                        <<"long-term. It is a good time to start a"<<endl
                        <<"new romantic relationship."<<endl;
                }
                else{}
            }
            //month of february
            else if(month=="Feb"||month=="feb"||month=="February"||
                    month=="february"||month=="2"||month=="02"){
                if(day>=1&&day<=18){
                    //aquarius
                    cout<<"Your sign is the Aquarius!"<<endl<<endl
                        <<"Avoid worrying about why things approximately "
                        <<"you are happening. Focus instead on what is"<<endl
                        <<"within your control. Try to sketch for the "
                        <<"long-term. It is a good time to start a"<<endl
                        <<"new romantic relationship."<<endl;
                }
                else if(day>18&&day<=28){
                    //Pisces
                    cout<<"Your sign is a Pisces!"<<endl<<endl
                        <<"You are able to communicate with the "
                        <<"imagination and unconscious and are aware of "
                        <<"others' thoughts and emotions."<<endl;
                }
                else{}
            }
            //month of march
            else if(month=="March"||month=="march"||month=="Mar"||
                    month =="mar"||month=="3"||month=="03"){
                if(day>=1&&day<21){
                    //Pisces
                    cout<<"Your sign is a Pisces!"<<endl<<endl
                        <<"You are able to communicate with the "
                        <<"imagination and unconscious and are aware of "
                        <<"others' thoughts and emotions."<<endl;
                }
                else if(day>=21&&day<31){
                    //Aries
                    cout<<"Your sign is Aries!"<<endl<<endl
                        <<"You serve as the catalysts and instigators,"
                        <<" inspiring others into action,"<<endl
                        <<" constantly starting new things and taking risks."
                        <<endl;
                }
                else{}
            }
            //month of april
            else if(month=="April"||month=="april"||month=="Apr"
                    ||month=="apr"||month=="4"||month=="04"){
                if(day>=1&&day<20){
                    //aries
                    cout<<"Your sign is Aries!"<<endl<<endl
                        <<"You serve as the catalysts and instigators,"
                        <<" inspiring others into action,"<<endl
                        <<" constantly starting new things and taking risks."
                        <<endl;
                }
                else if(day>=20&&day<31){
                    //Taurus
                    cout<<"Your sign is Taurus!"<<endl<<endl
                        <<"You're slow getting started, but once "
                        <<"you've set a plan into motion, there's no"
                        <<" stopping you."
                        <<endl;
                }
                else{}
            }
            //month of may
            else if(month=="May"||month=="may"||month=="5"||month=="05"){
                if(day>=1&&day<20){
                    //Taurus
                    cout<<"Your sign is Taurus!"<<endl<<endl
                        <<"You're slow getting started, but once "
                        <<"you've set a plan into motion, there's no "
                        <<"stopping you."
                        <<endl;
                }
                else if(day>=20&&day<=31){
                    //Gemini
                    cout<<"Your sign is Gemini!"<<endl<<endl
                        <<"You can adapt to any situation and "
                        <<"connect with anyone,"<<endl
                        <<"no matter how different they're from yourself."
                        <<endl;
                }
            }
            //month of june
            else if(month=="June"||month=="june"||month=="Jun"
                    ||month=="jun"||month=="6"||month=="06"){
                if(day>=1&&day<22){
                    //Gemini
                    cout<<"Your sign is Gemini!"<<endl<<endl
                        <<"You can adapt to any situation and "
                        <<"connect with anyone,"<<endl
                        <<"no matter how different they're from yourself."
                        <<endl;
                }
                else if(day>=22&&day<31){
                    //Cancer
                    cout<<"Your sign is Cancer!"<<endl<<endl
                        <<"The emotional realm is often misunderstood "
                        <<"and undervalued,"<<endl
                        <<"but the Crab is charged with the "
                        <<"important job of feeling"<<endl
                        <<"it all -- the highs, lows and everything in-between."
                        <<endl;
                }
                else{}
            }
            //month of july
            else if(month=="July"||month=="july"||month=="Jul"
                    ||month=="jul"||month=="7"||month=="07"){
                if(day>=1&&day<23){
                    //Cancer
                    cout<<"Your sign is Cancer!"<<endl<<endl
                        <<"The emotional realm is often misunderstood "
                        <<"and undervalued,"<<endl
                        <<"but the Crab is charged with the "
                        <<"important job of feeling"<<endl
                        <<"it all -- the highs, lows and everything in-between."
                        <<endl;
                }
                else if(day>=24&&day<31){
                    //Leo
                    cout<<"Your sign is Leo!"<<endl<<endl
                        <<"Leo is one of the most generous "
                        <<"and giving signs -- when"<<endl
                        <<"they express themselves from the heart."<<endl;
                }
                else{}
            }
            //month of august
            else if(month=="August"||month=="august"||month=="Aug"
                    ||month=="aug"||month=="8"||month=="08"){
                if(day>=1&&day<=23){
                    //Leo
                    cout<<"Your sign is Leo!"<<endl<<endl
                        <<"Leo is one of the most generous "
                        <<"and giving signs -- when"<<endl
                        <<"they express themselves from the heart."<<endl;
                }
                else if(day>23&&day<=31){
                    //Virgo
                    cout<<"Your sign is Virgo!"<<endl<<endl
                        <<"The point of the Virgin's purity "
                        <<"is not to drive everyone crazy"<<endl
                        <<"but to simplify and eliminate the "
                        <<"excess in order to get to the essence"<<endl
                        <<"of what is truly important"<<endl;
                }
                else{}
            }
            //month september
            else if(month=="September"||month=="september"||month=="Sept"
                    ||month=="sept"||month=="9"||month=="09"){
                if(day>=1&&day<23){
                    //Virgo
                    cout<<"Your sign is Virgo!"<<endl<<endl
                        <<"The point of the Virgin's purity "
                        <<"is not to drive everyone crazy"<<endl
                        <<"but to simplify and eliminate the "
                        <<"excess in order to get to the essence"<<endl
                        <<"of what is truly important"<<endl;
                }
                else if(day>=23&&day<31){
                    //Libra
                    cout<<"Your sign is Libra!"<<endl<<endl
                        <<"You're able to weigh all the options "
                        <<"and make choices that result"<<endl
                        <<"in maximum balance, harmony and justice."<<endl;
                }
                else{}
            }
            //month of october
            else if(month=="October"||month=="october"||month=="Oct"||
                    month=="oct"||month=="10"){
                if(day>=1&&day<23){
                    //Libra
                    cout<<"Your sign is Libra!"<<endl<<endl
                        <<"You're able to weigh all the options "
                        <<"and make choices that result"<<endl
                        <<"in maximum balance, harmony and justice."<<endl;
                }
                else if(day>=23&&day<=31){
                    //Scorpio
                    cout<<"Your sign is Scorpio!"<<endl<<endl
                        <<"Scorpio is here to delve beneath "
                        <<"the surface of life, discover"<<endl
                        <<"what is hidden and bring to light "
                        <<"what the other signs are too"<<endl
                        <<"afraid to acknowledge."<<endl;
                }
                else{}
            }
            //month of november
            else if(month=="November"||month=="november"||month=="Nov"||
                    month=="nov"||month=="11"){
                if(day>=1&&day<22){
                    //Scorpio
                    cout<<"Your sign is Scorpio!"<<endl<<endl
                        <<"Scorpio is here to delve beneath "
                        <<"the surface of life, discover"<<endl
                        <<"what is hidden and bring to light "
                        <<"what the other signs are too"<<endl
                        <<"afraid to acknowledge."<<endl;
                }
                else if(day>=22&&day<31){
                    //Sagittarius
                    cout<<"Your sign is Sagittarius!"<<endl<<endl
                        <<"Sagittarius is the adventurer of the "
                        <<"zodiac, here to expand beyond limits"<<endl
                        <<"and borders and explore unknown territory."<<endl;
                }
                else{}
            }
            //month of december
            else if(month=="December"||month=="december"||month=="Dec"||
                    month=="dec"||month=="12"){
                if(day>=1&&day<22){
                    //Sagittarius
                    cout<<"Your sign is Sagittarius!"<<endl<<endl
                        <<"Sagittarius is the adventurer of the "
                        <<"zodiac, here to expand beyond limits"<<endl
                        <<"and borders and explore unknown territory."<<endl;
                }
                else if(day>=22&&day<31){
                    //Capricorn
                    cout<<"Your sign is the Capricorn!"<<endl<<endl
                        <<"If your ship starts to go down, try not "
                        <<"to bring anyone down with you. Emotional "<<endl
                        <<"strain may cause minor health concerns. You "
                        <<"have an outgoing personality, but sometimes"<<endl
                        <<"you keep it hidden. Use your heightened "
                        <<"charm to your advantage."<<endl;
                }
                else{}
            }
            break;
        }
        case 4:{
            //loop
            do{    
            //Input day of the week and time of the day
            cout<<endl;
            cout<<"Please enter the day of the week."<<endl;
            cout<<"Only the first two letter are required (ex. Mo = Monday).";
            cout<<endl;
            cout<<"Day of the week: ";
            cin>>day1>>day2;
            cout<<endl;
            cout<<"Now enter the time that the call started "
                <<"(in 24 hour format).";
            cout<<endl;
            cout<<"Hour: ";
            cin>>hour;
            cout<<"Minutes: ";
            cin>>min;
            cout<<endl;
            cout<<"Length of call (in minutes): ";
            cin>>calltm;
            cout<<endl;
            //Echo data inputs
            cout<<"Your call was made on ";    
            cout<<day1<<day2;
            cout<<" at ";
            cout<<hour;
            cout<<":";
            if (min<10){
                cout<<"0";
                cout<<min;
            }else cout<<min;
            cout<<" hours and it lasted ";
            cout<<calltm;
            cout<<" minutes.";
            cout<<endl;
            if (((day1=='M')||(day2=='m'))&&((day1=='O')||(day2='o')))
            {
                if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
                {
                    cost=calltm*rate1;                    
                }else
                {
                    cost=calltm*rate2;
                }
            }
            else if (((day1=='T')||(day2=='t'))&&((day1=='U')||(day2='u')))
            {
                if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
                {
                    cost=calltm*rate1;                    
                }else
                {
                    cost=calltm*rate2;
                }   
            }
            else if (((day1=='W')||(day2=='w'))&&((day1=='E')||(day2='e')))
            {
                if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
                {
                    cost=calltm*rate1;                    
                }else
                {
                    cost=calltm*rate2;
                }   
            }
            else if (((day1=='T')||(day2=='t'))&&((day1=='H')||(day2='h')))
            {
                if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
                {
                    cost=calltm*rate1;                    
                }else
                {
                    cost=calltm*rate2;
                }   
            }else if (((day1=='F')||(day2=='f'))&&((day1=='R')||(day2='r')))
            {
                if ((hour>=8&&min>=00)||(hour<=18&&min<=59))
                {
                    cost=calltm*rate1;                    
                }else
                {
                    cost=calltm*rate2;
                }   

            }else if (((day1=='S')||(day2=='s'))&&((day1=='A')||(day2='a')))
            {
                {
                    cost=calltm*rate3;
                }   
            }else if (((day=='S')||(day2=='s'))&&((day=='U')||(day2='u')))
            {
                {
                    cost=calltm*rate3;
                }  
            }
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            //Output Cost
            cout<<endl;
            cout<<"The cost of your call is $";
            cout<<cost;
            cout<<endl;
            cout<<endl;
            cout<<"Would you like to recalculate your telephone call cost?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>answ;
            cout<<endl;
        } while ((answ=='y')||(answ=='Y'));
            cout<<"Have a nice day."<<endl;
            break;
        }
        case 5:{
        //loop
        do{
            //Input Quadratic Equation Information
            cout<<"Quadratic Equation: ax^2 + bx + c = 0"
                <<endl
                <<"Enter your values to solve your quadratic equation."
                <<endl<<endl
                <<"a: ";
            cin>>a;
            cout<<"b: ";
            cin>>b;
            cout<<"c: ";
            cin>>c;
            cout<<endl;
            //calculate results
            xH=((b*b)-(4*a*c));
            xT=sqrt((b*b)-(4*a*c));
           //check conditions
            if(xT==0){        
                x=-b/(2*a);
                cout<<"x = "<<x<<endl;
            }
            else if(xT>0){
                x=(-b +(xT))/(2*a);
                xD=(-b-(xT))/(2*a);
                cout<<"x= "<<x<<" and "<<xD;
            }
            else if(xH<0){
                xT=sqrt((-1)*((b*b)-(4*a*c)));
                //x=(-b +(xT))/(2*a);
                //xD=(-b-(xT))/(2*a);
                cout<<"x = "<<"-"<<b/(2*a)<<" + "<<xT/(2*a)<<"i"
                    <<endl
                    <<"and"
                    <<endl
                    <<"x = "<<"-"<<b/(2*a)<<" - "<<xT/(2*a)<<"i"
                    <<endl;
               }
            cout<<endl
                <<"Would you like to solve another quadratic equation?"
                <<endl<<"Enter y for yes, n for no: ";
            cin>>answr;
            }while (answr=='y'||answr=='Y');
        cout<<"Done";
        break;
        }
        case 6:{
            cout<<"The year is "<<year<<endl;
            //Declare and calculate, how many 1000's,
            //100's, 10's, and 1's
            int n1000s,n100s,n10s,n1s;
            n1000s=year/1000;
            year-=(n1000s*1000);
            n100s=year/100;
            year-=(n100s*100);
            n10s=year/10;
            year-=(n10s*10);
            n1s=year;
            //Output the number of 1000's in Roman Numerals
            switch(n1000s){
                case 3:cout<<'M';
                case 2:cout<<'M';
                case 1:cout<<'M';
            }
            //Output the number of 100's in Roman Numerals
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
            //Output the number of 10's in Roman Numerals
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
            //Output the number of 1's in Roman Numerals
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
            break;
        }
        case 7:{
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));
            //Pull first card
            int card=rand()%52,numVal,sum=0;
            char suit,faceVl;
            //Determine Suit
            if(card<13)suit='S';
            else if(card<26)suit='D';
            else if(card<39)suit='C';
            else suit='H';
            switch(card%13+1){
                case 1:faceVl='A';numVal=11;break;
                case 2:faceVl='2';numVal=2;break;
                case 3:faceVl='3';numVal=3;break;
                case 4:faceVl='4';numVal=4;break;
                case 5:faceVl='5';numVal=5;break;
                case 6:faceVl='6';numVal=6;break;
                case 7:faceVl='7';numVal=7;break;
                case 8:faceVl='8';numVal=8;break;
                case 9:faceVl='9';numVal=9;break;
                case 10:faceVl='T';numVal=10;break;
                case 11:faceVl='J';numVal=10;break;
                case 12:faceVl='Q';numVal=10;break;
                case 13:faceVl='K';numVal=10;break;
            }
            sum+=numVal;
            //Print the 1st card pulled
            cout<<"The sum of your cards = "<<sum<<endl;
            cout<<"The first card you pulled was ";
            cout<<faceVl<<suit<<endl;
            //Pull second card
            card=rand()%52;
            //Determine Suit
            if(card<13)suit='S';
            else if(card<26)suit='D';
            else if(card<39)suit='C';
            else suit='H';
            switch(card%13+1){
                case 1:faceVl='A';numVal=11;break;
                case 2:faceVl='2';numVal=2;break;
                case 3:faceVl='3';numVal=3;break;
                case 4:faceVl='4';numVal=4;break;
                case 5:faceVl='5';numVal=5;break;
                case 6:faceVl='6';numVal=6;break;
                case 7:faceVl='7';numVal=7;break;
                case 8:faceVl='8';numVal=8;break;
                case 9:faceVl='9';numVal=9;break;
                case 10:faceVl='T';numVal=10;break;
                case 11:faceVl='J';numVal=10;break;
                case 12:faceVl='Q';numVal=10;break;
                case 13:faceVl='K';numVal=10;break;
            }
            sum+=numVal;
            //Print the 1st card pulled
            cout<<"The sum of your cards = "<<sum<<endl;
            cout<<"The second card you pulled was ";
            cout<<faceVl<<suit<<endl;
            break;
        }
        case 8:{
            //Starts at 3 and stops at 100
            for (int x=3; x<=100; x++)
            {
                //Iterate Denominator
                prime=true;
                //starts at2 and ends at 99
                for (int y=2; y<=(x-1);y++)
                    {   
                    //Evaluate Fraction
                    if((x%y)==0)
                       {    
                        prime=false;
                        break;
                       }
                     }  
                //Output of Prime number 
                //which is only if the remainder of the fraction does not equal to 0
                if (prime==true)
                    cout<<x<<" ";
            }
            break;
        }
        case 9:{
            //Input Weight and Radius
            cout<<"Enter the radius of your sphere (in feet): ";
            cin>>rad;
            cout<<"Enter the weight of your sphere (in pounds): ";
            cin>>sphWht;
            //Calculate volume of the sphere
            vol = (pi * rad * rad * rad *4) / 3;
            //Set decimal accuracy
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(1);
            //Output Data
            cout<<"The volume of your sphere is "<<vol
                <<" cubic feet."<<endl;
            //Calculate buoyant force
            bForce = vol * wtrWht;
            //Output buoyant force
            cout<<"The buoyant force of your sphere is "
                <<bForce<<" pounds."<<endl;
            if (bForce>=sphWht){
                cout<<"Your sphere will float!";
            }
            else{
                cout<<"Your sphere will sink."<<endl;
            }
            break;
        }
        case 10:{
            //Display results
            while(celcius!=fahrenheit){
                cout<<"Temperature in Celsius: "<<celcius<<endl
                    <<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
                celcius--;
                fahrenheit=((9*celcius)/5)+32;
                }
            break;
        }
        default:{
            cout<<"Not an option!"<<endl;
        }
    }
    //Exit Stage Right!!
    return 0;
}