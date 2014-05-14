/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on May 8, 2014, 12:21 AM
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

//Function Prototypes For Case 1
float calculateRetail(float, float);

//Function Prototypes For Case 2
void round();

//Function Prototypes For Case 3
bool even ( int );

//Function Prototypes For Case 4
float calcChrgs(float);
float calcChrgs2(float);
float calcChrgs3(float);

//Function Prototypes For Case 5
float profit(float, float, float, float, float );

//Function Prototypes For Case 6
float fallingDistance(float);

//Function Prototypes For Case 7
float kineticEnergy(float, float);

//Function Prototypes For Case 8
float getSales(float, float, float, float);
void findHighest(float, float, float, float);

//Function Prototypes For Case 9
float presentValue(float, float, float );

//Function Prototypes For Case 10
int totalCharge(int, int, int, int);
float totalCharge(float, float);

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1.Gaddis_7thEdBook_Chap6_Prob1"<<endl;
        cout<<"2.Deitel_3rdEdBook_Chap3_Prob3.13 "<<endl;
        cout<<"3.Deitel3rdEdBook_Chap3_Prob3.21 "<<endl;
        cout<<"4.Deitel3rdEdBook_Chap3_Prob3.12"<<endl;
        cout<<"5.Gaddis_7thEdBook_Chap6_Prob11 "<<endl;
        cout<<"6.Gaddis_7thEdBook_Chap6_Prob3 "<<endl;
        cout<<"7.Gaddis_7thEdBook_Chap6_Prob4"<<endl;
        cout<<"8. Gaddis_7thEdBook_Chap6_Prob5 "<<endl;
        cout<<"9.  Gaddis_7thEdBook_Chap6_Prob10 "<<endl;
        cout<<"10.Gaddis_7thEdBook_Chap6_Prob14 "<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{   
                
                        int wPrc, mPrc;
                        cout << "\nThis program asks you to enter and item's wholesale cost and its markup percentage, "
                             <<  "so that it can calculate that items retail price for you.\n";
                        cout << "\nPlease enter the item's wholesale price:\n";
                        cin >> wPrc;
                        while (wPrc<=0){
                            cout << "\nPlease enter the item's CORRECT wholesale price:\n";
                            cin >> wPrc;
                        }
                        cout <<"\nWhat is the item's markup percentage?\n";
                        cin >>mPrc;
                        while (mPrc<=0){
                            cout << "\nPlease enter the item's CORRECT markup percentage:\n";
                            cin >> mPrc;
                        }
                        cout << "The items retail price is $" << calculateRetail(wPrc, mPrc)<< ".\n";
                        cout << "\n\n\n\n";
               
                        break;
            }
            case 2:{  
                                        /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas
                         * Problem 3.13:
                         * An application of function floor is rounding a value to the nearest integer. Write a program that reades several numbers and uses the preceding statement to roung each of these numbers to the nearest integer. For each number processed, print both the original number and the rounded number. 
                         *
                         * Created on May 9, 2014, 3:18 PM
                         * Deitel_3rdEdBook_Chap3_Prob3.13
                         */
                        cout << "\nThis program rounds any value to the nearest integer.\n";// prompt
                        round();// call function that does everything
    
                        //Exit stage right
                        cout<<"\n\n\n\n";
                break;
            }
            case 3:{
                                        /* 
                         * File:   main.cpp
                         * Author: Saldana , Thomas
                         * Problem 3.21: Write a program that inputs a series of integers and passes them one at a time to
                         *               function even, which uses the modulus operator to determine whether and integer is even. 
                         *               The function should take an integer argument and return true if the integer is even and false 
                         *               otherwise. 
                         * Created on May 9, 2014, 3:43 PM
                         * Deitel3rdEdBook_Chap3_Prob3.21
                         */
                                               int num = 0;// Declaration of variables.
                        while ( num != -1){ // Sentinel 
                        cout << "\nEnter a number, and this program will find out if it is even or not(Enter -1 to END).\n";
                        cin>> num;
                        if ( even(num))// will tell the user if the number is even
                            cout << "The number "<< num << " is an even number.\n";
                        else // will tell the user that the number is odd
                            cout << "The number "<< num << " is an odd number.\n";
                        }
        
                              cout <<"\n\n\n\n";


                break;
            }
        case 4:{         /* 
                         * File:   main.cpp
                         * Author: saldana
                         * Problem 3.12 : A parking garage charges a $2.00 minimum fee to park for up to three hours. 
                         *                The garage charges and additional $.50 per hour for each hour or part thereof
                         *                in excess of three hours. The maximum charge for any given 24-hour period is $10.00. 
                         *                Assume that no hr parks for longer than 24 hours at a time. Write a program that will calculate 
                         *                and print th e parking charges for each of 3 customers who parked their hrs in this garage yesterday.
                         * Created on May 9, 2014, 2:25 PM
                         * Deitel_3rdEdBook_Chp3_Prob3.12
                         */
                                     int hr1,hr2,hr3;// Declaration of variables.
                            cout << "\nThis program calculates and prints the parking charges for 3 customers who parked their cars in a parking structure that charges $2.00 for three hours, ";
                            cout << "$0.50 after every hour after three, and $10.00 maximum for an entire day.\n";

                            cout << "\nHow many hours did car 1 one park in the garage?\n";// prompt
                            cin >> hr1;
                            cout << "\nHow many hours did car 2 two park in the garage?\n";// prompt
                            cin >> hr2;
                            cout << "\nHow many hours did car 3 three park in the garage?\n";// prompt
                            cin >> hr3;
                            cout << endl;
                            cout << "Car"; cout.width(10);    
                            cout << "Hours"; cout.width(10); 
                            cout << "Charge";  
                            cout << endl;
                            //Displays results
                            cout << "1"; cout.width(10);cout << hr1; cout.width(10); cout << "$" <<calcChrgs(hr1) << endl;
                            cout << "2"; cout.width(10);cout << hr2; cout.width(10); cout << "$" <<calcChrgs2(hr2)<< endl;
                            cout << "3"; cout.width(10);cout << hr3; cout.width(10); cout << "$" <<calcChrgs3(hr3)<< endl;

                                cout <<"\n\n\n\n ";
        
                break;
            }
            case 5:{ 
                /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas
                         * Problem 11: The profit from the sale of a stock can be calculated as follows:
                         *                   profit = ((NS * SP)- SC) - ((NS * PP) + PC)
                         *             where NS is the number of shares, SP is the sale price per share, SC is the sale commission
                                       paid, PP is the purchase price per share, and PC is the purchase commission paid. If the
                                       calculation yields a positive value, then the sale of the stock resulted in a proï¬�t. If the calculation 
                                       yields a negative number, then the sale resulted in a loss. 
                                       Write a function that accepts as arguments the number of shares, the purchase price per
                                       share, the purchase commission paid, the sale price per share, and the sale commission
                                       paid. The function should return the profit (or loss) from the sale of stock.
                         *             Demonstrate the function in a program that asks the user to enter the necessary data and
                                       displays the amount of the profit or loss.
                         *
                         * Created on May 8, 2014, 5:44 PM
                         */
                                         cout << "\nThis program determines the profit from the sale of your stock.\n";
                            float numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn;
                            int check;
                            cout << "\nEnter the number of shares:\n";
                            cin >> numShrs;
                            cout << "\nEnter the sale price per share:\n";
                            cin >> salPrice;
                            cout << "\nEnter the sale commission paid:\n";
                            cin >> salCmmsn;
                            cout << "\nEnter the purchase price per share:\n";
                            cin >> prchPrc;
                            cout << "\nEnter the purchase commission paid:\n";
                            cin >> prchCmmsn;
                            check = profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn);
                            if ((check)>0)
                            cout << "\nYour total profit is $" << profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn)<< "."<< endl;
                            if ((check)<=0)
                            cout << "\nYou did not make a profit. You lost  " << profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn) << " dollars." <<endl;

                            cout << "\n\n\n\n";

                break;
            }
            case 6:{
                /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas
                         * Prob3 :The following formula can be used to determine the distance an object falls due to gravity
                                  in a speciï¬�c time period:
                                            d= 1/2gt^2
                         *        The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the
                                  time in seconds that the object has been falling.
                         *        Write a function named fallingDistance that accepts an objectâ€™s falling time (in seconds) as an argument. 
                         *        The function should return the distance, in meters, that the object
                                  has fallen during that time interval. Write a program that demonstrates the function by
                                  calling it in a loop that passes the values 1 through 10 as arguments, and displays the
                                  return value.
                         * Created on May 8, 2014, 2:23 PM
                         */
                                                      float intrvl;//Declaration of variables
                            //Prompts user to take action 
                            cout<< "\nThis program determines the distance an object falls due to gravity in a specific time period.\n ";
                            cout << "\nPlease enter a number of seconds, and the computer will tell you how much distance an object falling would cover during that time.\n";
                            cin >> intrvl; // takes in the time
                            cout << "\nThankyou, if an object was to fall with respect to earths gravity for " << intrvl<< " seconds, it would cover a distance of " << fallingDistance(intrvl) << " meters.\n";
                            cout << "\nThis next part demonstrates the function.\n";
                            for (int i=1; i<=10; ++i)
                                cout << i << " seconds of fall = " << fallingDistance(i)<< " meters.\n" ;
                                                  cout <<"\n\n\n\n";



    
                break;
            }
            case 7:{
                                       /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas
                         * Problem 4:In physics, an object that is in motion is said to have kinetic energy. The following formula
                                     can be used to determine a moving objectâ€™s kinetic energy:
                                                 KE= .5mv^2
                                     The variables in the formula are as follows: KE is the kinetic energy in joules, m is the
                                     objectâ€™s mass in kilograms, and v is the objectâ€™s velocity in meters per second.Write a function 
                         *           named kineticEnergy that accepts an objectâ€™s mass (in kilograms) and
                                     velocity (in meters per second) as arguments. The function should return the amount of
                                     kinetic energy that the object has. Demonstrate the function by calling it in a program that
                                     asks the user to enter values for mass and velocity. 
                         *
                         * Created on May 8, 2014, 3:09 PM
                         */
                                                    int mass, vlcty;
                            cout << "\nThis program asks you to input the mass and the velocity of an object so that it can"
                                 << " calculate the kinetic energy of that object.\n ";
                            cout << "\nPlease enter the mass(kg): ";
                            cin >> mass;
                            cout << "\nNow, enter the velocity(m/s): ";
                            cin >> vlcty;
                            cout << "\n\nThank you, the objects kinetic energy is " << kineticEnergy(mass, vlcty)<<  "J.\n";

                                                    //Exit stage right.
                                                      cout <<"\n\n\n\n";
                break;
            }
            case 8:{
                        /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas
                         * Problem 5: Write a program that determines which of a companyâ€™s four divisions (Northeast, Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should include the
                                      following two functions, which are called by main.
                                           -double getSales() is passed the name of a division. It asks the user for a divisionâ€™s
                                            quarterly sales figure, validates the input, then returns it. It should be called once for
                                            each division.
                                           -void findHighest() is passed the four sales totals. It determines which is the largest and 
                                            prints the name of the high grossing division, along with its sales figure.
                                            Input Validation: Do not accept dollar amounts less than $0.00
                         *
                         * Created on May 8, 2014, 3:33 PM
                         */      
                            float NESales,SESales, NWSales, SWSales; // Declaration Of variables
                            //Promts user
                            cout << "\nThis program determines which  division of your company (Northeast, Southeast, Northwest, Southwest) had the greatest sales for the quarter.\n";
                            cout << "\nHow much sales did the Northeast divisions make this quarter?\n"; 
                            cin >> NESales;// Gets the NESales
                            while (NESales <=0){ // checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> NESales;
                            }
                            cout << "\nHow much sales did the Southeast divisions make this quarter?\n"; 
                            cin >> SESales;// Gets the SESales
                            while (SESales <=0){// checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> SESales;
                            }
                            cout << "\nHow much sales did the Northwest divisions make this quarter?\n"; 
                            cin >> NWSales;// Gets the NWSALES
                            while (NWSales <=0){// checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> NWSales;
                            }
                            cout << "\nHow much sales did the Southwest divisions make this quarter?\n"; 
                            cin >> SWSales;
                            while (SWSales <=0){// checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> SWSales;
                            }
                            findHighest(NESales,SESales, NWSales, SWSales); // this function will return the highest value
                            cout << "\nThey made $"; 
                            cout << getSales(NESales,SESales, NWSales, SWSales);// this function will return the amount the highest function made
                            cout << " in sales.\n";
                                                    cout <<"\n\n\n\n";
                break;
            }
            case 9:{
                                        /* 
                         * File:   main.cpp
                         * Author: saldana
                         * Problem 10 : Suppose you want to deposit a certain amount of money into a savings account, and then
                                        leave it alone to draw interest for the next 10 years. At the end of 10 years you would like
                                        to have $10,000 in the account. How much do you need to deposit today to make that
                                        happen? To ï¬�nd out you can use the following formula, which is known as the present
                                        value formula:
                                                         P= F/(1+r)^n
                                        The terms in the formula are as follows:
                                                        â€¢ P is the present value, or the amount that you need to deposit today. 
                                                        â€¢ F is the future value that you want in the account (in this case, $10,000). 
                                                        â€¢ r is the annual interest rate (expressed in decimal form, such as .042).
                                                        â€¢ n is the number of years that you plan to let the money sit in the account
                                        Write a program with a function named presentValue that performs this calculation. The function should accept the future value, annual interest rate
                                        and number of years as arguments. It should return the present value, which is the amount that you need to deposit
                                        today. Demonstrate the function in a program that lets the user experiment with different
                                        values for the formulaâ€™s terms.
                          Created on May 9, 2014, 11:02 AM
                          Gaddis_7thEdBook_Chap6_Prob10
                         */
                                       float ftrVal, annInt, numYears;
                            cout << "\nSuppose you want to deposit a certain amount of money into a savings account, and then "
                                        "leave it alone to draw interest for the next 10 years. At the end of 10 years you would like "
                                        "to have $10,000 in the account. How much do you need to deposit today to make that "
                                        "happen? To find out you can use the following program, which asks you to input how much money you would like to see in your  savings account"
                                    " after so many years.\n";
                            cout << "\n Lets begin...\n";
                            cout << "\nWhat is the annual interest rate on your savings account(%)?\n";
                            cin >> annInt;
                            annInt= annInt/100;
                            cout << "\nHow much money would you like to see in your savings account?\n";
                            cin >> ftrVal;
                            cout << "\nFor how many years are you willing to keep the $" << ftrVal<<
                                    " in your savings account?\n";
                            cin >> numYears;

                            cout << "\nThank you. You will have to deposit $";
                            cout <<  presentValue(ftrVal, annInt, numYears); 
                            cout << " into your savings account.\n ";
                                                                 cout <<"\n\n\n\n";
                                        break;
            }
             case 10:{
                                        /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas 
                         *   Problem 14:
                         *      Write a program that computes and displays the charges for a patientâ€™s hospital stay. First,
                                the program should ask if the patient was admitted as an in-patient or an out-patient. If the
                                patient was an in-patient the following data should be entered:
                                        â€¢ The number of days spent in the hospital
                                        â€¢ The daily rate
                                        â€¢ Charges for hospital services (lab tests, etc.)
                                        â€¢ Hospital medication charges.
                                If the patient was an out-patient the following data should be entered:
                                        â€¢ Charges for hospital services (lab tests, etc.)
                                        â€¢ Hospital medication charges.
                                The program should use two overloaded functions to calculate the total charges. One of
                                the functions should accept arguments for the in-patient data, while the other function
                                accepts arguments for out-patient data. Both functions should return the total charges.
                                Input Validation: Do not accept negative numbers for any information.

                         *
                         * Created on May 9, 2014, 12:46 PM
                         * Gaddis_7thEdBook_Chap6_Prob14
                         */
                                                     char choice, a, b, A, B;
                            choice = toupper(choice);

                            cout << "\nThis program computes and displays the charges for a patient's hospital stay.\n";
                            cout << "\nIn order for the program to compute the charges for the patient's hospital stay, "
                                 <<"the program needs to know the following:\n";
                            cout << "\nWas the patient admitted as an in-patient or an out-patient?\nType \"A\" if patient was admited as an in-patient.\n";
                            cout <<"Type \"B\" if the patient was admitted as an out-patient.\n";
                            cin >> choice;
                            int dys, rate, srvCsts, medCsts;
                            if ((choice == 'A')|| (choice== 'a')){
                                cout << "\nHow many days did the patient stay at the hospital?\n";
                                cin >> dys;
                                cout << "\nHow much does it cost to stay in the hospital one day?\n";
                                 cin >> rate ;
                                cout << "\nHow much does the hospital charge for its services (lab tests, etc.)?\n";
                                 cin >> srvCsts ;
                                cout << "\nHow much does the customer have to pay for his or her medications?\n";
                                 cin >> medCsts ;
                                 cout << "\nThank you. The total charge for this patients stay in the hospital is $"<< totalCharge(dys, rate, srvCsts, medCsts) << ".\n";
                            }

                            if ((choice == 'B')|| (choice == 'b')){
                               cout << "\nHow much does the hospital charge for its services (lab tests, etc.)?\n";
                               cin >> srvCsts;
                               cout << "\nHow much does the customer have to pay for his or her medications?\n";
                               cin >> medCsts;
                               cout << "\nThank you. The total charge for this patient is $"<< totalCharge(srvCsts, medCsts)<< ".\n";
                            }   
                            //Exit function main
                                                    cout << "\n\n\n\n";



                        //Exit Stage Right.
                break;
            }
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit the program
    return 0;
}

