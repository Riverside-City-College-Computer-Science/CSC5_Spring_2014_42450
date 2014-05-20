/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 30, 2014, 3:19 PM
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Global Constants
char exit;
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int short choose;
    //Welcome statement to not be looped
    cout<<"Welcome! I liked this problem, had issues with this, etc etc"<<endl;
    //Prompt user for number of problem to execute
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
    cout<<"7. Savitch 8th Edition Chapter 3 Problem 8-Blackjack"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 3 Problem 9-Capitalism"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 3 Problem 10crud(incomplete)"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 3 Problem 14-Optimus"<<endl;
    cout<<"11. Savitch 8th Edition Chapter 3 Problem 15-Sphere"<<endl;
    cout<<"12. Savitch 8th Edition Chapter 3 Problem 16-Temperature"<<endl;
    cout<<"13. Savitch 8th Edition Chapter 3 Problem 17-Fat v2.0"<<endl;
    cout<<"14. Savitch 8th Edition Chapter 3 Problem 18-Keypad"<<endl;
    cout<<"15. Truth Table"<<endl;
    cout<<"16. Exit Program - All"<<endl;
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
            
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 1
        
        case 2:{
////////////////////////////////PROBLEM 2 Savitch Chp3Prb2//////////////////////
            cout<<"Welcome to Option 2.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
            
                
            //FINISH CODE/////////////////////////////  
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
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
    } while (choose!=16);
////////////////////////////////////////////////////////////////////////////////        
//Exit Stage Right
    return 0;
}

