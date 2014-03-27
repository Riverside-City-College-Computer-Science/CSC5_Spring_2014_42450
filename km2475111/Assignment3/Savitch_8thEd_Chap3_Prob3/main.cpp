/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on March 24, 2014, 8:53 PM
 * Purpose: Astrology Program //requires "cusp" coding
 */
//libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short day;
    //char month[15];
    string month;
    string astrSgn;
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
                <<" constantly starting new things and taking risks."<<endl;
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
                <<" constantly starting new things and taking risks."<<endl;
        }
        else if(day>=20&&day<31){
            //Taurus
            cout<<"Your sign is Taurus!"<<endl<<endl
                <<"You're slow getting started, but once "
                <<"you've set a plan into motion, there's no stopping you."
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
                <<"you've set a plan into motion, there's no stopping you."
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
    //Exit Stage Right
    return 0;
}