//Function Definitions For Case 1
float calculateRetail(float a, float  b){
    float  rPrc;
    rPrc = a*(b/100)+a;
    return rPrc;

}
//Function Definitions For Case 2
void round (void){
    float num =0, i;
    while (num != -1){
        cout << "\nEnter a number(Enter -1 to END):";
        cin >> num;
        i = floor(num+.5);
        
        cout << num << " rounded is: " << i << endl;;
        
    }
   
}
//Function Definitions For Case 3
bool even (int i){
    return !(i%2);
}
//Function Definitions For Case 4
float calcChrgs(float a){
    if (a <=3) //Checks if car parked less than 3 hours
        return 2.00; //returns a value to the caller function
    if (a >3 && a<=16) //checks to see if  car has reached the limit of 10 hrs
    return 2.00+ (a-3)*.50;//returns a value to the caller function
    if (a>16)// checks for anything above the limit
        return 10.00;//returns a value to the caller function
} float calcChrgs2(float b){
    if (b <=3)//Checks if car parked less than 3 hours
        return 2.00;//returns a value to the caller function
    if (b >3 && b<=16)//checks to see if  car has reached the limit of 10 hrs
    return 2.00+ (b-3)*.50;//returns a value to the caller function
    if (b>16)//checks for anything above the limit
        return 10.00;//returns a value to the caller function
    }
