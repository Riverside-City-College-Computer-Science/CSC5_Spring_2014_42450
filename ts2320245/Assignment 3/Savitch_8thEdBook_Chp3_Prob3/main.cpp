/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 3: Write and astrology program. the user types in a birthday, and the program responds
 *          with the sign and horoscope for that birthday. The month may be entered as a 
 *          number from 1 to 12. Then enhance your program so that if the birthday is only
 *          one or two days away from an adjacent sign, the program announces that the birthday 
 *          is on a "cusp" and also outputs the horoscope for that nearest adjacent sign. this
 *          program will have a long multiway branch. Make up a horoscope for each sign. 
 *          your program should include a loop that lets the user repeat this calculation until 
 *          the user says she or he is done. 
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
    
    cout << "Your horoscope sign is Aquarius!\n";
    else 
            if ( 20 > day)
                    cout << "Your horoscope sing is Capricorn!\n";
    
    while ( day==21 || day==22 || day==19 || day==18 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
   
       
    
    
    if ( month==2){
            if ( 19 <= day)
    cout << "Your horoscope sign is Pisces!\n"; 
        else 
            if (19 > day)
                cout << "Your horoscope sign is Aquarius!\n";
   
    while ( day==17 || day==16 || day==20 || day==21 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==3){
            if (21 <= day)
               cout << "Your horoscope sign is Aries!\n";
        else
            if (21> day)
               cout << "Your horoscope sign is Pisces!\n";
        
    while ( day==19 || day==20 || day==22 || day==23 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==4){
            if ( 20 <=day )
               cout << "Your horoscope sign is Taurus!\n";
        else
            if ( 20>day )
               cout << "Your horoscope sign is Aries!\n";
       
   while ( day==18 || day==19 || day==21 || day==22 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
     
    
    
    if ( month==5){
            if ( 21 <= day)
                cout << "Your horoscope sign is Gemini!\n";
       else
            if ( 21 > day )
                cout << "Your horoscope sign is Taurus!\n";
      
    while ( day== 19|| day==20 || day==22 || day==23 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
  
    if ( month==6){
            if ( 22 <= day )
               cout << "Your horoscope sign is Cancer!\n";
        else 
            if ( 22>day )
               cout << "Your horoscope sign is Gemini!\n";
       
    while ( day==20 || day==21 || day==23 || day==24 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==7){
            if ( 23<= day)
               cout << "Your horoscope sign is Leo!\n";
        else
            if (23>day)
               cout << "Your horoscope sign is Cancer!\n";
          
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==8){
            if (23 <= day )
               cout << "Your horoscope sign is Virgo!\n";
        else
            if ( 23>day )
               cout << "Your horoscope is Leo!\n";
        
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    
    if ( month==9){
            if ( 23 <= day )
               cout << "Your horoscope sign is Libra!\n";
        else
            if ( 23>day )
               cout << "Your horoscope sign is Virgo!\n";
          
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    if ( month==10){
            if ( 23 <= day )
               cout << "Your horoscope sign is Scorpio!\n";
        else 
            if (23>day)
               cout << "Your horoscope sing Libra!\n";
         
    while ( day==21 || day==22 || day==24 || day==25 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    if ( month==11){
            if ( 22 <= day)
               cout << "Your horoscope sign is Sagittarius!\n";
        else 
            if ( 22>day )
               cout << "Your horoscope sign is Scorpio!\n";
           
    while ( day==20 || day==21 || day==23 || day==24 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    if ( month==12){
            if ( 22 <= day )
               cout << "Your horoscope sign is Capricorn!\n";
        else 
            if ( 22>day )
               cout << "Your horoscope sign is Sagittarius!\n";   
    
    while ( day==23 || day==24 || day==20 || day==21 ){
        cout << "Your birthday is also on a cusp!!!";
        day = day + 5;}}
    
    cout << endl;
    
    return 0;
}

