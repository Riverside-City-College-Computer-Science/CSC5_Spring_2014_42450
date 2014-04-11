/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 5, 2014, 10:11 AM
 * Purpose: Assignment 4 | Savitch 8th Edition Chapter 4
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const float CNVGALL=0.264179;//Conversion of one liter to gallon (Problem 1 & 2)
const float G = 6.673e-8; //Universal Gravitational Constant (Problem 7)

//Function Prototypes
float cnsmd(float gas_par, float dist_par);//Function for Problem 1 & 2
float inflat(float lstYr_parm, float today_parm);//Function for Problem 4
float infla(float lstYr_parm, float today_parm);//Function for Problem 5
float futInfl(float estInf_parm, float today_parm);//Function for Problem 5
float intrst(float inBal, float moInt, int nuMo);//Function for Problem 6
float gravFrc(float massOne, float massTwo, float dist);//Function for Problem 7
float max(float n1, float n2, float n3);//Function for Problem 12
float max(float n1, float n2);//Function for Problem 12
float bmical(float wght_parm);//Function for Problem 14
float phycal(int inten_parm, float wght_parm, int mins_parm);//Function for Problem 14
float concal(float calCons_parm);//Function for Problem 14
float hat(float wght_parm, float hght_parm);//Function for Problem 9
float jacket(float wght_parm, float hght_parm, int age_parm);//Function for Problem 9
float waist(float wght_parm, int age_parm);//Function for Problem 9

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    bool extMenu = true;
do{    
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl<<endl;
    cout<<"1. Savitch 8th Edition Chapter 4 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 4 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 4 Problem 4"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 4 Problem 5"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 4 Problem 6"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 4 Problem 7"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 4 Problem 12"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 4 Problem 14"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 4 Problem 15"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 4 Problem 9"<<endl<<endl;
    cout<<"Enter your selection: ";
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
             //Declare Variables
                    float estInf, lstYr, today;
                    char ans;
                    do{
                    //Input Prices
                    cout<<"\n";
                    cout<<"Estimate the rate of inflation.\n";
                    cout<<"\n";
                    cout<<"Enter last years price of any item: $";
                    cin>>lstYr;
                    cout<<"\n";
                    cout<<"Enter today's price of that same item: $";
                    cin>>today;
                    cout<<"\n";
                    //Function Call
                    estInf = inflat(lstYr, today);
                    //Decimal Precision
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(2);
                    //Output Inflation Rate
                    cout<<"The rate of inflation based on last years prices is ";
                    cout<<estInf;
                    cout<<" percent.";
                    cout<<"\n";
                    cout<<"\n";
                    //Repeat Calculation Option
                    cout<<"Would you like to recalculate an inflation estimate?\n";
                    cout<<"Enter y for yes, n for no: ";
                    cin>>ans;
                } while (ans=='y'||ans=='Y');
                cout<<"\n";
                cout<<"The End";
            //End of Problem 4
            break;
        }
        case 4:{
            //Start of Problem 5
            //Declare Variables
            float estInf, lstYr, today, nxtYr, fllwYr;
            char ans;
            do{
            //Input Prices
            cout<<"\n";
            cout<<"Estimate the rate of inflation.\n";
            cout<<"\n";
            cout<<"Enter last years price of any item: $";
            cin>>lstYr;
            cout<<"\n";
            cout<<"Enter today's price of that same item: $";
            cin>>today;
            cout<<"\n";
            //Function Call (Estimate Interest Rate)
            estInf = infla(lstYr, today);
            //Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            //Output Inflation Rate
            cout<<"The rate of inflation based on last years prices is ";
            cout<<estInf;
            cout<<" percent.";
            cout<<"\n";
            //Function Call (Future Pricing:Year 1)
            nxtYr = futInfl(estInf, today);
            //Future Estimate of Inflation (Year 1)
            cout<<"\n";
            cout<<"Based on this interest rate we can expect that next year's";
            cout<<" price of your item will be $";
            cout<<nxtYr;
            cout<<"\n";
            //Function Call (Future Pricing:Year 2)
            fllwYr = futInfl(estInf, nxtYr);
            //Future Estimate of Inflation (Year 2)
            cout<<"\n";
            cout<<"And based on this interest rate we can expect that the ";
            cout<<"following year's price of your item will be $";
            cout<<fllwYr;
            cout<<"\n";
            cout<<"\n";
            //Repeat Calculation Option
            cout<<"Would you like to recalculate an inflation estimate?\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
        } while (ans=='y'||ans=='Y');
        cout<<"\n";
        cout<<"The End";
            //End of Problem 5
            break;
        }
        case 5:{
            //Start of Problem 6
            float inBal, moInt, totInt;
            int nuMo;
            char ans;
            do{
            //Input Initial Balance, Monthly Interest Rate, and Term
            cout<<"\n";
            cout<<"Calculate The Interest Due On Your Credit Account";
            cout<<"\n";
            cout<<"\n";
            cout<<"Enter your initial balance: $";
            cin>>inBal;
            cout<<"\n";
            cout<<"Enter your monthly interest rate(%): ";
            cin>>moInt;
            cout<<"\n";
            cout<<"Enter the number of months interest will be paid: ";
            cin>>nuMo;
            cout<<"\n";
            //Calculation
            totInt=intrst(inBal, moInt, nuMo);
            //Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            //Output Interest Due
            cout<<"Your total interest due is: $";
            cout<<totInt;
            cout<<" over a ";
            cout<<nuMo;
            cout<<" month period.";
            cout<<"\n";
            cout<<"\n";
            cout<<"Would you like to recalculate your interest due?";
            cout<<"\n";
            //Repeat Option
            cout<<"Enter y for yes, n for no: ";  
            cin>>ans;
            }while (ans=='y'||ans=='Y');
            cout<<"\n";
            cout<<"Have a nice day.";
            cout<<"\n";
            //End of Problem 6
            break;
        }
        case 6:{
            //Start of Problem 7
            //Declare Variable
            float massOne, massTwo, dist, Force;
            char ans;
            do{
            //Input Required Data
            cout<<"\n";
            cout<<"Calculate the gravitational force between two bodies.";
            cout<<"\n";
            cout<<"\n";
            cout<<"Enter the mass (in grams) of the first body: ";
            cin>>massOne;
            cout<<"\n";
            cout<<"Enter the mass (in grams) of the second body: ";
            cin>>massTwo;
            cout<<"\n";
            cout<<"Enter the distance (in centimeters) between the two bodies: ";
            cin>>dist;
            //Function Call
            Force=gravFrc(massOne, massTwo, dist);
            cout<<"\n";
            cout<<"The gravitational force between the two bodies is: ";
            cout<<Force;
            cout<<" dynes.";
            cout<<"\n";
            cout<<"\n";
            cout<<"Would you like to recalculate?";
            cout<<"\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            } while (ans=='y'||ans=='Y');
            cout<<"Good-bye";
            //End of Problem 7
            break;
        }
        case 7:{
            //Start of Problem 12
            float a, b, n1, n2, n3;
                cout<<"\n";
                cout<<"Enter three numbers\n";
                cout<<"\n";
                cin>>n1;
                cout<<"\n";
                cin>>n2;
                cout<<"\n";
                cin>>n3;
                cout<<"\n";
                a=max(n1,n2,n3);
                cout<<"The largest number is: ";
                cout<<a;
                cout<<"\n";   
                cout<<"\n";
                cout<<"Enter two numbers\n";
                cout<<"\n";
                cin>>n1;
                cout<<"\n";
                cin>>n2;
                cout<<"\n";
                b=max(n1,n2);
                cout<<"The largest number is: ";
                cout<<b;
                cout<<"\n"; 
            //End of Problem 12
            break;
        }
        case 8:{
            //Start of Problem 14
            //Declare Variables
            float physicl, wght, calCons, bmi, consum, totcal;
            int inten, mins;

            cout<<"\n";
            cout<<"Calculate your total necessary daily caloric consumption,\n";
            cout<<"based on your favorite food.";
            cout<<"\n";
            cout<<"\n";
            cout<<"Enter your weight (in pounds): ";
            cin>>wght;
            cout<<"\n";
            cout<<"Enter the intensity of your daily physical activity.\n";
            cout<<"\n";
            cout<<"On a scale of 1 to 20\n";
            cout<<"1  representing walking at a pace of 1 mph\n";
            cout<<"10 representing running at a pace of 6 mph\n";
            cout<<"20 representing running at a pace of 15 mph\n";
            cout<<"\n";
            cout<<"Intensity of physical activity: ";
            cin>>inten;
            cout<<"\n";
            cout<<"Number of minutes spent during the physical activity: ";
            cin>>mins;
            cout<<"\n";
            cout<<"Enter the number of calories contained in your favorite food: ";
            cin>>calCons;
            cout<<"\n";
            //Function Call    
            physicl=phycal(inten, wght, mins);
            bmi=bmical(wght);
            consum=concal(calCons);
            //Set Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            //Output Individual Results
            cout<<"Calories required to meet your basal metabolic rate: ";
            cout<<bmi;
            cout<<" calories";
            cout<<"\n";
            cout<<"Calories required to meet your physical activity: ";
            cout<<physicl;
            cout<<" calories";
            cout<<"\n";
            cout<<"Calories required to consume your favorite food: ";
            cout<<consum;
            cout<<" calories";
            cout<<"\n";
            //Output Services of Favorite Food Required to Maintain Current Weight 
            totcal=physicl+bmi+consum;
            cout<<"\n";
            cout<<"You would need a total of ";
            cout<<(totcal/calCons);
            cout<<" servings per day of your favorite food to maintain your current \n";
            cout<<"weight at the specified activity level.";
            cout<<"\n";    
            //End of Problem 14
            break;
        }
        case 9:{
            //Start of Problem 15
             float coinIn, totl, chng;
            cout<<"DEEP FRIED TWINKIES - $3.50";
            cout<<"\n";
            cout<<"\n";
            cout<<"Vending Machine Only Accepts The Following Coins";
            cout<<"\n";
            cout<<"$1.00, $.25, $.10, and $.05";
            cout<<"\n";
            cout<<"\n";
            totl=0;
            do{
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                cout<<"Insert Coin: ";       
            cin>>coinIn;
                totl=totl+coinIn;
                cout<<"You have inserted $";
            cout<<totl;
            cout<<"\n";
            }while (totl<3.50);
            chng=totl-3.50;
               if (chng>0){
               cout<<"\n";
               cout<<"Your change is: $";
               cout<<chng;
               cout<<"\n";
               cout<<"\n";
               cout<<"Enjoy your deep-fried twinkie!";
               cout<<"\n";
               }else
               {
                   cout<<"\n";
                   cout<<"Enjoy your deep-fried twinkie!";
                   cout<<"\n";
               }
            //End of Problem 15
            break;
        }
        case 10:{
            //Start of Problem 9
            //Declare Variables
            float wght, hght, hghtF, hghtI, hatSize, jacSize, waiSize;
            int age;
            //Input age, height, and weight
            cout<<"\n";
            cout<<"Enter your age: ";
            cin>>age;
            cout<<"\n";
            cout<<"Enter your height, feet and then inches.";
            cout<<"\n";
            cout<<"Feet: ";
            cin>>hghtF;
            cout<<"Inches: ";
            cin>>hghtI;
            cout<<"\n";
            cout<<"Enter your weight (in pounds): ";
            cin>>wght;
            cout<<"\n";
            //Convert Feet to Inches
            hght=(hghtF*12)+hghtI;
            //Function Call
            hatSize = hat(wght, hght);
            jacSize = jacket(wght, hght, age);
            waiSize = waist(wght, age);
            //Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);   
            //Output Clothing Sizes
            cout<<"\n";
            cout<<"Hat size: ";
            cout<<hatSize;
            cout<<"\n";
            cout<<"Jacket size: ";
            cout<<jacSize;
            cout<<" inches";
            cout<<"\n";
            cout<<"Waist size: ";
            cout<<waiSize;
            cout<<" inches";
            cout<<"\n";
            //End of Problem 9
            break;
        }
        default:extMenu=false;
    }
}while(extMenu);
    //Exit Stage Right
    return 0;
}

