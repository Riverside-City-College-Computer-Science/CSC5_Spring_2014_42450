/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 23, 2014, 5:32 PM
 * Purpose: Create a program that outputs a 4digit Arabic number into
 * Roman numerals.
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int one,year,year2,year3;
    
    cout<<"Please enter a 4 digit year: ";
    cin>>one;
    
    if (one>=3000)
    {
        cout<<"MMM";
        year=one-3000;
    }
    if ((one>=2000)&&(one<3000))
    {
        cout<<"MM";
        year=one-2000;
    }
    if ((one>=1000)&&(one<2000))
    {
        cout<<"M";
        year=one-1000;        
    }
    if ((year>=900)&&(year<1000))
    {        
        cout<<"CM"; 
        year2=year-900;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=800)&&(year<900))
    {      
        cout<<"DCCC";
        year2=year-800;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=700)&&(year<800))
    {
        cout<<"DCC";
        year2=year-700;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=600)&&(year<700))
    {
        cout<<"DC";
        year2=year-600;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=500)&&(year<600))
    {
        cout<<"D";
        year2=year-500;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=400)&&(year<500))
    {
        cout<<"CD";
        year2=year-400;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=300)&&(year<400))
    {
        cout<<"CCC";
        year2=year-300;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=200)&&(year<300))
    {
        cout<<"CC";
        year2=year-200;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
    if ((year>=100)&&(year<200))
    {
        cout<<"C";
        year2=year-100;
        
        if ((year2>=90)&&(year2<100))
        {
            cout<<"XC";
            year3=year2-90;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=80)&&(year2<90))
        {
            cout<<"LXXX";
            year3=year2-80;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=70)&&(year2<80))
        {
            cout<<"LXX";
            year3=year2-70;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=60)&&(year2<70))
        {
            cout<<"LX";
            year3=year2-60;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=50)&&(year2<60))
        {
            cout<<"L";
            year3=year2-50;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=40)&&(year2<50))
        {
            cout<<"XL";
            year3=year2-40;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=30)&&(year2<40))
        {
            cout<<"XXX";
            year3=year2-30;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=20)&&(year2<30))
        {
            cout<<"XX";
            year3=year2-20;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
        if ((year2>=10)&&(year2<20))
        {
            cout<<"X";
            year3=year2-10;
            
            if (year3==9) cout<<"IX";
            if (year3==8) cout<<"VIII";
            if (year3==7) cout<<"VII";
            if (year3==6) cout<<"VI";
            if (year3==5) cout<<"V";
            if (year3==4) cout<<"IV";
            if (year3==3) cout<<"III";
            if (year3==2) cout<<"II";
            if (year3==1) cout<<"I";
        }
    }
       
    
    return 0;
}

