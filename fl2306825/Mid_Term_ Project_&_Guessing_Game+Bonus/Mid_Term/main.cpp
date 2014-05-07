/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 23, 2014, 3:46 AM
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constant

//Function prototype
void again();

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    int choose;
    char ans;
    do
    {
    
    //Using switch statement here for the menu
    cout << "Welcome to Franks Mid Term Main Menu. Please choose "              //Main menu
            "one of the Following questions. Inputting"
            " anything other number will exit the program.\n"
            "1. Problem 1\n"
            "2. Problem 2\n"
            "3. Problem 3\n"
            "4. Problem 4\n"
            "5. Problem 5\n"
            "6. Problem 6\n";
    cin >> choose;
    
    switch(choose){
    case 1:{//*************************Question 1*******************************

        do{
        //Declaring variables here
        int num;
        string s = " ";                                                         //If I did s = s + s, it's going to come out twice each line, so I made another string to not add itself twice.                 
        string p = " ";
        
        //Executing
        cout << "Welcome to question one. Please input an integer number to see"
                " the magic happen.\n";
        cin >> num;
        cout << endl;
        
        for(int g = 1 ;g <= num; g++)                                           //once g, which equals 1, hits num, the loop stops. Every time it loops 1 is added to g.
        {
             cout << s << g << endl;                                            // cout s first so the space will come out first, then the adding number(g), then endl.
             s = s + p;                                                         //the calculations: 1 = 0 + 1 looping to 2 = 1 + 1, instead of 2 = 1 + 1 looping to 4 = 2 + 2
        }
        
        //Loop
        again();                                                                //If the person wants to try again or not
        cin >> ans;
        }while(tolower(ans) == 'y');
        break;
    }
    
    case 2:{//*************************Question 2*******************************
        
        do{
        //Declaring variables
        int num1, num2, num3, num4, num5;                                       // I created 5 separate inputs to do the for statement for each one
        string s1 = "*", s2 = "*", s3 = "*", s4 = "*", s5 = "*", p = "*";       // 5 separate strings specifically for a certain input so they wont cross each other
        
         //Executing
        cout << "Welcome to question two. Here, we will make a histogram."
                " Please insert 5 numbers between 3 and 27 to create bars"
                " represented with asterisks. Press enter each time inputting a"
                " number" << endl;
        do{         
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        
        if(num1 > 27 || num2 > 27 || num3 > 27 || num4 > 27                     //If any of the numbers either pass 27, or is lower than 3, it loops back into cin
           || num5 > 27 || num1 < 3 || num2 < 3 || num3 < 3
           || num4 < 3 || num5 < 3)
        {
            cout << "Invalid. one of the numbers was either higher than 27, or "
                    "lower than 3. Please input five numbers between 3 and 27."
                    << endl;
        }
       }while(num1 >= 27 || num2 >= 27 || num3 >= 27 || num4 >= 27
               || num5 >= 27 || num1 < 3 || num2 < 3 || num3 < 3
           || num4 < 3 || num5 < 3);
        
        for(int g = 2; g <= num1; g++)                                          //I actually don't know how this part works. If I did g = 1, their would be one less asterisk for some reason, so I went with 2
        { 
             s1 = s1 + p;    
        }
        cout << s1 << endl;                                                     //Had to output the results outside or else it would have kept looping the solution
        for(int g = 2; g <= num2; g++)                                          //Just like the first question, an asterisk is created with looping until g equals the input 
        { 
             s2 = s2 + p;    
        }
        cout << s2 << endl;
        for(int g = 2; g <= num3; g++)
        { 
             s3 = s3 + p;    
        }
        cout << s3 << endl;
        for(int g = 2; g <= num4; g++)
        { 
             s4 = s4 + p;    
        }
        cout << s4 << endl;
        for(int g = 2; g <= num5; g++)
        { 
             s5 = s5 + p;    
        }
        cout << s5 << endl;
        
        //Loop
        again();
        cin >> ans;
        }while(tolower(ans) == 'y');
        break;
    }
    case 3:{//*************************Question 3*******************************
        
        do{
        //Declare variables
       std::string num;
       unsigned short bal, bal2, totl, depo;                                             
        
       //Executing
        std::cout << "Welcome to question 3. In this program, we will see if "
                "your checking account has exceeded. To begin with, please "
                "input your six digit Account number.\n";
        do{
        cin >> num;
    if(num.size() != 6)                                                         //If their are more or less than six, the input is repeated
    {
        std::cout << "Error, the input was either more, or less than six. "
                "Please try again.\n";
    }
        }while(num.size() != 6);
        
        cout << "Next, input the balance you had in the beginning of the month."
                "\n";
        cin >> bal;
        cout << "Now input the total of all checks written in this same month."
                "\n";
        cin >> totl;
        cout << "Finally, what is the total of all deposits in this same "
                "month.\n";
        cin >> depo;
        
        //Calculations
        bal2 = (bal - totl) + depo;
        
        if(bal2 < 0)                                                            //Lower than 0 so it will add a fee of 12.50
        {
            cout << "Your current balance is: " << bal2 << "\nBecause of "
                    "overdrawn, a 12.50 fee will be added\nTotal of: ";
            
            bal2 = bal2 - 12.50;                                                //Having trouble getting a negative
            bal2 = bal2 * -1;
            
            cout << bal2 << endl;
        }
        else if(bal2 > 0)                                                       //Everything normal
        {
            cout << "Your current balance is: " << bal2 << endl;
        }
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
         
        //Loop
        again();
        cin >> ans;
        }while(tolower(ans) == 'y');
        break;
    }
    case 4:{//*************************Question 4*******************************
        
        do{
        //Declare variables
        float work, gross;
        
        cout << "Welcome to question 4. We will calculate the gross pay for "   //Payment is 8. 20 hours is no bonus. between 20 hours and 40 is x1.5. above 40 is x2
                "employees. The week is Monday through Friday and the pay rate"
                " is $8 an hour. The company will pay employees straight-time"
                " for the first 20 hours work in a week, time and a half for"
                " all hours worked between 20 hours and 40 in a week, and"
                " double time for any hours worked over 40 hours a week."
                " Please input the hours of work in a week from one for the"
                " employees\n";
        cin >> work;
        
        if(work <= 20)
        {
            gross = work * 8;                                                   //Hours * 8 = payment
            cout << "Your payment will be: $" << gross << "\nWith no bonus.\n";
        }
        else if(work > 20 && work <= 40)
        {
            
            float tUpb = work - 20;                                             //to calculate the extra hours
            gross = (work * 8) * 1.5; 
            cout << "Hours over 20 is " << tUpb << endl;
            cout << " With the bonus of x1.5, Your payment will be: $" << gross
                 << endl;
        }
        else if(work > 40)
        {
        float tUpb = work - 40;                                                 //to calculate the extra hours
            gross = (work * 8) * 2; 
            cout << "Hours over 40 is " << tUpb << endl;
            cout << "With the bonus of x2, Your payment employee will be: $"
                 << gross << endl;
        }
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
        //Loop
        again();
        cin >> ans;
        }while(tolower(ans) == 'y');
        break;
    }
    case 5:{//*************************Question 5*******************************
        
        do{
        //Declare variables
        int pack, hr;
        char choose;
        
        //Executing
        cout << "Welcome to problem five. Here we will determine  which out of "
                "three subscription packages from ISP you want to choose.\n";
        cout << "Subscription 1. $29.95 per month for 11 hours access.  "
                "Additional hours are $2.25 up to 22 hours then $4.95 for all "
                "additional hours.\n";
        cout << "Subscription 2. $34.95 per month for 22 hours access. "
                "Additional hours are $1.25 up to 33 hours then $2.25 for "
                "each\n";
        cout << "Subscription 3. $42.95 per month for unlimited access\n";
        cout << "Which subscription package would you like to choose? "
                "(1, 2, or 3?)\n";
        do{
        cin >> pack;
        
        if(pack > 3)                                                            //if 1, 2 or 3 is not inputted
        {
            cout << "Invalid, please choose again.(1, 2, or 3?)\n";
        }
        }while(pack > 3);  
        
        switch(pack){                                                           //Using switch for inputs
            case 1:
            {
                do{
                cout << "How many hours would you like to subscribe?\n";
                cin >> hr;
                if(hr <= 11)
                {
                    cout << "Subscription will be 29.95 per month for 11 hours "
                            "access.\n";
                }
                else if(hr > 11 && hr <= 22)
                {
                    float nHr = hr - 11;                                        //To get the extra hours
                    float extra = nHr * 2.25;                                   
                    float final = extra + 29.95;                                //Totaling all up
                    cout << "Subscription will be 29.95 per month. With the "
                            "extra hours of " << nHr << ", the total price "
                            "will be: " << final << " per month." <<endl;
                }
                else
                {
                    float nHr = hr - 22;
                    float extra = nHr * 4.95;
                    float final = nHr + 29.95;
                    cout << "Subscription will be 29.95 per month. With the "
                            "extra hours of " << nHr << ", the total price "
                            "will be: " << final << " per month." << endl;
                }
                
                cout << "Are the hours ok?\nY = yes\nN = No\n";
                cin >> ans;
                }while(tolower(ans) == 'n');
                
                break;
            }    
            case 2:
            {
                do{
                cout << "How many hours would you like to subscribe?\n";
                cin >> hr;
                if(hr <= 22)
                {
                    cout << "Subscription will be 34.95 per month for 22 hours "
                            "access.\n";
                }
                else if(hr > 22 && hr <= 33)
                {
                    float nHr = hr - 11;
                    float extra = nHr * 1.25;
                    float final = nHr + 34.95;
                    cout << "Subscription will be 34.95 per month. With the "
                            "extra hours of " << nHr << ", the total price "
                            "will be: " << final << " per month." << endl;
                }
                else
                {
                    float nHr = hr - 33;
                    float extra = nHr * 2.25;
                    float final = extra + 34.95;
                    cout << "Subscription will be 34.95 per month. With the "
                            "extra hours of " << nHr << ", the total price "
                            "will be: " << final << " per month." << endl;
                }
                
                cout << "Are the hours ok?\nY = yes\nN = No\n";
                cin >> ans;
                }while(tolower(ans) == 'n');
                
                break;
            }
            case 3:
            {
                cout << "Subscription will be 42.95 for unlimited access\n";
                
                break;
            }
        }
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
                
        //Loop
      again();
        cin >> ans;
        }while(tolower(ans) == 'y');
        break;
    }
    case 6:{//*************************Question 6*******************************
            
        //Declare variables
        
        //Execute
        
        
        break;
    }
    default:{//**************************Error**********************************
        cout << "Goodbye." << endl;
        break;
    }
    }

    }while(choose <= 6);
    return 0;
}

void again()
{
    cout << "Would you like to try again?\nY = Yes\nN = No\n";    
}