//Solution to Problem 1 & 2
float cnsmd(float gas_par, float dist_par){
    return (dist_par/gas_par);
}

//Solution to Problem 4
float inflat(float lstYr_parm, float today_parm){
    float diff;
    diff=(today_parm-lstYr_parm);
    return ((diff/lstYr_parm)*100);
}

//Solutions to Problem 5
float infla(float lstYr_parm, float today_parm){
    float diff;
    diff=(today_parm-lstYr_parm);
    return ((diff/lstYr_parm)*100);
}

float futInfl(float estInf_parm, float today_parm){
        return ((estInf_parm/100)*today_parm+today_parm);
}
//Solution to Problem 6
float intrst(float inBal, float moInt, int nuMo){
  float totInt=inBal*((moInt/100)/12)*nuMo;  
  //float nuBal=inBal+(totInt+(totInt*moInt*nuMo));
  return (totInt);   
}
//Solution to Problem 7
float gravFrc(float massOne, float massTwo, float dist){
    float F;
    F=((G*massOne*massTwo)/(dist*dist));
    return (F);
}
//Solution to Problem 12
float max(float n1, float n2, float n3)
{
    float n=n1;
    if (n2>n)
    {
        n=n2;
    }
    if (n3>n)
    {
        n=n3;
    }
    return (n);
}
float max(float n1, float n2)
{
    float n=n1;
    if (n2>n)
    {
        n=n2;
    }
    return (n);
}
//Solutions to Problem 14
float phycal(int inten_parm, float wght_parm, int mins_parm)
{
    float phys;
    phys=(0.0385*inten_parm*wght_parm*mins_parm);
    return (phys);
}
float bmical(float wght_parm)
{
    float bmi, temp;
    temp=(wght_parm/2.2);
    bmi=70*pow(temp,0.756);
    return (bmi);
}
float concal(float calCons_parm)
{
    float enDig;
    enDig=calCons_parm*0.1;
    return(enDig);            
}
//Solutions to Problem 9
float hat(float wght_parm, float hght_parm)
{
    float h;
       h=(wght_parm/hght_parm)*2.9;
    return (h);
}

float jacket(float wght_parm, float hght_parm, int age_parm)
{
    float j;
    if ((age_parm>30)&&(age_parm%10==0)){
       j=((hght_parm*wght_parm)/288)+(((age_parm-30)/10)*0.125);
    }else if ((age_parm>40)&&(age_parm%10!=0)){ 
        age_parm=((age_parm/10.0)-((age_parm%10)/10.0))*10;//when the % is used it returns whole numbers | had to divide by 10
       j=((hght_parm*wght_parm)/288)+(((age_parm-30)/10)*0.125);
    }else    
        j=(hght_parm*wght_parm)/288;
    return (j);
          
}

float waist(float wght_parm, int age_parm)
{
    float w;
        
     if ((age_parm>28)&&(age_parm%2==0)){
           w=(wght_parm/5.7)+(((age_parm-28)/2)*0.1);    
    }else if ((age_parm>28)&&(age_parm%2!=0)){
           age_parm=age_parm-1;//decrease age by 1 to make sure that the number calculated will be even
           w=(wght_parm/5.7)+(((age_parm-28)/2)*0.1);
    }else      
        w=(wght_parm)/5.7;
        
    return (w);
           
}