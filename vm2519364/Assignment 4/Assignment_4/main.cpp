/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 5, 2014, 10:11 AM
 * Purpose: Assignment 4 | Savitch 8th Edition Chapter 4
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNVGALL=0.264179;//Conversion of one liter to gallon (Problem 1 & 2)


//Function Prototypes
float cnsmd(float gas_par, float dist_par);//Function for Problem 1
float infla(float lstYr_parm, float today_parm);//

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 4 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 4 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 4 Problem 4"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 4 Problem 5"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 4 Problem 6"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 4 Problem 7"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 4 Problem 12"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 4 Problem 14"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 4 Problem 15"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 4 Problem 9"<<endl;
    cin>>choose;
    //Utilize switch to implement the menu
    switch(choose){
        case 1:{
            //Start of Problem 1
             //Declared Variable
                    float mpg, gas, dist;
                    //Input data required for calculation
                    cout<<"Enter the amount of gas consumed on your trip, in liters: ";
                    cin>>gas;
                    cout<<"\n";
                    cout<<"Enter the total distance traveled by the car, in miles: ";
                    cin>>dist;
                    cout<<"\n";
                    //Convert amount of gas from liters to gallons
                    gas=(gas*CNVGALL);
                    //Function Call
                    mpg=cnsmd(gas, dist);
                    //Set decimal precision
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(2);
                    //Output Data
                    cout<<"Your car has traveled ";
                    cout<<dist;
                    cout<<" miles, using ";
                    cout<<gas;
                    cout<<" gallons of gas.\n";
                    cout<<"\n";
                    cout<<"Your car delivered ";
                    cout<<mpg;
                    cout<<" miles per gallon.\n";
            //End of Problem 1
            break;
        }
        case 2:{
            //Start of Problem 2
           //Declared Variable
                    float mpg, mpgTwo, gas, gasTwo, dist, distTwo;
                    //Input Car One Info
                    cout<<"Enter the amount of gas consumed by car 1 on your trip, in liters: ";
                    cin>>gas;
                    cout<<"\n";
                    cout<<"Enter the total distance traveled by the car 1, in miles: ";
                    cin>>dist;
                    cout<<"\n";
                    //Input Car Two Info
                    cout<<"Enter the amount of gas consumed by car 2 on your trip, in liters: ";
                    cin>>gasTwo;
                    cout<<"\n";
                    cout<<"Enter the total distance traveled by the car 2, in miles: ";
                    cin>>distTwo;
                    cout<<"\n";
                    //Convert amount of gas from liters to gallons
                    //gas=(gas*CNVGALL);
                    //gasTwo=(gasTwo*CNVGALL);
                    //Function Call
                    mpg=cnsmd(gas, dist);
                    mpgTwo=cnsmd(gasTwo, distTwo);
                    //Set decimal precision
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(2);
                    //Output Car One Info
                    cout<<"Car 1 has traveled ";
                    cout<<dist;
                    cout<<" miles, using ";
                    cout<<(gas*CNVGALL);
                    cout<<" gallons of gas.\n";
                    cout<<"\n";
                    cout<<"Car 1 delivered ";
                    cout<<mpg;
                    cout<<" miles per gallon.\n";
                    cout<<"\n";
                    //Output Car Two Info
                    cout<<"Car 2 has traveled ";
                    cout<<distTwo;
                    cout<<" miles, using ";
                    cout<<(gasTwo*CNVGALL);
                    cout<<" gallons of gas.\n";
                    cout<<"\n";
                    cout<<"Car 2 delivered ";
                    cout<<mpgTwo;
                    cout<<" miles per gallon.\n";
                    cout<<"\n";
                    //Determine what car is more fuel efficient
                    if (mpg<mpgTwo)
                        cout<<"Car 2 has the best fuel efficiency.\n";
                    else
                        cout<<"Car 1 has the best fuel efficiency.\n";
          //End of Problem 2
           break;
        }
        case 3:{
            //Start of Problem 4
            cout<<"Place solution to problem 23 here!"<<endl;
            //End of Problem 4
            break;
        }
        case 4:{
            //Start of Problem 5
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 5
            break;
        }
        case 5:{
            //Start of Problem 6
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 6
            break;
        }
        case 6:{
            //Start of Problem 7
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 7
            break;
        }
        case 7:{
            //Start of Problem 12
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 12
            break;
        }
        case 8:{
            //Start of Problem 14
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 14
            break;
        }
        case 9:{
            //Start of Problem 15
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 15
            break;
        }
        case 10:{
            //Start of Problem 9
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 9
            break;
        }
        default:{
            cout<<"Not an option!"<<endl;
        }
    }



    //Exit Stage Right
    return 0;
}

//Solution to Problem 1 & 2
float cnsmd(float gas_par, float dist_par) //Function Heading
{
    return (dist_par/gas_par);
}