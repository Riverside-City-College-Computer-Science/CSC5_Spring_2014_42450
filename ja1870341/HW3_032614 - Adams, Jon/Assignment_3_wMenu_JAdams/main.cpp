/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 30, 2014, 3:19 PM
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
//Global Constants
char exit;
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int short choose;
    //Prompt user for number of problem to execute
    cout<<"PLEASE REVIEW #14 - I am the most proud of it..."<<endl;
    cout<<"So I wouldn't mind my ego getting smashed and learning how"<<endl;
    cout<<"make it better!"<<endl;
    cout<<"Also, # 10 I could not figure out... Its the Fibonacci sequence"<<endl;
    cout<<"5 hours is the most I am willing to admit I spent on that problem"<<endl;
    cout<<endl;
    cout<<endl;
    do {                                                        //DO LOOP BEGIN
    cout<<"Choose from the following list"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 3 Problem 1-RPS"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 3 Problem 2-Interest"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 3 Problem 3-CUSP"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 3 Problem 4-Element"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 3 Problem 5-CallMe!"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 3 Problem 7-Roman v1.1"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 3 Problem 8-Blackjack(Broken)"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 3 Problem 9-Capitalism"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 3 Problem 10crud(incomplete)"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 3 Problem 14-Optimus"<<endl;
    cout<<"11. Savitch 8th Edition Chapter 3 Problem 15-Sphere"<<endl;
    cout<<"12. Savitch 8th Edition Chapter 3 Problem 16-Temperature"<<endl;
    cout<<"13. Savitch 8th Edition Chapter 3 Problem 17-Fat v2.0"<<endl;
    cout<<"14. Savitch 8th Edition Chapter 3 Problem 18-Keypad"<<endl;
    cout<<"15. Truth Table"<<endl;
    cout<<"16. Exit Program - All"<<endl;
    cout<<"DO NOT ENTER ANYTHING BUT A NUMBER"<<endl;
    cin>>choose;
    //Catch invalid input
    if (!(choose<=16)) {
        cout<<"Not an option!"<<endl;
    }
    //Utilize switch to implement the menu
    switch(choose) {
        
        case 1:{ 
///////////////////////////////PROBLEM 1 Savitch Chp3Prb1//////////////////////// 
            cout<<"Welcome to Option 1.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Variables
    char player1, player2;
    //Prompt
    do {
    cout<<"Lets play rock paper scissors"<<endl;
    cout<<"Player 1, press R for Rock, P, for paper, and S for scissors"<<endl;
    //Player 1 input
    cin>>player1;
    cout<<"Player 2, press R for Rock, P, for paper, and S for scissors"<<endl;
    //Player 2 input
    cin>>player2;
    //Player 1 deciphered first, then player 2. Game ends
    //Rock
    if ((player1=='r')||(player1=='R')) {
        if ((player2=='r')||(player2=='R')) {
            cout<<"You tied!"<<endl;
            
        }
        else if ((player2=='s')||(player2=='S')) {
            cout<<"Player 1 wins with Rock smashing Scissors!"<<endl;  
            
        }
        else if ((player2=='p')||(player2=='P')) {
            cout<<"Player 2 wins with Paper smothering Rock!"<<endl;
            
        }
        else {
            cout<<"Player2 made an invalid entry!!!"<<endl;
            
        }
    }
    //Scissors
    else if ((player1=='s')||(player1=='S')) {
        if ((player2=='s')||(player2=='S')) {
            cout<<"You tied!"<<endl;
        }
        else if ((player2=='p')||(player2=='P')) {
            cout<<"Player 1 wins with Scissors cutting Paper!"<<endl;  
        }
        else if ((player2=='r')||(player2=='R')) {
            cout<<"Player 2 wins with Rock smashing scissors!"<<endl;
        }
        else {
            cout<<"Player2 made an invalid entry!!!"<<endl;
        }
    }
    //Paper
    else if ((player1=='p')||(player1=='P')) {
        if ((player2=='p')||(player2=='P')) {
            cout<<"You tied!"<<endl;
        }
        else if ((player2=='r')||(player2=='R')) {
            cout<<"Player 1 wins with Paper smothering Rock!"<<endl;  
        }
        else if ((player2=='s')||(player2=='S')) {
            cout<<"Player 2 wins with Scissors cutting Paper!"<<endl;
        }
        else {
            cout<<"Player2 made an invalid entry!!!"<<endl;
        }
    }
    else {
        cout<<"Player1 made an invalid entry!"<<endl;
    }
    cout<<"Game over!"<<endl;
    cout<<"Would you like to play again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 1
        
        case 2:{
////////////////////////////////PROBLEM 2 Savitch Chp3Prb2//////////////////////
            cout<<"Welcome to Option 2.";
            cout<<endl;
            //START CODE//////////////////////////////
            //variables
    float balance, total, intr1=.015, intr2=.01;
    char input;
    float penies;
    /* After playing with pennies =.005, I noticed you don't need to add
     * pennies because line 22,23,24 automatically have the program round up */
    do {
        cout<<"Enter a loan amount. Interest is 1.5 for first 1000, & "<<endl;
        cout<<"1.0 after that."<<endl;
        cout<<endl;
        cout<<"Please enter your account balance."<<endl;
        cin>>balance;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        if (balance<=1000){
            total=(balance*intr1)+balance;
            if (total<=10) {
                cout<<"You owe $"<<total+penies<<" dollars. ";
                cout<<"Pay balance in full."<<endl;
            }
            else if (total>10) {
                if ((((total*intr1)+total)/10)<=10) {
                cout<<"You owe $"<<total+penies<<" dollars. ";
                cout<<"Your minimum payment is 10 dollars.";
                }
                else {
                    cout<<"You owe $"<<total+penies<<" dollars. ";
                    cout<<"Your minimum payment is $"<<(((total*intr1)+total)/10)+penies<<" dollars.";
                    //Exit Stage Right
                    return 0;
                }
            }
        }
        else {
            total=((1000*intr1)+1000)+((balance-1000)*intr2)+(balance-1000);
            cout<<"Oh yeah, we got you good."<<endl;
            cout<<"You owe us $"<<total+penies<<" dollars."<<endl;
            cout<<"Your minimum payment (get used to that term) is $"<<(total/10)+penies<<" dollars"<<endl; 
        }
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
 
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 2
////////////////////////////////////////////////////////////////////////////////        
       
        case 3:{
////////////////////////////////PROBLEM 3 Savitch Chp3Prb3//////////////////////
            cout<<"Welcome to Option 3.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Variables
    unsigned short int bDay, month, julian;
    string Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio,
            Sagittarius, Capricorn, Aquarius, Pisces;
    Aries = "You're an Aries!\n"
            "A keen ability on your part to blend the worlds of intellect\n"
            "and intuition could well surface today, Aries. The ability to\n"
            "focus both these methods of perception into material reality\n"
            "is apt to give a boost to your career and educational efforts.\n"
            "It also could enhance your romantic life. Anything begun or \n"
            "completed today has an advantage. Try to look closely at this\n"
            "new tendency and make it last. It's definitely a plus!";
    Taurus = "You're a Taurus!\n"
             "Relationships of all kinds become stronger and more enduring\n"
             "today, Taurus. Successes boost the strength of business\n"
             "partnerships; love relationships advance to the next level of\n"
             "commitment. Bonds of any kind formed now are likely to be strong\n"
             "ones, marked by honesty, loyalty, and affection. This is a great\n"
             "day to get together with anyone close to you; your relationship\n"
             "is very likely to grow because of it. Enjoy your day.";
    Gemini = "You're a Gemini!\n"
             "An interest in health and nutrition could come to the surface \n"
             "for you, Gemini. New discoveries regarding the benefits of certai\n"
             "nutrients, exercise programs, or other forms of alternative \n"
             "could attract your attention. You might want to attend a lecture\n"
             "of some kind in order to learn more about it. You'll probably\n"
             "stick with any new program begun now, so go for it. Dare to\n"
             "strive for optimal health";
    Cancer = "You're a Cancer!\n"
             "Have you been thinking about taking a course in one of the arts,\n"
             "Cancer? Whether your preference is painting, music, drama, dance,\n"
             "or creative writing, if you commit now, you'll probably continue\n"
             "with it. The practical arts of cooking, building, or interior\n"
             "decoration are also possibilities. Whatever it is, it won't be\n"
             "quickly abandoned. If you begin with the idea of eventually doing\n"
             "it professionally, chances are you will. Good luck!";
    Leo =   "You're a Leo!\n"
            "If you own your own home, Leo, you may learn today that its value\n"
            "has increased substantially. If you don't own a home but want to\n"
            "buy one, this is the time to start looking. Any investments made\n"
            "now, particularly in land, will probably be solid and apt to gain\n"
            "in value, although results might take some time to materialize.\n"
            "Carefully consider all contingencies before committing, however.\n"
            "This isn't the time to act impulsively.";
    Virgo = "You're a Virgo!\n"
            "Some down-to-Earth conversations with a love partner could result\n"
            "in advancing the relationship to the next level of commitment,\n"
            "Virgo. The communication should be loving and supportive, but\n"
            "practical matters like money, work, and personal habits could be\n"
            "discussed. You'll probably find that you and your partner are more\n"
            "compatible than you thought. Move ahead, but with caution. Love is\n"
            "the beacon guiding most of us through life.";
    Libra = "You're a Libra!\n"
            "The desire to make a particular purchase could have you reworking\n"
            "your budget today, Libra. This is a good time to do this, as your\n"
            "business and money sense are operating at a high level, and you're\n"
            "likely to be savvier about finance than usual.";
    Scorpio = "You're a Scorpio!\n"
            "Suddenly you seem more glamorous than usual, Scorpio. You may exert\n"
            "a mysterious appeal that in the 1920s was called \"it.\"Current and\n"
            "potential love partners may take a second look and be intrigued.";
    Sagittarius = "You're a Sagittarius!\n" 
            "Your visionary tendencies are in the ascendant today, Sagittarius,\n"
            "although they take more of a practical than mystical bent. You \n"
            "might look at your living room or backyard and suddenly find\n"
            "yourself redecorating it in your mind's eye.";
    Capricorn = "You're a Capricorn!\n"
            "As a person who enjoys being gregarious and outgoing, days like\n"
            "this provide a wonderful outlet for your energy. You might spend\n"
            "a lot of time with your family today, Capricorn, but you'll also\n"
            "probably touch base with many others.";
    Aquarius = "You're an Aquarius!\n"
            "Corporate kudos and increased income that you may have been \n" 
            "working toward for a long time may finally manifest today, \n"
            "Aquarius. Your effort and energy haven't gone unnoticed.";
    Pisces =  "You're a Pisces!\n"
            "This is a great day to deal with legal matters of any kind, \n"
            "Pisces, including plans for a wedding, if one is in the offing!\n"
            "Your financial situation should be thriving and stable, and \n"
            "long-term educational goals may come to the forefront.";
    //man this stuff is dumb
    //Prompt for input
    do {
    cout<<"Please enter just the Month of your birthday."<<endl;
    cout<<"Numbers 1-12 will suffice for the month: "<<endl;
    cin>>month;
    switch (month) {
        case 1: month=1;break;
        case 2: month=32;break;
        case 3: month=60;break;
        case 4: month=91;break;
        case 5: month=121;break;
        case 6: month=152;break;
        case 7: month=182;break;
        case 8: month=213;break;
        case 9: month=244;break;
        case 10: month=274;break;
        case 11: month=305;break;
        case 12: month=355;break;
    }
    cout<<"NOTE: Non-Leap year"<<endl;
    cout<<"Please enter the day of the month for your birthday: "<<endl;
    cin>>bDay;
    julian=month+bDay;
    cout<<"Julian date: "<<julian<<endl;
    //Aries
    if ((julian>=80)&&(julian<=109)) {
        cout<<Aries<<endl;
        if ((julian==80)||(julian==81)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Pisces<<endl;
        }
        else if ((julian==108)||(julian==109)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Taurus<<endl;
        }
    }
    //Taurus
    else if ((julian>=110)&&(julian<=140)) {
        cout<<Taurus<<endl;
        if ((julian==110)||(julian==111)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aries<<endl;
        }
        else if ((julian==139)||(julian==140)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Gemini<<endl;
        }
    }
    //Gemini
    else if ((julian>=141)&&(julian<=172)) {
        cout<<Gemini<<endl;
        if ((julian==141)||(julian==142)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Taurus<<endl;
        }
        else if ((julian==171)||(julian==172)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Cancer<<endl;
        }
    }
    //Cancer
    else if ((julian>=173)&&(julian<=203)) {
        cout<<Cancer<<endl;
        if ((julian==173)||(julian==174)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Gemini<<endl;
        }
        else if ((julian==202)||(julian==203)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Leo<<endl;
        }
    }
    //Leo
    else if ((julian>=204)&&(julian<=234)) {
        cout<<Leo<<endl;
        if ((julian==204)||(julian==205)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Cancer<<endl;
        }
        else if ((julian==233)||(julian==234)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Virgo<<endl;
        }
    }
    else if ((julian>=235)&&(julian<=265)) {
        cout<<Virgo<<endl;
        if ((julian==235)||(julian==236)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Leo<<endl;
        }
        else if ((julian==264)||(julian==265)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Libra<<endl;
        }
    }
    else if ((julian>=266)&&(julian<=295)) {
        cout<<Libra<<endl;
        if ((julian==266)||(julian==267)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Virgo<<endl;
        }
        else if ((julian==294)||(julian==295)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Scorpio<<endl;
        }
    }
    //Scorpio
    else if ((julian>=296)&&(julian<=325)) {
        cout<<Scorpio<<endl;
        if ((julian==296)||(julian==297)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Libra<<endl;
        }
        else if ((julian==324)||(julian==325)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Sagittarius<<endl;
        }
    }
    else if ((julian>=326)&&(julian<=355)) {
        cout<<Sagittarius<<endl;
        if ((julian==326)||(julian==327)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Scorpio<<endl;
        }
        else if ((julian==354)||(julian==355)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Capricorn<<endl;
        }
    }
    else if (((julian>=356)&&(julian<=365))||((julian>=1)&&(julian<=19))) {
        cout<<Capricorn<<endl;
        if ((julian==356)||(julian==357)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Sagittarius<<endl;
        }
        else if ((julian==18)||(julian==19)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aquarius<<endl;
        }
    }
    else if ((julian>=20)&&(julian<=49)) {
        cout<<Aquarius<<endl;
        if ((julian==20)||(julian==21)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Capricorn<<endl;
        }
        else if ((julian==48)||(julian==49)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Pisces<<endl;
        }
    }
    else if ((julian>=50)&&(julian<=79)) {
        cout<<Pisces<<endl;
        if ((julian==50)||(julian==51)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aquarius<<endl;
        }
        else if ((julian==78)||(julian==79)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aries<<endl;
        }
    }
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 3
////////////////////////////////////////////////////////////////////////////////
        
        case 4:{
////////////////////////////////PROBLEM 4 Savitch Chp3Prb4//////////////////////
            cout<<"Welcome to Option 4.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Variables
    unsigned short int bDay, month, julian;
    string Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio,
            Sagittarius, Capricorn, Aquarius, Pisces, FIRE, AIR, EARTH, WATER;
    FIRE = "Aries, Leo, Sagittarius";
    AIR = "Gemini, Libra, Aquarius";
    WATER = "Cancer, Scorpio, Pisces";
    EARTH = " Taurus, Virgo, Capricorn";
    Aries = "You're an Aries!\n"
            "A keen ability on your part to blend the worlds of intellect\n"
            "and intuition could well surface today, Aries. The ability to\n"
            "focus both these methods of perception into material reality\n"
            "is apt to give a boost to your career and educational efforts.\n"
            "It also could enhance your romantic life. Anything begun or \n"
            "completed today has an advantage. Try to look closely at this\n"
            "new tendency and make it last. It's definitely a plus!";
    Taurus = "You're a Taurus!\n"
             "Relationships of all kinds become stronger and more enduring\n"
             "today, Taurus. Successes boost the strength of business\n"
             "partnerships; love relationships advance to the next level of\n"
             "commitment. Bonds of any kind formed now are likely to be strong\n"
             "ones, marked by honesty, loyalty, and affection. This is a great\n"
             "day to get together with anyone close to you; your relationship\n"
             "is very likely to grow because of it. Enjoy your day.";
    Gemini = "You're a Gemini!\n"
             "An interest in health and nutrition could come to the surface \n"
             "for you, Gemini. New discoveries regarding the benefits of certai\n"
             "nutrients, exercise programs, or other forms of alternative \n"
             "could attract your attention. You might want to attend a lecture\n"
             "of some kind in order to learn more about it. You'll probably\n"
             "stick with any new program begun now, so go for it. Dare to\n"
             "strive for optimal health";
    Cancer = "You're a Cancer!\n"
             "Have you been thinking about taking a course in one of the arts,\n"
             "Cancer? Whether your preference is painting, music, drama, dance,\n"
             "or creative writing, if you commit now, you'll probably continue\n"
             "with it. The practical arts of cooking, building, or interior\n"
             "decoration are also possibilities. Whatever it is, it won't be\n"
             "quickly abandoned. If you begin with the idea of eventually doing\n"
             "it professionally, chances are you will. Good luck!";
    Leo =   "You're a Leo!\n"
            "If you own your own home, Leo, you may learn today that its value\n"
            "has increased substantially. If you don't own a home but want to\n"
            "buy one, this is the time to start looking. Any investments made\n"
            "now, particularly in land, will probably be solid and apt to gain\n"
            "in value, although results might take some time to materialize.\n"
            "Carefully consider all contingencies before committing, however.\n"
            "This isn't the time to act impulsively.";
    Virgo = "You're a Virgo!\n"
            "Some down-to-Earth conversations with a love partner could result\n"
            "in advancing the relationship to the next level of commitment,\n"
            "Virgo. The communication should be loving and supportive, but\n"
            "practical matters like money, work, and personal habits could be\n"
            "discussed. You'll probably find that you and your partner are more\n"
            "compatible than you thought. Move ahead, but with caution. Love is\n"
            "the beacon guiding most of us through life.";
    Libra = "You're a Libra!\n"
            "The desire to make a particular purchase could have you reworking\n"
            "your budget today, Libra. This is a good time to do this, as your\n"
            "business and money sense are operating at a high level, and you're\n"
            "likely to be savvier about finance than usual.";
    Scorpio = "You're a Scorpio!\n"
            "Suddenly you seem more glamorous than usual, Scorpio. You may exert\n"
            "a mysterious appeal that in the 1920s was called \"it.\"Current and\n"
            "potential love partners may take a second look and be intrigued.";
    Sagittarius = "You're a Sagittarius!\n" 
            "Your visionary tendencies are in the ascendant today, Sagittarius,\n"
            "although they take more of a practical than mystical bent. You \n"
            "might look at your living room or backyard and suddenly find\n"
            "yourself redecorating it in your mind's eye.";
    Capricorn = "You're a Capricorn!\n"
            "As a person who enjoys being gregarious and outgoing, days like\n"
            "this provide a wonderful outlet for your energy. You might spend\n"
            "a lot of time with your family today, Capricorn, but you'll also\n"
            "probably touch base with many others.";
    Aquarius = "You're an Aquarius!\n"
            "Corporate kudos and increased income that you may have been \n" 
            "working toward for a long time may finally manifest today, \n"
            "Aquarius. Your effort and energy haven't gone unnoticed.";
    Pisces =  "You're a Pisces!\n"
            "This is a great day to deal with legal matters of any kind, \n"
            "Pisces, including plans for a wedding, if one is in the offing!\n"
            "Your financial situation should be thriving and stable, and \n"
            "long-term educational goals may come to the forefront.";
    //man this stuff is dumb
    //Prompt for input
    do {
    cout<<"Please enter just the Month of your birthday."<<endl;
    cout<<"Numbers 1-12 will suffice for the month: "<<endl;
    cin>>month;
    switch (month) {
        case 1: month=1;break;
        case 2: month=32;break;
        case 3: month=60;break;
        case 4: month=91;break;
        case 5: month=121;break;
        case 6: month=152;break;
        case 7: month=182;break;
        case 8: month=213;break;
        case 9: month=244;break;
        case 10: month=274;break;
        case 11: month=305;break;
        case 12: month=355;break;
    }
    cout<<"NOTE: Non-Leap year"<<endl;
    cout<<"Please enter the day of the month for your birthday: "<<endl;
    cin>>bDay;
    julian=month+bDay;
    cout<<"Julian date: "<<julian<<endl;
    //Aries
    if ((julian>=80)&&(julian<=109)) {
        cout<<Aries<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<FIRE<<endl;
        cout<<endl;
        if ((julian==80)||(julian==81)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Pisces<<endl;
        }
        else if ((julian==108)||(julian==109)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Taurus<<endl;
        }
    }
    //Taurus
    else if ((julian>=110)&&(julian<=140)) {
        cout<<Taurus<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<EARTH<<endl;
        cout<<endl;
        if ((julian==110)||(julian==111)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aries<<endl;
        }
        else if ((julian==139)||(julian==140)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Gemini<<endl;
        }
    }
    //Gemini
    else if ((julian>=141)&&(julian<=172)) {
        cout<<Gemini<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<AIR<<endl;
        cout<<endl;
        if ((julian==141)||(julian==142)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Taurus<<endl;
        }
        else if ((julian==171)||(julian==172)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Cancer<<endl;
        }
    }
    //Cancer
    else if ((julian>=173)&&(julian<=203)) {
        cout<<Cancer<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<WATER<<endl;
        cout<<endl;
        if ((julian==173)||(julian==174)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Gemini<<endl;
        }
        else if ((julian==202)||(julian==203)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Leo<<endl;
        }
    }
    //Leo
    else if ((julian>=204)&&(julian<=234)) {
        cout<<Leo<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<FIRE<<endl;
        cout<<endl;
        if ((julian==204)||(julian==205)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Cancer<<endl;
        }
        else if ((julian==233)||(julian==234)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Virgo<<endl;
        }
    }
    else if ((julian>=235)&&(julian<=265)) {
        cout<<Virgo<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<EARTH<<endl;
        cout<<endl;
        if ((julian==235)||(julian==236)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Leo<<endl;
        }
        else if ((julian==264)||(julian==265)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Libra<<endl;
        }
    }
    else if ((julian>=266)&&(julian<=295)) {
        cout<<Libra<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<AIR<<endl;
        cout<<endl;
        if ((julian==266)||(julian==267)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Virgo<<endl;
        }
        else if ((julian==294)||(julian==295)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Scorpio<<endl;
        }
    }
    //Scorpio
    else if ((julian>=296)&&(julian<=325)) {
        cout<<Scorpio<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<WATER<<endl;
        cout<<endl;
        if ((julian==296)||(julian==297)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Libra<<endl;
        }
        else if ((julian==324)||(julian==325)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Sagittarius<<endl;
        }
    }
    else if ((julian>=326)&&(julian<=355)) {
        cout<<Sagittarius<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<FIRE<<endl;
        cout<<endl;
        if ((julian==326)||(julian==327)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Scorpio<<endl;
        }
        else if ((julian==354)||(julian==355)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Capricorn<<endl;
        }
    }
    else if (((julian>=356)&&(julian<=365))||((julian>=1)&&(julian<=19))) {
        cout<<Capricorn<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<EARTH<<endl;
        cout<<endl;
        if ((julian==356)||(julian==357)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Sagittarius<<endl;
        }
        else if ((julian==18)||(julian==19)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aquarius<<endl;
        }
    }
    else if ((julian>=20)&&(julian<=49)) {
        cout<<Aquarius<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<AIR<<endl;
        cout<<endl;
        if ((julian==20)||(julian==21)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Capricorn<<endl;
        }
        else if ((julian==48)||(julian==49)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Pisces<<endl;
        }
    }
    else if ((julian>=50)&&(julian<=79)) {
        cout<<Pisces<<endl;
        cout<<endl;
        cout<<"You're most compatible with "<<WATER<<endl;
        cout<<endl;
        if ((julian==50)||(julian==51)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aquarius<<endl;
        }
        else if ((julian==78)||(julian==79)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aries<<endl;
        }
    }
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
                 
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 4
////////////////////////////////////////////////////////////////////////////////
        
        case 5:{
////////////////////////////////PROBLEM 5 Savitch Chp3Prb5//////////////////////
            cout<<"Welcome to Option 5.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Declare variables
    float dWeek=.40,nWeek=.25,wkend=.15;
    int length, time;
    char dInput1, dInput2;
    //Set precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //loop
    do {
    cout<<"Please enter the time of the day your call started"<<endl;
    cout<<"in a 4 digit, 24H format. EX: 1:30PM = 1330"<<endl;
    cin>>time;
    cout<<"Enter the length of your call in whole minutes"<<endl;
    cin>>length;
    cout<<"Please enter the day of your call using"<<endl;
    cout<<"two character format. Ex. (Mo, Tu, We, Th, Fr, Sa, Su)"<<endl;
    cin>>dInput1>>dInput2;
    if ((dInput1=='m')||(dInput1=='M')||(dInput1=='t')||(dInput1=='T')||
            (dInput1=='w')||(dInput1=='W')||(dInput1=='f')||(dInput1=='F'))  {
        if (time>759&&time<1800) {
            cout<<"Your "<<length<<" minute call cost $";
            cout<<length*dWeek<<" at a rate of "<<dWeek<<" per minute"<<endl;
        }
        else {
            cout<<"Your "<<length<<" minute call cost $";
            cout<<length*nWeek<<" at a rate of "<<nWeek<<" per minute"<<endl;
        }
    }
    else if ((dInput1=='s')||(dInput1=='S')) {
        cout<<"Your "<<length<<" minute call cost $";
        cout<<length*wkend<<" at a rate of "<<wkend<<" per minute"<<endl; 
    }
    else { 
        cout<<"Invalid input";
    }
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
               
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 5
////////////////////////////////////////////////////////////////////////////////        
       
        case 6:{
////////////////////////////////PROBLEM 6 Savitch Chp3Prb7//////////////////////
            cout<<"Welcome to Option 6.";
            cout<<endl;
            //START CODE//////////////////////////////
            unsigned int year;
            do {
    cout<<"Please input a four digit year"<<endl;
    cin>>year;
    //Declare and calculate how many 1000s
    //100s, 10s, and 1s:
    int n1000s, n100s, n10s, n1s; 
    n1000s=year/1000;
    year-=(n1000s*1000);
    n100s=year/100;
    year-=(n100s*100);
    n10s=year/10;
    year-=(n10s*10);
    n1s=year;
    //Output n1000s in Roman Numeral (RN)
    switch(n1000s){
        case 3:cout<<'M';
        case 2:cout<<'M';
        case 1:cout<<'M';
    }
    //Output n100s
    switch (n100s) {
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
    //Output 10s
    switch (n10s) {
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
    //Output 1s
     switch (n1s) {
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"III";break;
        case 2:cout<<"II";break;
        case 1:cout<<"I";break;
     }
     cout<<endl;
     cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
     cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 6
////////////////////////////////////////////////////////////////////////////////
        
        case 7:{
////////////////////////////////PROBLEM 7 Savitch Chp3Prb8//////////////////////
            cout<<"Welcome to Option 7.";
            cout<<endl;
            //START CODE//////////////////////////////
            do {
                cout<<"Program uses CSTDLIB which conflicts with this menu"<<endl;
                cout<<"Please view program within its own folder"<<endl;
                cout<<"Adding CSTDLIB to this menu gives an error with"<<endl;
                cout<<"Global Constant (char exit)"<<endl;
                cout<<endl;
    cout<<"Press N to exit"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 7
////////////////////////////////////////////////////////////////////////////////
        
        case 8:{
////////////////////////////////PROBLEM 8 Savitch Chp3Prb9//////////////////////
            cout<<"Welcome to Option 8.";
            cout<<endl;
            //START CODE//////////////////////////////
            float loan, rate;
    float mPaymnt, totPaid, tIntrst;
    int n=1, nPaymnts, orinPay;
    do {
    cout<<"Input the loan $, interest rate %, and"<<endl;
    cout<<"number of payments. Press Return between each."<<endl;
    cin>>loan>>rate>>nPaymnts;
    //Store original term value
    orinPay=nPaymnts;
    //Convert rate into proper format
    rate=rate/100;
    //Round decimals
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Loop for calculating payments
    do {
        mPaymnt=((loan*rate)/nPaymnts)+(loan/nPaymnts);
        tIntrst=(loan*rate/nPaymnts)+tIntrst;
                cout<<"Loan amount: "<<loan<<endl;
                cout<<"Payment #"<<n++<<": "<<mPaymnt<<endl;
                cout<<"Interest Paid this period: "<<(loan*rate)/nPaymnts<<endl;
                cout<<"Principal Paid this period: "<<loan/nPaymnts<<endl;
                cout<<"Total interest paid: "<<tIntrst<<endl;
                cout<<"Balance carried forward: "<<loan-mPaymnt<<endl;
                cout<<endl;
                cout<<endl;
        loan=loan-mPaymnt;
        nPaymnts=(--nPaymnts);
        //Cutoff for final payment to not be exponentially reduced
        if (mPaymnt>loan) {
                cout<<"Final payment is: "<<loan<<endl;
                cout<<"Payment #"<<n++<<": "<<loan<<endl;
                cout<<"Interest Paid this period: "<<(loan*rate)<<endl;
                cout<<"Principal Paid this period: "<<loan-(loan*rate)<<endl;
                cout<<"Total interest paid: "<<tIntrst+(loan*rate)<<endl;
                loan=(loan-loan);
                cout<<"Loan amount: "<<loan<<endl;
                nPaymnts=0;
                cout<<"I wish my mortgage company used this equation!!"<<endl;
        }
    } while (nPaymnts>0);
     cout<<endl;
     cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
     cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 8
////////////////////////////////////////////////////////////////////////////////        
       
        case 9:{
////////////////////////////////PROBLEM 9 Savitch Chp3Prb10//////////////////////
            cout<<"Welcome to Option 9. - Incomplete";
            cout<<endl;
            //START CODE//////////////////////////////
            do {
                //Variables
    float isize, time, growth, growth2, growth3, rate, fib, n=0, n2=1;
    //Input
    cout<<"Input the initial size of green crud in pounds"<<endl;
    cin>>isize;
    growth=isize;
    cout<<"Input how many days you would like to have the population grow"<<endl;
    cin>>time;
    rate=time/5;
    //I got this code from a request on cplusplus forums. I still am not sure
    //how to use it. 
    /*/////////////////////////////////////////////////////////////////////
    float a0=1,a1= 1;
    if(rate==0)
        return a0;
    else if(rate==1)
        return a1;
    while(rate-->1){
        unsigned int temp(a1);
        a1 += a0;
        a0 = temp;
    }
    return a1;
    *//////////////////////////////////////////////////////////////////////
    /*Here is the code I was working on:
     *     if ((1==rate)||(2==rate)) {
        cout<<"Population size is"<<isize<<endl;
    }
    else {
        while (rate>=3) {
            growth2=growth;
            growth3=growth2;
            growth=growth2+growth3;
            rate--;
            }
    }
     *////////////////////////////////////////////////////////////////////

                cout<<"Crud pile is "<<growth<<endl;
                cout<<endl;
    cout<<"Press N to exit"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 9
////////////////////////////////////////////////////////////////////////////////
        
        case 10:{
////////////////////////////////PROBLEM 10 Savitch Chp3Prb14////////////////////
            cout<<"Welcome to Option 10.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Declare variables
            do {
    unsigned int prime;
    cout<<"Press any key to see the prime numbers between 1 and 100!"<<endl;
    cin.get();
    cin.get();
    for(unsigned int prime=2; prime <= 100; ++prime) {
        unsigned int even=2;
        for(;even<=prime-1;even++) {
            if(prime%even == 0)
                break;
                                   }
           if(even==prime&&even!=2) 
             cout<<prime<<", ";
                                                     }
    cout<<"and..."<<endl;
    cout<<"that's all folks!"<<endl;
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 10
////////////////////////////////////////////////////////////////////////////////
        
        case 11:{
////////////////////////////////PROBLEM 11 Savitch Chp3Prb15////////////////////
            cout<<"Welcome to Option 11.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Declare variables
            do{
                
    float specG = 62.4;
    float buoyF, radius, weight;
    cout<<"Please input the radius of your sphere in inches ";
    cin>>radius;
    cout<<"Please input the weight of your sphere in pounds ";
    cin>>weight;
    buoyF = (((4/3)*(3.14)*pow(radius, 3))/12)*specG;
    cout<<"Your sphere's buoyant force is "<<buoyF<<" pounds."<<endl;
    if (buoyF>=weight)
        cout<<"Your sphere will float"<<endl;
    else 
        cout<<"Your sphere will sink"<<endl;
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 11
////////////////////////////////////////////////////////////////////////////////
        
        case 12:{
////////////////////////////////PROBLEM 12 Savitch Chp3Prb16////////////////////
            cout<<"Welcome to Option 12.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Declare Variables
            do {
    int cels, fahr;   
    cels=100;
    fahr=(9.0/5.0)*cels+32; 
//Loop to determine value    
    while (cels!=fahr) {  
        fahr=(9.0/5.0)*cels+32;
        cels=cels-1;
    }
    //Output
    cout<<"Celsius and Fahrenheit are the same at "<<endl;
    cout<<fahr<<"!"<<endl;  
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));

            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 12
////////////////////////////////////////////////////////////////////////////////
        
        case 13:{
////////////////////////////////PROBLEM 13 Savitch Chp3Prb17////////////////////
            cout<<"Welcome to Option 13.";
            cout<<endl;
            //START CODE//////////////////////////////
            char work;
    unsigned int weight, height, age;
    float male, female;
    do {
    cout<<"Please input the person's weight in pounds, height "<<endl;
    cout<<"in inches and age in years"<<endl;
    cout<<"NOTE: Round all numbers to the nearest whole number"<<endl;
    cin>>weight>>height>>age;
    cout<<"Now enter the corresponding letter for persons activity:"<<endl;
    cout<<"A for a sedentary person"<<endl;
    cout<<"B for a /""Somewhat Active/"" person"<<endl;
    cout<<"C for an active person (exercise 3-4 times a week)"<<endl;
    cout<<"D for highly active (exercise 6 or more days a week"<<endl;
    cin>>work;
    cout<<fixed<<setprecision(1)<<showpoint;
    //Female calculations and output
    female=655+(4.3*weight)+(4.7*height)-(4.7*age);
    //Male calculations and output
    male=66+(6.3*weight)+(12.9*height)-(6.8*age);
    if (work=='A'||'a')
        male=male+male*(.2),
                female=female+female*(.2);
    else if (work=='B'||'b')
        male=male+male*(.3),
                female=female+female*(.3);
    else if (work=='C'||'c')
        male=male+male*(.4),
                female=female+female*(.4);
    else if  (work=='D'||'d')
        male=male+male*(.5),
                female=female+female*(.5);
    else
            //Why isn't this error message displaying
        cout<<"You entered an invalid selection for activity"<<endl;
    //output 
    cout<<"If person is female they will need ";
    cout<<female;
    cout<<" calories a day to maintain their body weight."<<endl;
    cout<<"That's "<<female/230<<" candy bars."<<endl;
    cout<<"If person is male they will need ";
    cout<<male;
    cout<<" calories a day to maintain their body weight."<<endl;
    cout<<"That's "<<male/230<<" candy bars."<<endl;
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
         
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 13
////////////////////////////////////////////////////////////////////////////////
        
        case 14:{
////////////////////////////////PROBLEM 14 Savitch Chp3Prb18////////////////////
            cout<<"Welcome to Option 14.";
            cout<<endl;
            //START CODE//////////////////////////////
            //variables
    unsigned int short totStar, tot, tmpWant1, tmpWant2, tmpWant3;
    //prompt
    do {
    cout<<"This oven's 0-9 Digit Keyboard has broken buttons: 1, 4, & 7"<<endl;
    cout<<"Instead of buying a new oven, we've designed this computer program"<<endl;
    cout<<"to tell you the closest temperatures possible that will be accepted"<<endl;
    cout<<"on this oven's keyboard."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Input the temperature you want (0-999)"<<endl;
    cout<<"Input one digit at a time, each followed by \"Enter\""<<endl;
    //Input digits
    cin>>tmpWant1>>tmpWant2>>tmpWant3;
    //create temp
    tot=(tmpWant1*100)+(tmpWant2*10)+(tmpWant3);
    //Set value for original user entry
    totStar=tot;
    //Start Output
    cout<<"Your desired temp is "<<tot<<endl;
    cout<<"The closest temp possible for input on this keyboard:"<<endl;
    //Is this a possible temperature on broken keyboard?
    //If statement for entry that includes a broken key
    if ((tmpWant1==1)||(tmpWant1==4)||(tmpWant1==7)||
       (tmpWant2==1)||(tmpWant2==4)||(tmpWant2==7)||
       (tmpWant3==1)||(tmpWant3==4)||(tmpWant3==7)) {                                                   
           //Greater than           
           do {
                tot++; 
                tmpWant1=(tot/100);
                tmpWant2=(tot-(tmpWant1*100))/10;
                tmpWant3=(tot-(tmpWant1*100))%10;       
           } while ((tmpWant1==1)||(tmpWant1==4)||(tmpWant1==7)||
                   (tmpWant2==1)||(tmpWant2==4)||(tmpWant2==7)||
                   (tmpWant3==1)||(tmpWant3==4)||(tmpWant3==7));
           //Output high temp
           cout<<"Closest possible higher temperature is: "<<tot<<endl;
           tot=totStar;
           //Lesser than
           do {
                tot--; 
                tmpWant1=(tot/100);
                tmpWant2=(tot-(tmpWant1*100))/10;
                tmpWant3=(tot-(tmpWant1*100))%10;      
           } while ((tmpWant1==1)||(tmpWant1==4)||(tmpWant1==7)||
                   (tmpWant2==1)||(tmpWant2==4)||(tmpWant2==7)||
                   (tmpWant3==1)||(tmpWant3==4)||(tmpWant3==7));
           //Output low temp
           cout<<"Closest possible lower temperature is: "<<tot<<endl;
    }
    else {
        cout<<"Your desired temperature is possible on this broken keyboard"<<endl;
    }
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 14
////////////////////////////////////////////////////////////////////////////////
        
        case 15:{
////////////////////////////////PROBLEM 14 TRUTH TABLE//////////////////////////
            cout<<"Welcome to Option 15.";
            cout<<endl;
            //START CODE//////////////////////////////
            //Headings for the truth table
            do {
    cout<<setw(9)<<"X:"<<setw(9)<<"Y:"<<setw(9)<<"!X:"<<setw(9)<<"!Y:";
    cout<<setw(9)<<"X&&Y:"<<setw(9)<<"X||Y:"<<setw(9)<<"X^Y:"<<setw(9)<<"X^Y^X:";
    cout<<setw(9)<<"X^Y^Y:"<<setw(9)<<"!(X||Y):"<<setw(9)<<"!X&&!Y:";
    cout<<setw(9)<<"!(X&&Y):"<<setw(9)<<"!X||!Y:"<<endl;
    //output row 1
    bool x=true,y=true;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //continue for the first row
    //output the second row
    y=false;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //output the third row
    x=false,y=true;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //output the fourth row
    y=false;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //Verified earthquake on March AFB @ 2113 20140328
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 15
////////////////////////////////////////////////////////////////////////////////
        
        case 16: {
            cout<<"Good Bye!"<<endl;break;
        }
////////////////////////////////////////////////////////////////////////////////        
    } // switch statement end bracket
////////////////////////////////////////////////////////////////////////////////   
    } while (choose!=16); // do-while end bracket
////////////////////////////////////////////////////////////////////////////////        
//Exit Stage Right
    return 0;
}

