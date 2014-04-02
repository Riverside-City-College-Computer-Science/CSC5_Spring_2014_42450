/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 23, 2014, 12:25 PM
 * Purpose: Score a hand of blackjack
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    char aCard,cOne,cTwo,cThr,cFor,cFiv;  
    int tot,tot1,tot2,tot3,tot4,tot5;
    //Prompt user for input
    cout<<"How many cards do you have? (either 2,3,4 or 5) ";
    cin>>aCard;
    //if statement if selection is not within boundaries
    if (aCard<2||aCard>5)
    {
        cout<<"Not a valid selection."<<endl;
    }
    //if user selected 2 cards
    if (aCard=='2')
    {
        //Prompt user for inputs
        cout<<"Enter values as 2-9, t, j, k, q, a."<<endl;        
        cout<<"Please enter value of first card: ";        
        cin>>cOne;            
        cout<<"Please enter value of second card: ";
        cin>>cTwo;
        tot5=cOne;
        //if values for characters for card 1
        if ((cOne=='a'||cOne=='A')&&(tot5>10))cOne=1;
        if ((cOne=='a'||cOne=='A')&&(tot5<=10))cOne=11;
        if (cOne=='t'||cOne=='T')cOne=10;
        if (cOne=='j'||cOne=='J')cOne=10;
        if (cOne=='q'||cOne=='Q')cOne=10;
        if (cOne=='k'||cOne=='K')cOne=10;
        if (cOne=='2')cOne=2;
        if (cOne=='3')cOne=3;
        if (cOne=='4')cOne=4;
        if (cOne=='5')cOne=5;
        if (cOne=='6')cOne=6;
        if (cOne=='7')cOne=7;
        if (cOne=='8')cOne=8;
        if (cOne=='9')cOne=9;       
        tot=cOne;
        //if values for characters for card 2
        if ((cTwo=='a'||cTwo=='A')&&(cOne>10))cTwo=1;
        if ((cTwo=='a'||cTwo=='A')&&(cOne<=10))cTwo=11;
        if (cTwo=='t'||cTwo=='T')cTwo=10;
        if (cTwo=='j'||cTwo=='J')cTwo=10;
        if (cTwo=='q'||cTwo=='Q')cTwo=10;
        if (cTwo=='k'||cTwo=='K')cTwo=10;
        if (cTwo=='2')cTwo=2;
        if (cTwo=='3')cTwo=3;
        if (cTwo=='4')cTwo=4;
        if (cTwo=='5')cTwo=5;
        if (cTwo=='6')cTwo=6;
        if (cTwo=='7')cTwo=7;
        if (cTwo=='8')cTwo=8;
        if (cTwo=='9')cTwo=9;        
        tot1=cOne+cTwo;
        //if hand is larger than 21 = BUSTED
        if(tot1>21)        
        {
            cout<<"Busted!"<<endl;
        }
        else cout<<"Your score is: "<<tot1<<endl;       
    }
    //if user selected 3 cards
    else if (aCard=='3')
    {
        //prompt user for inputs
        cout<<"Enter values as 2-9, t, j, k, q, a."<<endl;
        cout<<"Please enter value of first card: ";
        cin>>cOne;
        cout<<"Please enter value of second card: ";
        cin>>cTwo;
        cout<<"Please enter value of third card: ";
        cin>>cThr;
        tot5=cOne;
        //if statements for card 1
        if ((cOne=='a'||cOne=='A')&&(tot5>10))cOne=1;
        if ((cOne=='a'||cOne=='A')&&(tot5<=10))cOne=11;
        if (cOne=='t'||cOne=='T')cOne=10;
        if (cOne=='j'||cOne=='J')cOne=10;
        if (cOne=='q'||cOne=='Q')cOne=10;
        if (cOne=='k'||cOne=='K')cOne=10;
        if (cOne=='2')cOne=2;
        if (cOne=='3')cOne=3;
        if (cOne=='4')cOne=4;
        if (cOne=='5')cOne=5;
        if (cOne=='6')cOne=6;
        if (cOne=='7')cOne=7;
        if (cOne=='8')cOne=8;
        if (cOne=='9')cOne=9;    
        tot=cOne;
        //if statements for card 2
        if ((cTwo=='a'||cTwo=='A')&&(tot>10))cTwo=1;
        if ((cTwo=='a'||cTwo=='A')&&(tot<=10))cTwo=11;
        if (cTwo=='t'||cTwo=='T')cTwo=10;
        if (cTwo=='j'||cTwo=='J')cTwo=10;
        if (cTwo=='q'||cTwo=='Q')cTwo=10;
        if (cTwo=='k'||cTwo=='K')cTwo=10;
        if (cTwo=='2')cTwo=2;
        if (cTwo=='3')cTwo=3;
        if (cTwo=='4')cTwo=4;
        if (cTwo=='5')cTwo=5;
        if (cTwo=='6')cTwo=6;
        if (cTwo=='7')cTwo=7;
        if (cTwo=='8')cTwo=8;
        if (cTwo=='9')cTwo=9;
        tot1=cOne+cTwo;
        //if statements for card 3
        if ((cThr=='a'||cThr=='A')&&(tot1>10))cThr=1;
        if ((cThr=='a'||cThr=='A')&&(tot1<=10))cThr=11;
        if (cThr=='t'||cThr=='T')cThr=10;
        if (cThr=='j'||cThr=='J')cThr=10;
        if (cThr=='q'||cThr=='Q')cThr=10;
        if (cThr=='k'||cThr=='K')cThr=10;
        if (cThr=='2')cThr=2;
        if (cThr=='3')cThr=3;
        if (cThr=='4')cThr=4;
        if (cThr=='5')cThr=5;
        if (cThr=='6')cThr=6;
        if (cThr=='7')cThr=7;
        if (cThr=='8')cThr=8;
        if (cThr=='9')cThr=9;
        tot2=cOne+cTwo+cThr;
        //if total is over 21 = BUSTED
        if(tot2>21)        
        {
            cout<<"Busted!"<<endl;
        }
        else cout<<"Your score is: "<<tot2<<endl;     
    }
    //if user selected 4 cards
    else if (aCard=='4')
    {
        //Prompt user for inputes
        cout<<"Enter values as 2-9, t, j, k, q, a."<<endl;
        cout<<"Please enter value of first card: ";
        cin>>cOne;
        cout<<"Please enter value of second card: ";
        cin>>cTwo;
        cout<<"Please enter value of third card: ";
        cin>>cThr;
        cout<<"Please enter value of fourth card: ";
        cin>>cFor;
        tot5=cOne;
        //if statements for card 1
        if ((cOne=='a'||cOne=='A')&&(tot5>10))cOne=1;
        if ((cOne=='a'||cOne=='A')&&(tot5<=10))cOne=11;
        if (cOne=='t'||cOne=='T')cOne=10;
        if (cOne=='j'||cOne=='J')cOne=10;
        if (cOne=='q'||cOne=='Q')cOne=10;
        if (cOne=='k'||cOne=='K')cOne=10;
        if (cOne=='2')cOne=2;
        if (cOne=='3')cOne=3;
        if (cOne=='4')cOne=4;
        if (cOne=='5')cOne=5;
        if (cOne=='6')cOne=6;
        if (cOne=='7')cOne=7;
        if (cOne=='8')cOne=8;
        if (cOne=='9')cOne=9;
        tot=cOne;
        //if statements for card 2
        if ((cTwo=='a'||cTwo=='A')&&(tot>10))cTwo=1;
        if ((cTwo=='a'||cTwo=='A')&&(tot<=10))cTwo=11;
        if (cTwo=='t'||cTwo=='T')cTwo=10;
        if (cTwo=='j'||cTwo=='J')cTwo=10;
        if (cTwo=='q'||cTwo=='Q')cTwo=10;
        if (cTwo=='k'||cTwo=='K')cTwo=10;
        if (cTwo=='2')cTwo=2;
        if (cTwo=='3')cTwo=3;
        if (cTwo=='4')cTwo=4;
        if (cTwo=='5')cTwo=5;
        if (cTwo=='6')cTwo=6;
        if (cTwo=='7')cTwo=7;
        if (cTwo=='8')cTwo=8;
        if (cTwo=='9')cTwo=9;
        tot1=cOne+cTwo;
        //if statements for card 3
        if ((cThr=='a'||cThr=='A')&&(tot1>10))cThr=1;
        if ((cThr=='a'||cThr=='A')&&(tot1<=10))cThr=11;
        if (cThr=='t'||cThr=='T')cThr=10;
        if (cThr=='j'||cThr=='J')cThr=10;
        if (cThr=='q'||cThr=='Q')cThr=10;
        if (cThr=='k'||cThr=='K')cThr=10;
        if (cThr=='2')cThr=2;
        if (cThr=='3')cThr=3;
        if (cThr=='4')cThr=4;
        if (cThr=='5')cThr=5;
        if (cThr=='6')cThr=6;
        if (cThr=='7')cThr=7;
        if (cThr=='8')cThr=8;
        if (cThr=='9')cThr=9;
        tot2=cOne+cTwo+cThr;
        //if statements for card 4
        if ((cFor=='a'||cFor=='A')&&(tot2>10))cFor=1;
        if ((cFor=='a'||cFor=='A')&&(tot2<=10))cFor=11;
        if (cFor=='t')cFor=10;
        if (cFor=='j')cFor=10;
        if (cFor=='q')cFor=10;
        if (cFor=='k')cFor=10;
        if (cFor=='2')cFor=2;
        if (cFor=='3')cFor=3;
        if (cFor=='4')cFor=4;
        if (cFor=='5')cFor=5;
        if (cFor=='6')cFor=6;
        if (cFor=='7')cFor=7;
        if (cFor=='8')cFor=8;
        if (cFor=='9')cFor=9;
        tot3=cOne+cTwo+cThr+cFor;
        //if total is above 21 = BUSTED
        if(tot3>21)        
        {
            cout<<"Busted!"<<endl;
        }
        else cout<<"Your score is: "<<tot3<<endl;       
    }
    //if user selected 5 cards
    else if (aCard=='5')
    {
        //Prompt user for inputs
        cout<<"Enter values as 2-9, t, j, k, q, a."<<endl;
        cout<<"Please enter value of first card: ";
        cin>>cOne;
        cout<<"Please enter value of second card: ";
        cin>>cTwo;
        cout<<"Please enter value of third card: ";
        cin>>cThr;
        cout<<"Please enter value of fourth card: ";
        cin>>cFor;
        cout<<"Please enter value of fifth card: ";
        cin>>cFiv;
        tot5=cOne;
        //if statemtns for card 1
        if ((cOne=='a'||cOne=='A')&&(tot5>10))cOne=1;
        if ((cOne=='a'||cOne=='A')&&(tot5<=10))cOne=11;
        if (cOne=='t'||cOne=='T')cOne=10;
        if (cOne=='j'||cOne=='J')cOne=10;
        if (cOne=='q'||cOne=='Q')cOne=10;
        if (cOne=='k'||cOne=='K')cOne=10;
        if (cOne=='2')cOne=2;
        if (cOne=='3')cOne=3;
        if (cOne=='4')cOne=4;
        if (cOne=='5')cOne=5;
        if (cOne=='6')cOne=6;
        if (cOne=='7')cOne=7;
        if (cOne=='8')cOne=8;
        if (cOne=='9')cOne=9;
        tot=cOne;
        //if statements for card 2
        if ((cTwo=='a'||cTwo=='A')&&(tot>10))cTwo=1;
        if ((cTwo=='a'||cTwo=='A')&&(tot<=10))cTwo=11;
        if (cTwo=='t'||cTwo=='T')cTwo=10;
        if (cTwo=='j'||cTwo=='J')cTwo=10;
        if (cTwo=='q'||cTwo=='Q')cTwo=10;
        if (cTwo=='k'||cTwo=='K')cTwo=10;
        if (cTwo=='2')cTwo=2;
        if (cTwo=='3')cTwo=3;
        if (cTwo=='4')cTwo=4;
        if (cTwo=='5')cTwo=5;
        if (cTwo=='6')cTwo=6;
        if (cTwo=='7')cTwo=7;
        if (cTwo=='8')cTwo=8;
        if (cTwo=='9')cTwo=9;
        tot1=cOne+cTwo;
        //if statements for card 3 
        if ((cThr=='a'||cThr=='A')&&(tot1>10))cThr=1;
        if ((cThr=='a'||cThr=='A')&&(tot1<=10))cThr=11;
        if (cThr=='t'||cThr=='T')cThr=10;
        if (cThr=='j'||cThr=='J')cThr=10;
        if (cThr=='q'||cThr=='Q')cThr=10;
        if (cThr=='k'||cThr=='K')cThr=10;
        if (cThr=='2')cThr=2;
        if (cThr=='3')cThr=3;
        if (cThr=='4')cThr=4;
        if (cThr=='5')cThr=5;
        if (cThr=='6')cThr=6;
        if (cThr=='7')cThr=7;
        if (cThr=='8')cThr=8;
        if (cThr=='9')cThr=9;
        tot2=cOne+cTwo+cThr;
        //if statements for card 4
        if ((cFor=='a'||cFor=='A')&&(tot2>10))cFor=1;
        if ((cFor=='a'||cFor=='A')&&(tot2<=10))cFor=11;
        if (cFor=='t'||cFor=='T')cFor=10;
        if (cFor=='j'||cFor=='J')cFor=10;
        if (cFor=='q'||cFor=='Q')cFor=10;
        if (cFor=='k'||cFor=='K')cFor=10;
        if (cFor=='2')cFor=2;
        if (cFor=='3')cFor=3;
        if (cFor=='4')cFor=4;
        if (cFor=='5')cFor=5;
        if (cFor=='6')cFor=6;
        if (cFor=='7')cFor=7;
        if (cFor=='8')cFor=8;
        if (cFor=='9')cFor=9;
        tot3=cOne+cTwo+cThr;
        //if statements for card 5
        if ((cFiv=='a'||cFor=='A')&&(tot3>10))cFiv=1;
        if ((cFiv=='a'||cFor=='A')&&(tot3<=10))cFiv=11;
        if (cFiv=='t'||cFiv=='T')cFiv=10;
        if (cFiv=='j'||cFiv=='J')cFiv=10;
        if (cFiv=='q'||cFiv=='Q')cFiv=10;
        if (cFiv=='k'||cFiv=='K')cFiv=10;
        if (cFiv=='2')cFiv=2;
        if (cFiv=='3')cFiv=3;
        if (cFiv=='4')cFiv=4;
        if (cFiv=='5')cFiv=5;
        if (cFiv=='6')cFiv=6;
        if (cFiv=='7')cFiv=7;
        if (cFiv=='8')cFiv=8;
        if (cFiv=='9')cFiv=9;
        tot4=cOne+cTwo+cThr+cFor+cFiv;
        //if user goes above 21 = BUSTED
        if(tot4>21)        
        {
            cout<<"Busted!"<<endl;
        }
        else cout<<"Your score is: "<<tot4<<endl;     
    }    
    else cout<<endl;
  //Exit Stage Right
    return 0;
}
