/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 * Created on March 26, 2014, 4:51 PM
 * speed of sound
 */

#include <iostream>
#include <iomanip>

//global constants 
const short SPAIR=1100;
const short SPWTR=4900;
const short SPSTE=16400;
//system prototypes

//execution begins here!!
using namespace std;
int main(int argc, char** argv) {
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
 
    
            
    return 0;
}

