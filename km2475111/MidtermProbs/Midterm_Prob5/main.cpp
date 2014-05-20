/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 24, 2014, 10:17 AM
 * Purpose: calculates monthly bill
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    bool cntLoop=true;
    short choice;
    float pack1=29.95,pack2=34.95,pack3=42.95,
          pack1Hr=11.0,pack2Hr=22.0,pack3Hr=44.0,
          hr,exHr1,exHr2,exHr3,exChrge=0.0,mCharge=0.0;
   
    //ask user for package type and hours
    cout<<"///////////////////////////////////////////////////////////"
        <<endl
        <<"Please choose your preferred subscription package:"<<endl
        <<"1) $29.95 per month, 11 hours access. Additional hours"<<endl
        <<"   are $2.25 up to 22 hours then $4.95 for all additional"<<endl
        <<"   hours."<<endl
        <<"2) $34.95 per month, 22 hours access. Additional hours"<<endl
        <<"   are $1.25 up to 33 hours then $2.25 for each"<<endl
        <<"   hour above this limit."<<endl
        <<"3) $42.95 per month unlimited access."<<endl
        <<endl<<"Press any other key to exit the menu."<<endl
        <<"///////////////////////////////////////////////////////////"
        <<endl;
    cin>>choice;
    //use menu to determine charges
    switch (choice){
        case 1:{
            //calculate monthly charge with package 1 and hours
            cout<<"How many hours would you like? ";
            cin>>hr;
            cout<<endl;
            //check if hr exceeds 11 hrs w/ pack1
            if(hr>pack1Hr&&hr<pack2Hr){
                exHr1=hr-pack1Hr;
                exChrge=exHr1*2.25f;
                mCharge=pack1+exChrge;
                //display monthly bill
                cout<<"Your monthly bill with Package 1 and "
                    <<hr<<" hour(s) is: "<<endl
                    <<"$"<<pack1<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            }
            else if(hr>=pack2Hr){
                exHr1=hr-pack2Hr;//grabs hours over 22 - apply $4.95 charge
                exHr2=hr-pack1Hr;//grabs remaining over 11 - apply 2.25 charge
                exChrge=(exHr1*4.95f)+(exHr2*2.25f);//add extra charges over 11
                mCharge=pack1+exChrge;//monthly total with extra charges
                //display monthly bill
                cout<<"Your monthly bill with Package 1 and "
                    <<hr<<" hour(s) is: "<<endl
                    <<"$"<<pack1<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            }
            else{
                mCharge=pack1;//if hours under 11 - default monthly charge
                cout<<"Your monthly bill with Package 1 and "
                    <<hr<<" hour(s) is: "<<endl
                    <<"$"<<pack1<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            }
            break;
        }
        case 2:{
            //calculate monthly charge with package 2 and hours
            cout<<"How many hours would you like? ";
            cin>>hr;
            cout<<endl;
            //check if hr exceeds 22 hrs w/ pack2
            if(hr>pack2Hr&&hr<pack3Hr){
                exHr1=hr-pack2Hr;
                exChrge=exHr1*1.25f;
                mCharge=pack2+exChrge;
                //display monthly bill
                cout<<"Your monthly bill with Package 2 and "
                    <<hr<<" hour(s) is: "<<endl
                    <<"$"<<pack2<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            }
            else if(hr>=pack3Hr){
                exHr1=hr-pack3Hr;//grabs hours over 33 - apply $2.25 charge
                exHr2=hr-pack2Hr;//grabs remaining over 22 - apply 1.25 charge
                exChrge=(exHr1*2.25f)+(exHr2*1.25f);//add extra charges over 11
                mCharge=pack2+exChrge;//monthly total with extra charges
                //display monthly bill
                cout<<"Your monthly bill with Package 2 and "
                    <<hr<<" hour(s) is: "<<endl
                    <<"$"<<pack2<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            }
            else{
                mCharge=pack2;//if hours under 11 - default monthly charge
                cout<<"Your monthly bill with Package 2 and "
                    <<hr<<" hour(s) is: "<<endl
                    <<"$"<<pack2<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            }
            break;
        }
        case 3:{
            //calculate monthly charge with package 3 - unlimited
            mCharge=pack3;//if hours under 11 - default monthly charge
                cout<<"Your monthly bill with Package 3 and"
                    <<" unlimited hours is: "<<endl
                    <<"$"<<pack3<<" monthly + $"<<exChrge<<" extra = $"
                    <<setprecision(2)<<fixed<<showpoint
                    <<mCharge<<" per month."<<endl;
            break;
        }
        default:{
            cout<<endl<<"Good-bye!"<<endl;
            //exit menu
        }
    }
    //Exit Stage Right!!
    return 0;
}

