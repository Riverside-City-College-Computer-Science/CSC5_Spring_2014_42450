/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 11, 2014, 5:07 PM
 * 
 */
//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <fstream>//File input/output
#include <ctime>//Time for random and program
#include <iomanip>//Formatting
#include <cmath>//Math functions
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis_7thEd_Chap5_Prob1"<<endl;
        cout<<"2. Gaddis_7thEd_Chap5_Prob2"<<endl;
        cout<<"3. Gaddis_7thEd_Chap5_Prob3"<<endl;
        cout<<"4. Gaddis_7thEd_Chap5_Prob5"<<endl;
        cout<<"5. Gaddis_7thEd_Chap5_Prob6"<<endl;
        cout<<"6. Gaddis_7thEd_Chap5_Prob7"<<endl;
        cout<<"7. Gaddis_7thEd_Chap5_Prob8"<<endl;
        cout<<"8. Gaddis_7thEd_Chap5_Prob10"<<endl;
        cout<<"9. Gaddis_7thEd_Chap5_Prob12"<<endl;
        cout<<"10. Gaddis_7thEd_Chap5_Prob23"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem4();break;
            case 5:problem5();break;
            case 6:problem6();break;
            case 7:problem7();break;
            case 8:problem8();break;
            case 9:problem9();break;
            case 10:problem10();break;
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit the program
    return 0;
}

//Solution to Problem 1 here
void problem1(){
    //Declare Variables
    int usrint,total=0;
    //ask for input
    cout<<"Enter in a positive integer value and i will sum all the integers from 1 to that number"<<endl;
    cin>>usrint;
    //input validation
    while(usrint<=0){
        cout<<"please enter in a positive integer"<<endl;
        cin>>usrint;
    }
    //loop till count = usrint
    for(int count=1;count<=usrint;count++){
        total+=count;
    }
    cout<<"the total = "<<total<<endl;   
      //exit stage right
}

//Solution to Problem 2 here
void problem2(){
    //Declare variables 
    char ascchr;
    for(int count=0;count<=127;count++){
       ascchr=(char)count;
       cout<<ascchr<<"  ";
       //formatting
       if(count==16||count==32||count==48||count==64||count==80||count==96||count==112)
           cout<<endl;
    }
    //exit stage right
}

//Solution to Problem 3 here
void problem3(){
    //Declare Variables
    float ocnlvl=1.5, total=1.5;
    unsigned int year=2;
    //output the first year
    cout<<"In 1 Year the ocean laval will rise by "<<ocnlvl<<endl;
    while(year<=25){
        total+=ocnlvl;
        cout<<"in "<<year<<" Year the ocean level will increase by "<<total<<endl;
        year++;  
    }
//exit stage right!
}
void problem4(){
    //declare variables
    float memship=2500,meminc=4e-2;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"the current cost of membership is $"<<memship<<endl;
    for(int year=1;year<=6;year++){
        memship+=memship*meminc;
        cout<<"In "<<year<<" year the membership cost will be $"<<memship<<endl;
    }
    //exit stage right
}
void problem5(){
    //declare variables
    float miles,hours,distance;
    //ask for input
    cout<<"What is the speed of the vehicle in mph? "<<endl; cin>>miles;
   //input validation for speed
    while(miles<=0){
        cout<<"Sorry please enter in a non negative number that doesnt equal 0 "<<endl;
        cin>>miles;
    }
    cout<<"How many hours has it traveled? "<<endl; cin>>hours;
    //input validation for speed
    while(hours<1){
        cout<<"Sorry please enter one or more hours "<<endl;
        cin>>hours;
    }
    cout<<"Hour      Distance Traveled"<<endl;
    cout<<"---------------------------------"<<endl;
    for(int count=1;count<=hours;count++){
        distance=miles*count;
        cout<<count<<setw(18)<<distance<<endl;
    }
}
void problem6(){
    //declare variables
    float penny=.01; 
    int days;
    //ask for input
    cout<<"Enter in the amount of days"<<endl; cin>>days;
    //input validation
    while(days<1){
        cout<<"please enter in a number equal to or greater than one "<<endl; cin>>days;
    }
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"in 1 day you will make $"<<penny<<endl;
    for(int count=2;count<=days;count++){
        penny*=2;
        cout<<"in "<<count<<" days you will make $"<<penny<<endl;
    }
}
void problem7(){
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
}
void problem8(){
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
}
void problem9(){
    //declare variables
    float cel,fahr;
    //output design
    cout<<" celsius     fehrenheit"<<endl;
    cout<<"------------------------"<<endl;
    //loop
    for(cel=0;cel<=20;cel++){
        fahr=(9/5)*cel+32;
        if(cel<10){
            cout<<" "<<cel<<setw(16)<<fahr<<endl;
        }
        else
            cout<<" "<<cel<<setw(15)<<fahr<<endl;
    } 
}
void problem10(){
    //loop pattern A
    cout<<"pattern A"<<endl;
    cout<<endl;
    for(int a=1;a<=10;a++){
        for(int a1=1;a1<=a;a1++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"pattern B"<<endl;
    cout<<endl;
    for(int b=1;b<=10;b++){
        for(int b1=10;b1>=b;b1--){
            cout<<"*";
        }
        cout<<endl;
    }
}