/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 7:20 PM
 * 
 */
//system Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!
int main(int argc, char** argv) {
//declare variables
    short months=12, years;
    float jan=0,feb=0,mar=0,apr=0,may=0,jun=0,jly=0,aug=0,sep=0,oct=0,nov=0,dec=0;
    float jan1=0,feb1=0,mar1=0,apr1=0,may1=0,jun1=0,jly1=0,aug1=0,sep1=0,oct1=0,nov1=0,dec1=0;
    float total,monttl; 
    bool loop=true;
    //ask for input
    cout<<"Enter in the number of years "<<endl; cin>>years;
    while(years<1){
        cout<<"enter in at least one year"<<endl; cin>>years;
    }
    for(int count1=1;count1<=years;count1++){
        while(loop==true){
            cout<<"Enter in the the total inches of rain for year "<<count1<<endl;
            cout<<"January "; cin>>jan;
            while(jan<0){
                cout<<"please enter in a non negative number "<<endl; cin>>jan;
            }
            cout<<"February "; cin>>feb;
            while(feb<0){
                cout<<"please enter in a non negative number "<<endl; cin>>feb;
            }
            cout<<"March "; cin>>mar;
            while(mar<0){
                cout<<"please enter in a non negative number "<<endl; cin>>mar;
            }
            cout<<"April "; cin>>apr;
            while(apr<0){
                cout<<"please enter in a non negative number "<<endl; cin>>apr;
            }
            cout<<"May "; cin>>may;
            while(may<0){
                cout<<"please enter in a non negative number "<<endl; cin>>may;
            }
            cout<<"June "; cin>>jun;
            while(jun<0){
                cout<<"please enter in a non negative number "<<endl; cin>>jun;
            }
            cout<<"July "; cin>>jly;
            while(jly<0){
                cout<<"please enter in a non negative number "<<endl; cin>>jly;
            }
            cout<<"August "; cin>>aug;
            while(aug<0){
                cout<<"please enter in a non negative number "<<endl; cin>>aug;
            }
            cout<<"September "; cin>>sep;
            while(sep<0){
                cout<<"please enter in a non negative number "<<endl; cin>>sep;
            }
            cout<<"October "; cin>>oct;
            while(oct<0){
                cout<<"please enter in a non negative number "<<endl; cin>>oct;
            }
            cout<<"November "; cin>>nov;
            while(nov<0){
                cout<<"please enter in a non negative number "<<endl; cin>>nov;
            }
            cout<<"December "; cin>>dec;
            while(dec<0){
                cout<<"please enter in a non negative number "<<endl; cin>>dec;
            }
            loop=false;
        }
        jan1+=jan, feb1+=feb,mar1+=mar,apr1+=apr,may1+=may,jun1+=jun,jly1+=jly;
        aug1+=aug,sep1+=sep,oct1+=oct,nov1+=nov,dec1+=dec;  
        if(count1<years){
            loop=true;
        }
    }
    //total calculation
    total=jan1+feb1+mar1+apr1+may1+jun1+jly1+aug1+sep1+oct1+nov1+dec1;
    //output
    cout<<"In "<<12*years<<" months there is a total of "<<total<<" inches of rain"<<endl;
    cout<<"The month of January has a average of "<<jan1/years<<" inches of rain"<<endl;
    cout<<"The month of February has a average of "<<feb1/years<<" inches of rain"<<endl;
    cout<<"The month of March has a average of "<<mar1/years<<" inches of rain"<<endl;
    cout<<"The month of April has a average of "<<apr1/years<<" inches of rain"<<endl;
    cout<<"The month of May has a average of "<<may1/years<<" inches of rain"<<endl;
    cout<<"The month of June has a average of "<<jun1/years<<" inches of rain"<<endl;
    cout<<"The month of July has a average of "<<jly1/years<<" inches of rain"<<endl;
    cout<<"The month of august has a average of "<<aug1/years<<" inches of rain"<<endl;
    cout<<"The month of September has a average of "<<sep1/years<<" inches of rain"<<endl;
    cout<<"The month of October has a average of "<<oct1/years<<" inches of rain"<<endl;
    cout<<"The month of November has a average of "<<nov1/years<<" inches of rain"<<endl;
    cout<<"The month of December1 has a average of "<<dec1/years<<" inches of rain"<<endl;
    return 0;
}

