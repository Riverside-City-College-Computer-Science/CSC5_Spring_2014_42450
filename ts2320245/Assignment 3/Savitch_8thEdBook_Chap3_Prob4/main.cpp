/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 4: Horoscope Signs of the same Element are most compatible. there are 4 Elements 
 *            in astrology, and 3 Signs in each: FIRE(Aries, Leo, Sagittarius),
 *            EARTH(Taurus, Virgo, Capricorn),AIR(Gemini, Libra, Aquarius),WATER(Cancer,Scorpio,Pisces).
 *            According to some astrologers, you are most comfortable with your own sign and the other 
 *            two sings in your Element. For example, Aries would be most comfortable with other
 *            Aries and the two other FIRE sings. Modify your program from Programming 
 *            Project 3 to also display the name of the sings that will be compatible for the
 *            birthday. 
 * 
 * Created on March 20, 2014, 3:53 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    int month;
    int day;

    cout << "Enter your birthday, and I will tell you your horoscope sign.\n" << "\n\n"
         << "Enter the month you were born in as an integer (i.e. 1 for Jan, 2 for Feb, 3 for march): ";
    cin  >>month; 
    cout << endl;
    cout << "Enter the day you were born in: \n";
    cin >> day; 
    cout << endl;
    
    
    
    if ( month==1 ){
            if ( 20 <= day )
    
    cout << "Your horoscope sign is Aquarius!\n"
         <<"Because your are a Aquarius, you are most compatible with Gemini and Libra!\n";
    else 
            if ( 20 > day)
                    cout << "Your horoscope sing is Capricorn!\n"
                         << "Because you are a Capricorn, you are most compatible with Taurus and Virgo!\n";
    while ( day==21 || day==22 || day==19 || day==18 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
   
       
    
    
    if ( month==2){
            if ( 19 <= day)
    cout << "Your horoscope sign is Pisces!\n"
         << "Because your are a Pisces, you are most compatible with Cancer and Scorpio!\n";
        else 
            if (19 > day)
                cout << "Your horoscope sign is Aquarius!\n"
                     << "Because your are a Aquarius, you are most compatible with Gemini and Libra!\n";
    while ( day==17 || day==16 || day==20 || day==21 ){
        cout << "And just so you know, your birthday is also on a cusp";
        day = day + 5;}}
    
    
    if ( month==3){
            if (21 <= day)
               cout << "Your horoscope sign is Aries!\n"
                    << "Because you are a Aries, you are most compatible with Leo and Sagittarius!\n";
        else
            if (21> day)
               cout << "Your horoscope sign is Pisces!\n"
                    << "Because you are a Pisces, you are most compatible with Cancer and Scorpio!\n";
        
    while ( day==19 || day==20 || day==22 || day==23 ){
        cout << "And just so you know, your birthday is also on a cusp";
        day = day + 5;}}
    
    
    if ( month==4){
            if ( 20 <=day )
               cout << "Your horoscope sign is Taurus!\n"
                    << "Because you are a Taurus, you are most compatible with Virgo and Capricorn!\n";
        else
            if ( 20>day )
               cout << "Your horoscope sign is Aries!\n"
                    << "Because you are a Aries, you are most compatible with Leo and Sagittarius!\n";
       
   while ( day==18 || day==19 || day==21 || day==22 ){
        cout << "And just so you know, your birthday is also on a cusp";
        day = day + 5;}}
     
    
    
    if ( month==5){
            if ( 21 <= day)
                cout << "Your horoscope sign is Gemini!\n"
                     << "Because you are a Gemini, you are most compatible with Libra and Aquarius!\n";
       else
            if ( 21 > day )
                cout << "Your horoscope sign is Taurus!\n"
                     << "Because you are a Taurus, you are most compatible with Virgo and Capricorn!\n";
    while ( day== 19|| day==20 || day==22 || day==23 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
  
    if ( month==6){
            if ( 22 <= day )
               cout << "Your horoscope sign is Cancer!\n"
                    << "Because you are a Cancer, you are most compatible with Scorpio and Pisces!\n";
        else 
            if ( 22>day )
               cout << "Your horoscope sign is Gemini!\n"
                    << "Because you are a Gemini, you are most compatible with Libra and Aquarius!\n"; 
       
    while ( day==20 || day==21 || day==23 || day==24 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==7){
            if ( 23<= day)
               cout << "Your horoscope sign is Leo!\n"
                    << "Because you are a Leo, you are most compatible with Aries and Sagittarius!\n";
        else
            if (23>day)
               cout << "Your horoscope sign is Cancer!\n"
                    << "Because you are a Cancer, you are most compatible with Scorpio and Pisces!\n";
          
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==8){
            if (23 <= day )
               cout << "Your horoscope sign is Virgo!\n"
                    << "Because you are a Virgo, you are most compatible with Capricorn and Taurus!\n";
        else
            if ( 23>day )
               cout << "Your horoscope is Leo!\n"
                    << "Because you are a Leo, you are most compatible with Aries and Sagittarius!\n";
        
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==9){
            if ( 23 <= day )
               cout << "Your horoscope sign is Libra!\n"
                    << "Because you are a Libra, you are most compatible with Gemini and Aquarius!\n";
        else
            if ( 23>day )
               cout << "Your horoscope sign is Virgo!\n"
                    << "Because you are a Virgo, you are most compatible with Taurus and Capricorn!\n";
            
          
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    if ( month==10){
            if ( 23 <= day )
               cout << "Your horoscope sign is Scorpio!\n"
                    << "Because you are a Scorpio, you are most compatible with  Cancer and Pisces!\n";
        else 
            if (23>day)
               cout << "Your horoscope sing Libra!\n"
                    << "Because you are a Libra, you are most compatible with Gemini ande Aquarius!\n"; 
         
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    if ( month==11){
            if ( 22 <= day)
               cout << "Your horoscope sign is Sagittarius!\n"
                    << "Because you are a Sagittarius, you are most compatible with Aries and Leo!\n"; 
        else 
            if ( 22>day )
               cout << "Your horoscope sign is Scorpio!\n"
                    << "Because you are a Scorpio, you are most compatible with Pisces and Cancer!\n";
           
    while ( day==20 || day==21 || day==23 || day==24 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    if ( month==12){
            if ( 22 <= day )
               cout << "Your horoscope sign is Capricorn!\n"
                    << "Because you are a Capricorn, you are most compatible with  Taurus and Virgo!\n";
                       
        else 
            if ( 22>day )
               cout << "Your horoscope sign is Sagittarius!\n"
                    << "Because you are a Sagittarius, you are most compatible with  Aries and Leo!\n";
            
    while ( day==23 || day==24 || day==20 || day==21 ){
        cout << "And just so you know, your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    cout << endl;
    
    return 0;
}

