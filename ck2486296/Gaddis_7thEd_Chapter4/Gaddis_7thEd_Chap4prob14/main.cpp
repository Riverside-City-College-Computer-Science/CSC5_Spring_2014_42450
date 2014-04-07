/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 * Created on March 26, 2014, 1:13 PM
 * running race
 */
//system libs
#include <iostream>
#include <string>

//global constants 

//system prototypes

//execution begins here!!
using namespace std;
int main(int argc, char** argv) {
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
    
    return 0;
}

