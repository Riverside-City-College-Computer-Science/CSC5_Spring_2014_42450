/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 29, 2014, 12:47 PM
 */

#include <iostream>

using namespace std;
//global constants
//function prototypes
//execution
int main(int argc, char** argv) {
    //variables
    unsigned int short totStar, tot, tmpWant1, tmpWant2, tmpWant3;
    //prompt
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

    return 0;
}

