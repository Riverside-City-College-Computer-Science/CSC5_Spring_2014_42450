/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11th, 2014 @ 09:30 AM
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
    cout<<"1. Savitch 8th Edition Chapter 4 Problem 1-MPG"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 4 Problem 2-MPG2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 4 Problem 4-Inflation"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 4 Problem 5-Inflation2"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 4 Problem 9-Size"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 4 Problem 10-Size2"<<endl;
    cout<<"7. PrimerPlus 6th Edition Chapter 5 Prb 1-Sums"<<endl;
    cout<<"8. PrimerPlus 6th Edition Chapter 5 Prb 3-Add"<<endl;
    cout<<"9. PrimerPlus 6th Edition Chapter 5 Prb 10-Rows"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 5 Problem 15-Twinkie"<<endl;
    cout<<"11. Exit Program - All"<<endl;
    cin>>choose;
    //Catch invalid input
    if (!(choose<=11)) {
        cout<<"Not an option!"<<endl;
    }
    //Utilize switch to implement the menu
    switch(choose) {
        
        case 1:{ 
///////////////////////////////PROBLEM 1//////////////////////////////////////// 
            cout<<"Welcome to Option 1.";
            cout<<endl;
            //START CODE//////////////////////////////
            do {
    float litgal=0.264179, lit, miles, mpg;
    cout<<"Input the number of liters that the car used!"<<endl;
    cin>>lit;
    cout<<"Input the distance traveled in whole miles"<<endl;
    cin>>miles;
    mpg=(miles/(lit*litgal));
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The car had "<<mpg<<" miles per gallon on this trip!"<<endl;  
    cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
    cin>>exit;
    } while ((exit!='n')&&(exit!='N'));
            
            //FINISH CODE/////////////////////////////
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 1
        
        case 2:{
////////////////////////////////PROBLEM 2///////////////////////////////////////
            cout<<"Welcome to Option 2.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
            float litgal=0.264179, lit, lit2, miles, mile2, mpg1, mpg2;
    cout<<"Input the number of liters that the car 1 & 2 used"<<endl;
    cin>>lit>>lit2;
    cout<<"Input the distance traveled in whole miles"<<endl;
    cin>>miles>>mile2;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    mpg1=(miles/(lit*litgal));
    mpg2=(mile2/(lit2*litgal));
    cout<<"Car 1 had "<<mpg1<<" miles per gallon on this trip!"<<endl; 
    cout<<"Car 2 had "<<mpg2<<" miles per gallon on this trip!"<<endl;
    //If I use large numbers as inputs, minute differences after the decimal
    //point, leave me with one being higher than the other, even if they are
    //equal within a hundredth of a mpg. 
    if (mpg1>mpg2) {
        cout<<"Car 1 was more fuel efficient!"<<endl;
    }
    else if (mpg1==mpg2) {
        cout<<"These two vehicles have the same fuel efficiency!"<<endl;
    }
    else {
        cout<<"Car 2 was more fuel efficient!"<<endl;
    }
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
////////////////////////////////PROBLEM 3///////////////////////////////////////
            cout<<"Welcome to Option 3.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
                float price1, price2, rate;
    cout<<"Lets calculate last years inflation!"<<endl;
    cout<<"Input the price of an item one year ago, with cents."<<endl;
    cin>>price1;
    cout<<"Input the price of the same item today, with cents."<<endl;
    cin>>price2;
    rate=((price2/price1)-1)*100;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The annual inflation last year was "<<rate<<"%!"<<endl;        
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 3
////////////////////////////////////////////////////////////////////////////////
        
        case 4:{
////////////////////////////////PROBLEM 4///////////////////////////////////////
            cout<<"Welcome to Option 4.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
                float price1, price2, price3, rate;
    cout<<"Lets calculate last years inflation!"<<endl;
    cout<<"Input the price of an item one year ago, with cents."<<endl;
    cin>>price1;
    cout<<"Input the price of the same item today, with cents."<<endl;
    cin>>price2;
    rate=((price2/price1)-1)*100;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The annual inflation last year was "<<rate<<"%!"<<endl;
    cout<<"If rate remains constant, next year the price will be:"<<endl;
    price3=((rate/100)*price2)+price2;
    cout<<"$"<<price3<<endl;
    cout<<"And in two years: "<<endl;
    cout<<"$"<<((rate/100)*price3)+price3<<endl;        
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 4
////////////////////////////////////////////////////////////////////////////////
        
        case 5:{
////////////////////////////////PROBLEM 5///////////////////////////////////////
            cout<<"Welcome to Option 5.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
                //Variables
    unsigned short int height, weight, age;
    float hat, jacket, waist;
    int jsize, wsize;
    //Inputs
    cout<<"Please input your height (whole inches), weight (whole pounds)\n";
    cout<<"and age (years)."<<endl;
    cin>>height>>weight>>age;
    //HAT
    hat=(weight/height)*2.9;
    cout<<"Your hat size is: "<<hat<<" inches!"<<endl;
    //JACKET SIZE
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (age>39) {
        jsize=(((age-39)+9)/10);
        jacket=((height*weight)/288);
        cout<<jsize<<endl;
        cout<<"Your jacket size is "<<jacket<<" and "<<jsize<<"/8 inches!"<<endl;
    }
    else {
        jacket=(height*weight)/288;
        cout<<"Your jacket size is "<<jacket<<" inches!"<<endl;
    }
    //WAIST SIZE
    if (age>28) {
        wsize=(((age-28)+2)/2);
        waist=(weight/5.7);
        cout<<"Your waist size is "<<waist<<" and "<<wsize<<"/10 inches!"<<endl;       
    }
    else {
       waist=(weight/5.7);
       cout<<"Your waist size is "<<waist<<" inches!"<<endl;
    }
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 5
////////////////////////////////////////////////////////////////////////////////        
       
        case 6:{
////////////////////////////////PROBLEM 6 Savitch Chp3Prb7//////////////////////
            cout<<"Welcome to Option 6.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
    //Variables
    unsigned short int height, weight, age;
    float hat, jacket, waist;
    int jsize, wsize;
    //Inputs
    cout<<"Please input your height (whole inches), weight (whole pounds)\n";
    cout<<"and age (years)."<<endl;
    cin>>height>>weight>>age;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //HAT
    hat=(weight/height)*2.9;
    cout<<"Your hat size is: "<<hat<<" inches!"<<endl;
    //JACKET SIZE
    if (age>39) {
        jsize=(((age-39)+9)/10);
        jacket=((height*weight)/288);
        cout<<jsize<<endl;
        cout<<"Your jacket size is "<<jacket<<" and "<<jsize<<"/8 inches!"<<endl;
        cout<<"In 10 years, your jacket size will be:"<<endl;
        cout<<jacket<<" and "<<jsize+1<<"/8 inches!"<<endl;
    }
    else {
        jacket=(height*weight)/288;
        cout<<"Your jacket size is "<<jacket<<" inches!"<<endl;
    }
    //WAIST SIZE
    if (age>28) {
        wsize=(((age-28)+2)/2);
        waist=(weight/5.7);
        cout<<"Your waist size is "<<waist<<" and "<<wsize<<"/10 inches!"<<endl;
        cout<<"In 10 years, your waist size will be:"<<endl;
        cout<<waist<<" and "<<wsize+5<<"/10 inches!"<<endl;
    }
    else {
       waist=(weight/5.7);
       cout<<"Your waist size is "<<waist<<" inches!"<<endl;
    }
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 6
////////////////////////////////////////////////////////////////////////////////
        
        case 7:{
////////////////////////////////PROBLEM 7///////////////////////////////////////
            cout<<"Welcome to Option 7.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
            //Variables
    int int1, int2, sum, total=0;
    //inputs
    cout<<"Please input two separate integers, the smaller first"<<endl;
    cin>>int1>>int2;
    //Loop to add all integers
    do {
        total=int2+(int2--)+total;
        int2--;
        cout<<"#: "<<total<<"+"<<endl;
    } while (int2>=int1);
    //Output
    cout<<"The sum of these integers and all numbers between is: "<<endl;
    cout<<total<<endl;
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 7
////////////////////////////////////////////////////////////////////////////////
        
        case 8:{
////////////////////////////////PROBLEM 8///////////////////////////////////////
            cout<<"Welcome to Option 8.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
            //Variables
    int int1, sum=0;
    //inputs
    do {
    cout<<"Please input a number to add!"<<endl;
    cout<<"Press zero to stop"<<endl;
    cin>>int1;
    sum=sum+int1;
    cout<<"Current amount: "<<sum<<endl;
    } while (int1!=0);
    cout<<"Total is: "<<endl;
    cout<<sum<<endl;
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 8
////////////////////////////////////////////////////////////////////////////////        
       
        case 9:{
////////////////////////////////PROBLEM 9 //////////////////////////////////////
            cout<<"Welcome to Option 9.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
            //Variables
    int rows=0, count=1;
    cout<<"Enter the number of rows you want to see"<<endl;
    cin>>rows;
    //Loops for calculation
    for(int i=0;i<rows;i++)
    {
        //Display . diminishing
        for(int d=0;d<(rows-count);d++)
            cout<<".";
        //Display * progressing
        for(int a=0;a<count;a++)
            cout<<"*";
        cout<<endl;
        count++;
    }
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 9
////////////////////////////////////////////////////////////////////////////////
        
        case 10:{
////////////////////////////////PROBLEM 10 /////////////////////////////////////
            cout<<"Welcome to Option 10.";
            cout<<endl;
            do {
            //START CODE//////////////////////////////
            float input, sum=0;
    cout<<"It cost $3.50 to buy a twinkie."<<endl;
    cout<<"Input your coins! Press 1 for a dollar, 2 for a quarter, \n";
    cout<<"3 for a dime and 4 for a nickel!!"<<endl;;
    do {
        cout<<"Insert coin: "<<endl;
        cin>>input;
        if (input==1) {
            sum=sum+100;
        }
        else if (input==2) {
            sum=sum+25;
        }
        else if (input==3) {
            sum=sum+10;
        }
        else if (input==4) {
            sum=sum+5;
        }
        else {
            cout<<"Invalid input"<<endl;
        }
        cout<<"Current total is $"<<sum/100<<endl;
    } while (sum<350);
    cout<<"You have bought a twinkie!"<<endl;
            //FINISH CODE/////////////////////////////
            cout<<"Would you like to run again? Y for Yes, N for No"<<endl;
            cin>>exit;
            } while ((exit!='n')&&(exit!='N'));
            cout<<endl;
            cout<<endl;
            cout<<"End problem"<<endl;break;
        } //End option 10
///////////////////////////////////////////////////////////////////////////////       
        case 11: {
            cout<<"Good Bye!"<<endl;break;
        }
////////////////////////////////////////////////////////////////////////////////        
    } // switch statement end bracket
////////////////////////////////////////////////////////////////////////////////   
    } while (choose!=11);
////////////////////////////////////////////////////////////////////////////////        
//Exit Stage Right
    return 0;
}

