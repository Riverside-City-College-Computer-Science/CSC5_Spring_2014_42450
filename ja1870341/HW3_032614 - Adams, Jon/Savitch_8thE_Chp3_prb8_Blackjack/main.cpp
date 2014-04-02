/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 
 *
 * Created on March 24, 2014, 7:54 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constants
int sum;
//Function prototypes
//Execution Starts here
int main(int argc, char** argv) {
    //NOTE: Problem was created prior to learning loops. Loop added after
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    //Pull first card
    int card=rand()%52, numV, sum=0;
    char suite, faceV, choice3, choice4;
    //Suites
    if(card<13)suite='S';
    else if(card<26)suite='D';
    else if(card<39)suite='C';
    else suite='H';
    
    switch(card%13+1) {
        case 1:faceV='A'; numV=11;break;
        case 2:faceV='2'; numV=2;break;
        case 3:faceV='3'; numV=3;break;
        case 4:faceV='4'; numV=4;break;
        case 5:faceV='5'; numV=5;break;
        case 6:faceV='6'; numV=6;break;
        case 7:faceV='7'; numV=7;break;
        case 8:faceV='8'; numV=8;break;
        case 9:faceV='9'; numV=9;break;
        case 10:faceV='T'; numV=10;break;
        case 11:faceV='J'; numV=10;break;
        case 12:faceV='Q'; numV=10;break;
        case 13:faceV='K'; numV=10;break;
    }
    sum=sum+numV;
    //Print the card pulled
    cout<<"The sum of your cards = "<<sum<<endl;
    cout<<"The first card you pulled was ";
    cout<<faceV<<suite<<endl;
    
    //Pull second card
    card=rand()%52;
    if(card<13)suite='S';
    else if(card<26)suite='D';
    else if(card<39)suite='C';
    else suite='H';
        switch(card%13+1) {
        case 1:faceV='A'; numV=11;break;
        case 2:faceV='2'; numV=2;break;
        case 3:faceV='3'; numV=3;break;
        case 4:faceV='4'; numV=4;break;
        case 5:faceV='5'; numV=5;break;
        case 6:faceV='6'; numV=6;break;
        case 7:faceV='7'; numV=7;break;
        case 8:faceV='8'; numV=8;break;
        case 9:faceV='9'; numV=9;break;
        case 10:faceV='T'; numV=10;break;
        case 11:faceV='J'; numV=10;break;
        case 12:faceV='Q'; numV=10;break;
        case 13:faceV='K'; numV=10;break;
    }
    sum=sum+numV;
    //Print the card pulled
    cout<<"The sum of your cards = "<<sum<<endl;
    cout<<"The second card you pulled was ";
    cout<<faceV<<suite<<endl;
    
    cout<<"Would you like to play another card? Y for yes, N for no"<<endl;
    cin>>choice3;
    if (choice3=='N'||choice3=='n') {
            cout<<"Your final score is "<<sum<<"!"<<endl;
            cout<<"Thanks for playing!"<<endl;
    }
    else if (choice3=='Y'||choice3=='y') {       
        card=rand()%52;
        if(card<13)suite='S';
        else if(card<26)suite='D';
        else if(card<39)suite='C';
        else suite='H';
            switch(card%13+1) {
            case 1:faceV='A'; numV=11;break;
            case 2:faceV='2'; numV=2;break;
            case 3:faceV='3'; numV=3;break;
            case 4:faceV='4'; numV=4;break;
            case 5:faceV='5'; numV=5;break;
            case 6:faceV='6'; numV=6;break;
            case 7:faceV='7'; numV=7;break;
            case 8:faceV='8'; numV=8;break;
            case 9:faceV='9'; numV=9;break;
            case 10:faceV='T'; numV=10;break;
            case 11:faceV='J'; numV=10;break;
            case 12:faceV='Q'; numV=10;break;
            case 13:faceV='K'; numV=10;break;
    }
    sum=sum+numV;
    //Print the card pulled
    cout<<"The sum of your cards = "<<sum<<endl;
    cout<<"The third card you pulled was ";
    cout<<faceV<<suite<<endl;      
        if (sum>21) {
                cout<<"You busted!! Thanks for making the casino rich!!!";
                    }
// Do I need to embed Card 4 code into line 82's statement??
        else if (sum<21) {
                cout<<"Would you like to play another card? Y for yes, N for no"<<endl;
                cin>>choice4;
                        if (choice4=='N'||choice4=='n') {
                        cout<<"Your final score is "<<sum<<"!"<<endl;
                        cout<<"Thanks for playing!"<<endl;
                                                        }
                        else if (choice4=='Y'||choice4=='y') {       
                        card=rand()%52;
                        if(card<13)suite='S';
                        else if(card<26)suite='D';
                        else if(card<39)suite='C';
                        else suite='H';
                        switch(card%13+1) {
                        case 1:faceV='A'; numV=11;break;
                        case 2:faceV='2'; numV=2;break;
                        case 3:faceV='3'; numV=3;break;
                        case 4:faceV='4'; numV=4;break;
                        case 5:faceV='5'; numV=5;break;
                        case 6:faceV='6'; numV=6;break;
                        case 7:faceV='7'; numV=7;break;
                        case 8:faceV='8'; numV=8;break;
                        case 9:faceV='9'; numV=9;break;
                        case 10:faceV='T'; numV=10;break;
                        case 11:faceV='J'; numV=10;break;
                        case 12:faceV='Q'; numV=10;break;
                        case 13:faceV='K'; numV=10;break;
                                         }
                                                             }
                    sum=sum+numV;
                        //Print the card pulled
                        cout<<"The sum of your cards = "<<sum<<endl;
                        cout<<"The fourth card you pulled was ";
                        cout<<faceV<<suite<<endl; 
               if (sum>21) {
                cout<<"You busted!! Thanks for making the casino rich!!!"<<endl;
               }
               else {
                cout<<"Sorry, casino is closing and you should have!!"<<endl;
                cout<<"lost by now! Good-bye!"<<endl;
               }
                    
       }
            
    }
    //Exit Stage Right
    return 0;
}

