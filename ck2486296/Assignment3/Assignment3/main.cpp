/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 26, 2014, 6:18 PM
 * Assignment 1
 */
//system libs
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//global constants
float const PENNIE=.01;
float const NICKEL=.05;
float const DIME=.15;
float const QUARTER=.25;
float const DOLLAR=1;
const short SPAIR=1100;
const short SPWTR=4900;
const short SPSTE=16400;
//system prototypes

//execution begins here
int main(int argc, char** argv) {
//declare variables   
    short choose;
    cout<<"plese enter the number to the problem you want to view"<<endl;
    cout<<" 1. Gaddis 7th edition Chapter 4 problem 1"<<endl;
    cout<<" 2. Gaddis 7th edition Chapter 4 problem 3"<<endl;
    cout<<" 3. Gaddis 7th edition Chapter 4 problem 6"<<endl;
    cout<<" 4. Gaddis 7th edition Chapter 4 problem 8"<<endl;
    cout<<" 5. Gaddis 7th edition Chapter 4 problem 9"<<endl;
    cout<<" 6. Gaddis 7th edition Chapter 4 problem 10"<<endl;
    cout<<" 7. Gaddis 7th edition Chapter 4 problem 11"<<endl;
    cout<<" 8. Gaddis 7th edition Chapter 4 problem 14"<<endl;
    cout<<" 9. Gaddis 7th edition Chapter 4 problem 18"<<endl;
    cout<<"10. Truth Tables"<<endl;
    cin>>choose;
    switch(choose){
        case 1:{
            //Gaddis 7th edition Chapter 4 problem 1       
            //declare variables
float num1, num2;
//ask for user input
    cout<<"plese enter in two numbers and tell you what is the bigger and smaller number "<<endl;
    cin>>num1>>num2;
    //else if logic
    if (num1>num2){
        cout<<num1<<" is greater then "<<num2<<endl;
    }
    else if (num1<num2){
        cout<<num2<<" is greater then "<<num1<<endl;
    }
    else if (num1==num2){
        cout<<num1<<" is equal to "<<num2<<endl;
    }
    //exit stage right
            break;
               }
        case 2:{
            //Gaddis 7th edition Chapter 4 problem 3
            //declare variables
float l1, w1, area1, l2, w2, area2;
//ask for user input
    cout<<"enter in the length and width of rectangle one"<<endl;
    cout<<"length 1: ";cin>>l1;
    cout<<"width 1: ";cin>>w1;
    cout<<"enter in the length and width of rectangle two"<<endl;
    cout<<"length 2: ";cin>>l2;
    cout<<"width 2: ";cin>>w2;
    //calculations
    area1=l1*w1;
    area2=l2*w2;
    //else if logic
    cout<<"rectangle one ="<<area1<<endl;
    cout<<"rectangle two ="<<area2<<endl;
    if (area1>area2){
        cout<<"Rectangle 1 has the greater area then rectangle 2"<<endl;
    }
    else if (area1<area2){
        cout<<"Rectangle 2 has the greater area then rectangle 1"<<endl;
    }
    else if (area1==area2){
        cout<<"Rectangle 1's area is equal to rectangle 2's area"<<endl;
    }
    //exit stage right
            break;
        }
        case 3:{
           //Gaddis 7th edition Chapter 4 problem 6
            float mass;
    //user input
    cout<<"what is the mass of an object in kilograms?"<<endl;
    cin>>mass;
    float weight=mass*9.8;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"the weight is "<<weight<<" Newtons"<<endl;
    if(weight >1000){
        cout<<"That object is too heavy"<<endl;
    }
    else if(weight <10){
        cout<<"That object is too light"<<endl;
    }
   //exit stage right
            break;
        }
        case 4:{
            //Gaddis 7th edition Chapter 4 problem 8
            //declare variables
    short numpen, numnik, numdime, numquar;
    cout<<"enter in the amount of pennies, nickels, dimes, and quarters and Ill see if you win the game"<<endl;
    cout<<"Pennies :"; cin>>numpen;
    cout<<"Nickels :"; cin>>numnik;
    cout<<"Dimes :"; cin>>numdime;
    cout<<"Quarters :"; cin>>numquar;
    //calculations
    float total=PENNIE*numpen+NICKEL*numnik+DIME*numdime+QUARTER*numquar;
    //if else logics
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    if(total==DOLLAR){
        cout<<"you win the dollar game"<<endl;
    }
    else if(total>DOLLAR){
        cout<<"You lose the dollar game"<<endl;
        cout<<"$"<<total<<" is greater than $1.00"<<endl;
                
    }
    else if(total<DOLLAR){
        cout<<"You lose the dollar game"<<endl;
        cout<<total<<"¢"<<" is less than $1.00"<<endl;
                
    }
            break;
        }
        case 5:{
     //Gaddis 7th edition Chapter 4 problem 9
    //random num seed 
    srand (time(NULL));
    //declare variables  
    short num1 = rand()%999+1;
    short num2 = rand()%999+1;
    short ans;
    //calculation
    short total=num1+num2;
    //output
    cout<<num1<<" + "<<num2<<" = ";
    cin>>ans;
    if(ans==total){
        cout<<"congrats you got the correct answer"<<endl;         
    }
    else
        cout<<"sorry the correct answer is "<<total<<endl;
            break;
        }
        case 6:{
            //Gaddis 7th edition Chapter 4 problem 10
      //declare variables  
     float DIS1=.20;
     float DIS2=.30;
     float DIS3=.40;
     float DIS4=.50;
    int quant;
    //ask for input 
    cout<<"enter the the amount of units that will be sold "<<endl;
    cin>>quant;
    //Discount calculations 
    float dis20=-(99*DIS1)+99;
    float dis30=-(99*DIS2)+99;
    float dis40=-(99*DIS3)+99;
    float dis50=99*DIS4;
    //Input validation
    while (quant<=0){
        cout<<"please enter in a value greater than 0"<<endl;
        cin>>quant;    
    }
    //if else logics
    cout<<fixed<<setprecision(2)<<showpoint;
     if(quant>=10&&quant<=19){
        float total=quant*dis20;
        cout<<"the total is $"<<total;
    }   
    else if(quant>=20&&quant<=49){
        float total=quant*dis30;
        cout<<"the total is $"<<total;
    }   
    else if(quant>=50&&quant<=99){
        float total=quant*dis40;
        cout<<"the total is $"<<total;
    }   
    else if(quant>=100){
        float total=quant*dis50;
        cout<<"the total is $"<<total;
    }  
    else{
        float total=quant*99;
        cout<<"the total is $"<<total;
    }
            break;
        }
        case 7:{
            //Gaddis 7th edition Chapter 4 problem 11
            //declare variables  
    short books;
    cout<<"How many books did you purchase this month?"<<endl;
    cin>>books;
    //if else logic
    while(books<0){
        cout<<"you cannot purchase an negative amount"; 
        cout<<" of books, please enter a non negative number or a zero "<<endl;
        cin>>books;
    }
    
    if(books==0){
        cout<<"you have purchased "<<books<<" books, so you have earned 0 points"<<endl;
    }
    else if(books==1){
        cout<< "you have purchased "<<books<<" book, so you have earned 5 points"<<endl;
    }
    else if(books==2){
        cout<< "you have purchased "<<books<<" books, so you have earned 15 points"<<endl;
    }
    else if(books==3){
        cout<< "you have purchased "<<books<<" books, so you have earned 30 points"<<endl;
    }
    else{
        cout<< "you have purchased "<<books<<" books, so you have earned 60 points"<<endl;
    }
           break;
        }
        case 8:{
          //Gaddis 7th edition Chapter 4 problem 14
          //declare variables  
    string name1, name2, name3;
    float time1, time2, time3;
    cout<<"enter in the first names of the three racers and their time"<<endl;
    cout<<"Name1 : ";cin>>name1;
    cout<<"Time1 : ";cin>>time1;
    cout<<"Name2 : ";cin>>name2;
    cout<<"Time2 : ";cin>>time2;
    cout<<"Name3 : ";cin>>name3;
    cout<<"Time3 : ";cin>>time3;
    //input validation
    if(time1<0){
        cout<<"Time one cannot be negative, please reenter it "<<endl;
        cin>>time1;
    }
    if(time2<0){
        cout<<"Time two cannot be negative, please reenter it "<<endl;
        cin>>time2;
    }
    if(time3<0){
        cout<<"Time three cannot be negative, please reenter it "<<endl;
        cin>>time3;
    }
    
    if(time1>time2&&time1>time3){
        cout<<"First place goes to "<<name1<<endl;
        if(time2>time3){
            cout<<"Second place goes to "<<name2<<endl;
            cout<<"Third place goes to "<<name3<<endl;
        }
        else{  
            cout<<"Second place goes to "<<name3<<endl;
            cout<<"Third place goes to "<<name2<<endl;
        }
    }
    if(time2>time1&&time2>time3){
        cout<<"First place goes to "<<name2<<endl;
        if(time1>time3){
            cout<<"Second place goes to "<<name1<<endl;
            cout<<"Third place goes to "<<name3<<endl;
        }
        else{  
            cout<<"Second place goes to "<<name3<<endl;
            cout<<"Third place goes to "<<name1<<endl;
        }
    }
    if(time3>time2&&time3>time1){
        cout<<"First place goes to "<<name3<<endl;
        if(time1>time2){
            cout<<"Second place goes to "<<name1<<endl;
            cout<<"Third place goes to "<<name2<<endl;
        }
        else{  
            cout<<"Second place goes to "<<name2<<endl;
            cout<<"Third place goes to "<<name1<<endl;
        }
    }
            break;
        }
        case 9:{
          //Gaddis 7th edition Chapter 4 problem 18
           //declare variables  
    short menu;
    float feet;
    //menu
    cout<<"please enter in the number from one of the following the choices"<<endl;
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cin>>menu;
    //failsafe
    while(menu<1||menu>3){
         cout<<"please enter in the number from one of the following the choices"<<endl;
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cin>>menu;
    }
    //user input
   cout<<"Enter the distance a sound wave will travel in the selected medium (in feet). "<<endl;
        cin>>feet;
    //Secondary failsafe    
   while(feet<0){
       cout<<"The distance cannot be less than 0, please try again. "<<endl;
       cin>>feet;        
   }
    //formatting
    cout<<fixed<<setprecision(2)<<endl;  
    // if/else with calculations
    if(menu==1){  //air
    //calculations
    float total=feet/SPAIR; 
    cout<<"It will take "<<total<<" seconds for sound to travel "<<feet<<" feet through air."<<endl;
    }
    else if(menu==2){
    float total=feet/SPWTR; 
    cout<<"It will take "<<total<<" seconds for sound to travel "<<feet<<" feet through water."<<endl;
    }
    else{
    float total=feet/SPSTE; 
    cout<<"It will take "<<total<<" seconds for sound to travel "<<feet<<" feet through steel."<<endl;
    }  
            break;
        }
        case 10:{
          //Truth Tables
          //declare variables
   bool x=true;
   bool y=true;
   //output the headings
   cout<<"X Y !X !Y X||Y X&&Y ";
   cout<<"X^Y X^Y^X X^Y^Y !(X&&Y) ";
   cout<<"!X||Y !(X||Y) !X&&!Y "<<endl;
   //output first row of the truth table
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;
   //output second row
   y=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;
   //output third row
   y=true;
   x=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;
   //output fourth row
   y=false;
   x=false;
   cout<<(x?'T':'F')<<" ";
   cout<<(x?'T':'F')<<"  ";
   cout<<(!x?'T':'F')<<"  ";
   cout<<(!y?'T':'F')<<"  ";
   cout<<(x||y?'T':'F')<<"    ";
   cout<<(x&&y?'T':'F')<<"    ";
   cout<<(x^y?'T':'F')<<"    ";
   cout<<(x^y^x?'T':'F')<<"     ";
   cout<<(x^y^y?'T':'F')<<"       ";
   cout<<(!(x&&y)?'T':'F')<<"      ";
   cout<<(!x||y?'T':'F')<<"      ";
   cout<<(!(x||y)?'T':'F')<<"      ";
   cout<<(!x&&!y?'T':'F')<<"      ";
   cout<<endl;        
   
            break;
        }
    }
    return 0;
}

