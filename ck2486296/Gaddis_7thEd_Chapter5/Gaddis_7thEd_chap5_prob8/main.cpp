/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 6:22 PM
 * 
 */
//system Libraries 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!

int main(int argc, char** argv) {
     //Gaddis 7th edition Chapter 4 problem 9
    //random num seed 
    srand (time(NULL));
    //declare variables  
    int choice;
    bool exitMnu=false;
    float ans;
    do{
        short num1 = rand()%999+1;
        short num2 = rand()%999+1;
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction "<<endl;
        cout<<"3. Multiplication "<<endl;
        cout<<"4. Division"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{
                //calculation
                float total=num1+num2;
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
            case 2:{
                //calculation
                float total=num1-num2;
                //output
                cout<<num1<<" - "<<num2<<" = ";
                cin>>ans;
                if(ans==total){
                    cout<<"congrats you got the correct answer"<<endl;         
                }
                else
                    cout<<"sorry the correct answer is "<<total<<endl;
                break;
            }
            case 3:{
                //calculation
                float total=num1*num2;
                //output
                cout<<num1<<" * "<<num2<<" = ";
                cin>>ans;
                if(ans==total){
                    cout<<"congrats you got the correct answer"<<endl;         
                }
                else
                    cout<<"sorry the correct answer is "<<total<<endl;
                break;
            }
            case 4:{
                //calculation
                //cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Calculate to two decimal places"<<endl;
                float total=static_cast<float>(num1)/static_cast<float>(num2);
                //conversion to usable user answer check
                float ttlcnv=total*100;
                short ttwod=ttlcnv;
                ttlcnv=static_cast<float>(ttwod)/100;
                total=ttlcnv;
                //output
                cout<<num1<<" / "<<num2<<" = ";
                cin>>ans;
                if(ans==total){
                    cout<<"congrats you got the correct answer"<<endl;         
                }
                else
                    cout<<"sorry the correct answer is "<<total<<endl;
                break;
            }
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit 
    return 0;
}

