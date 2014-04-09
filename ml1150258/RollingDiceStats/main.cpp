/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 9, 2014, 7:54 AM
 * Rolling Dice and Taking Stats
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <ctime>//Time for random and program
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));\
    //Declare variables
    unsigned char sum,die1,die2;
    unsigned int cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,
       cnt7=0,cnt8=0,cnt9=0,cnt10=0,cnt11=0,cnt12=0;
    //Loop the dice throw
    unsigned int loop=36000;
    for(int toss=1;toss<loop;toss++){
        //Determine the sum
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        switch(sum){
            case 2:cnt2++;break;
            case 3:cnt3++;break;
            case 4:cnt4++;break;
            case 5:cnt5++;break;
            case 6:cnt6++;break;
            case 7:cnt7++;break;
            case 8:cnt8++;break;
            case 9:cnt9++;break;
            case 10:cnt10++;break;
            case 11:cnt11++;break;
            case 12:cnt12++;break;
            default:cout<<"Better never get here!!!";
        }
    }
    //Output the results
    cout<<"2 was thrown "<<cnt2<<" times"<<endl;
    cout<<"3 was thrown "<<cnt3<<" times"<<endl;
    cout<<"4 was thrown "<<cnt4<<" times"<<endl;
    cout<<"5 was thrown "<<cnt5<<" times"<<endl;
    cout<<"6 was thrown "<<cnt6<<" times"<<endl;
    cout<<"7 was thrown "<<cnt7<<" times"<<endl;
    cout<<"8 was thrown "<<cnt8<<" times"<<endl;
    cout<<"9 was thrown "<<cnt9<<" times"<<endl;
    cout<<"10 was thrown "<<cnt10<<" times"<<endl;
    cout<<"11 was thrown "<<cnt11<<" times"<<endl;
    cout<<"12 was thrown "<<cnt12<<" times"<<endl;
    //Exit stage right!!
    return 0;
}