float calcChrgs3(float c){
    if (c <=3)
        return 2.00;//returns a value to the caller function
    if (c >3 && c<=16)
    return 2.00+ (c-3)*.50;//returns a value to the caller function
    if (c>16)
        return 10.00;//returns a value to the caller function
}
//Function Definitions For Case 5
float profit(float a, float b, float c, float d, float e){
    float profit;
    profit = ( (a*b) -c ) - ( (a*d) + e );
            return profit;
}
//Function Definitions For Case 6
float fallingDistance(float secs){
    return (secs)*(secs)*(.5)*(9.8);
}

//Function Definitions For Case 7
float kineticEnergy(float x, float y){
    return .5 * x * y * y;
}

//Function Definitions For Case 8
float getSales(float a, float b, float c, float d ){
    int maxSales;
    maxSales = a;
    if ( b > maxSales )
        maxSales=b;
    if (c > maxSales)
        maxSales = c;
    if ( d > maxSales )
        maxSales = d;
    return maxSales;
}
void findHighest(float a, float b, float c, float d){
     
    if ( a>b && a> c && a> d)
        cout << "\nThe North East division had the greatest sales for the quarter.\n";
     if ( b>a && b> c && b> d)
        cout << "\nThe SouthEast division had the greatest sales for the quarter.\n";
     if ( c>a && c> b && c> d)
        cout << "\nThe NorthWest division had the greatest sales for the quarter.\n";
      if ( d>a && d> b && d> c)
        cout << "\nThe SouthWest division had the greatest sales for the quarter.\n";
     

}

//Function Definitions For Case 9
float presentValue(float a, float b, float c ){

    int prsntVal;

    
    prsntVal = a/pow((1+b),c) ;
    
    return prsntVal; 
}
//Function Definitions For Case 10
int totalCharge(int a, int b, int c, int d){
   int  totChrg;
    totChrg = a*(b+c+d);
    return totChrg;
}
float totalCharge(float x, float y){
    float totChrg;
    totChrg = x+y; 
    return totChrg;
}