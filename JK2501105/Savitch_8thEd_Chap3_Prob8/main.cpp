/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 26, 2014, 10:02 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{

    int count, value, acecnt;
    char Continue, card;
    do
    {
        value = 0;
        acecnt = 0;
        //Input number of count
        cout<<"Enter number of cards (2-5)";
        cin>>count;
        if(count<2 || count >5)
            cout<<"Invalid input";
        else
        {
            for(int j = count; j>0; j--)
            {
               cout<<"Enter value of card: ";
               cin>>card;
               if(card =='2' && card <='9')
               {
                   value = value + 2 + (int) (card- '2');
            }
               else if (card =='j' || card =='J' ||
                        card =='t' || card =='T' ||
                        card =='q' || card =='Q' ||
                        card =='k' || card =='K')
               {
                 value+=10;
               }
               else if (card =='a' || card =='A')
               {
                 acecnt++;
               }    
            }
        }
        if (acecnt)
        {
            while(acecnt>1)
            {
                value+=1;
                acecnt--;
            }
            if (value >10 && acecnt == 1)
            {
                value+= 1;
            }
            else if(value <10 && acecnt ==1)
            {
                value+= 11;
            }   
        }    
        if(value>21)
            cout<<"bursted";
        else
            cout<<"score is "<< value<<endl;
            cout<<"If you want to repeat calculations press 'Y' or 'y'";
            cin>>Continue;
        }
    while(Continue =='y' || Continue =='Y');
    //Pause system
    system("pause");
    
    return 0;
}

