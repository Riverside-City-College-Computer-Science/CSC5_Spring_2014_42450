/* 
 * File:   main.cpp
 * Author: Ezra Guinmapang
 *
 * Created on April 4, 2014, 8:46 PM
 */

//Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global variables and constants
char mChoice[3];
const float CONV = 0.264179;

//Function prototypes
//Main functions
int Prob1();
int Prob2();
int Prob4();
int Prob5();
int Prob6();
int Prob7();
int Prob13();
int Prob14();
int Prob15();
int Prob16();
//Problem 1 functions
float GetMPG(float, float);
//Problem 2 functions
float GetMPG(float, float);
float GetMiles();
float GetLiters();
void CompMPG(float, float);
//Problem 4 functions
double GetInf(float, float); 
//Problem 5 functions
double GetInf(float, float); 
float CostInc(double, float); 
//Problem 6 functions
float GetIntDue(float &, float, int);
//Problem 7 functions
float MassCon(float massx, string mUnitx); //Convert the mass, if necessary
float DistCon(float dx, string dUnitx); //Convert the distance, if necessary
float Grav(float mass1, float mass2, float d); //Calculate the Gravitational force
//Problem 13 functions
string numWd1(short); //List the word equivalent of numbers
string numWd2(short); //List the alternate word equivalent of some of the numbers
void SingIt(short,short); //Output the lyrics of the song
//Problem 14 functions
int iFacIdx(char); //returns Intensity values
float R_Cal(float); //Calculates Basal Metabolic Rate
float R_Cal(float,int,int); //Calculates Physical Activity Requirement
float Cals(float, float); //Calculates Total Caloric Requirement
float numServ(float, float); //Calculates number of servings to reach Total Caloric goal
//Problem 15 functions
float Ins_Mon(); //Reads in and valudates the input
float SetPR(); //Sets the price of a Twinkie
float Calc(float); //Overloaded function - Calculates the current amount
float Calc(float,float); //Overloaded function - Calculates the change due
bool ChkAmt(float); //Checks the amount if it is enough to pruchase Twinkie
void Dispens(float); //Output the Twinkie or cancels the transaction and returns the money
//Problem 16 functions
bool Validate(int, int, char[]); //Validates input
int BendSTC(int, int, int, int, char, char); //Calculates the time difference in minutes
//Execution begins HERE
int main(int argc, char** argv) {
        cout << "**************************************************\n";
        cout << "**        CSC-5: C++ ASSIGNMENT Savitch Ch 4    **\n";
        cout << "**                 PROGRAM MENU                 **\n";
        cout << "**           NAME: EZRA P. GUINMAPANG           **\n";
        cout << "**                SECTION: 42450                **\n";
        cout << "**           PROFESSOR: DR. MARK LEHR           **\n";
        cout << "**************************************************\n";
    do{
        cout << "**************************************************\n";
        cout << "**          AVAILABLE SOLUTIONS TO RUN:         **\n";
        cout << "**                                              **\n";
        cout << "**            1. Solution, Problem 1            **\n";
        cout << "**            2. Solution, Problem 2            **\n";
        cout << "**            3. Solution, Problem 4            **\n";
        cout << "**            4. Solution, Problem 5            **\n";
        cout << "**            5. Solution, Problem 6            **\n";
        cout << "**            6. Solution, Problem 7            **\n";
        cout << "**            7. Solution, Problem 13           **\n";
        cout << "**            8. Solution, Problem 14           **\n";
        cout << "**            9. Solution, Problem 15           **\n";
        cout << "**            10. Solution, Problem 16          **\n";
        cout << "**************************************************\n";
        cout << "\nWhich program would you like to run? ";
        cout << "Enter the number of the Solution you wish to run: ";
        cin >> mChoice;
        switch(mChoice[0]){
            case '1': if (mChoice[1] == '0') Prob16();
                      else Prob1();
                      break;
            case '2': Prob2(); break;
            case '3': Prob4(); break;
            case '4': Prob5(); break;
            case '5': Prob6(); break;
            case '6': Prob7(); break;
            case '7': Prob13(); break;
            case '8': Prob14(); break;
            case '9': Prob15(); break;
            default: cout << "Invalid choice!\n"; break;
        }
        cout << "Do you wish to run another program(Y/N)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'Y' || mChoice[0] == 'y');
    //Execution ends HERE
    cout << "Have a Nice Day! Hope to see you again soon!!\n";
    return 0;
}
//Function definitions
//Savitch, Chapter 4, Problem 1
//Execution begins HERE
int Prob1(){
    //Declare variables
    float mpg, t_miles, t_liters;
    do{
        //Input values
        cout << "Enter the total miles traveled: ";
        cin >> t_miles;
        cout << "Enter the total liters consumed: ";
        cin >> t_liters;
        mpg = GetMPG(t_miles, t_liters);
        cout << "The miles per gallon is: " << mpg << endl;
        cout << "Again (y/n)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'y'||mChoice[0] == 'Y');
    //Execution ends HERE
    return 0;
}
//Problem 1 Functions
//Get the miles per gallon
float GetMPG(float t_miles, float t_liters){
    return t_miles/(t_liters * CONV);
}
//Savitch, Chapter 4, Problem 2
//Execution begins HERE
int Prob2(){
    //Declare variables
    float mpg1, mpg2, mi_car1, mi_car2, l_car1, l_car2;
    do{
        //Input values
        cout << "Compare the mileage of two cars.\n";
        cout << "Enter the information for the first car.\n";
        mi_car1 = GetMiles();
        l_car1 = GetLiters();
        cout << "Enter the information for the second car.\n";
        mi_car2 = GetMiles();
        l_car2 = GetLiters();
        mpg1 = GetMPG(mi_car1, l_car1);
        mpg2 = GetMPG(mi_car2, l_car2);
        //Output the results
        cout << "The mpg for Car 1 is: " << fixed << showpoint << setprecision(2) << mpg1 << "MPG\n";
        cout << "The mpg for Car 2 is: " << fixed << showpoint << setprecision(2) << mpg2 << "MPG\n";
        CompMPG(mpg1, mpg2);
        cout << "Again (y/n)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'y'||mChoice[0] == 'Y');
    //Execution ends HERE
    return 0;
}
//Problem 1/Problem 2 functions
//Get the miles
float GetMiles(){
    float t_miles;
    cout << "Enter the total miles traveled: ";
    cin >> t_miles;
    return t_miles;
}
//Get the liters consumed
float GetLiters(){
    float t_liters;
    cout << "Enter the total liters consumed: ";
    cin >> t_liters;
    return t_liters;
}
//Compare the miles per gallon
void CompMPG(float mpg1, float mpg2){
    if(mpg1 > mpg2) cout << "Car 1 has better fuel efficiency!";
    else if(mpg1 < mpg2) cout << "Car 2 has better fuel efficiency!";
    else cout << "Both cars have the same fuel efficiency!";
}
//Savitch, Chapter 4, Problem 4
//Execution begins HERE
int Prob4(){
   //Declare variables
    double InfRate;
    float p_Price, c_Price;
    do{
        //Input values
        cout << "Current price of item: ";
        cin >> c_Price;
        cout << "Price of item last year: ";
        cin >> p_Price;
        //Calculate the Inflation Rate
        InfRate = GetInf(p_Price, c_Price);
        //Output results
        cout << "Rate of Inflation: " << fixed << showpoint << setprecision(2) << InfRate << "%\n";
        cout << "Again (y/n)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'y'||mChoice[0] == 'Y');
    //Execution ends HERE
    return 0;
}
//Problem 4 functions
//Get the rate of inflation
double GetInf(float p_Price, float c_Price){
    return ((p_Price - c_Price)/p_Price) * 100.00f;
}
//Savitch, Chapter 4, Problem 5
//Execution begins HERE
int Prob5(){
    //Declare variables
    double InfRate;
    float p_Price, c_Price, p_Inc;
    //Input values
    do{
        cout << "Current price of item: ";
        cin >> c_Price;
        cout << "Price of item last year: ";
        cin >> p_Price;
        //Calculate the Inflation Rate
        InfRate = GetInf(p_Price, c_Price);
        p_Inc = CostInc(c_Price, InfRate);
        //Output results
        cout << "Rate of Inflation: " << fixed << showpoint << setprecision(2) << InfRate << "%\n";
        cout << "The increase in price will be $" << fixed << showpoint << setprecision(2) << p_Inc << endl;
        cout << "After one year, the price of the item will be $" << fixed << showpoint << setprecision(2) << c_Price + p_Inc << endl;
        cout << "Again (y/n)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'y'||mChoice[0] == 'Y');
    //Execution ends HERE
    return 0;
}
//Problem 5 functions
//Get the cost increase
float CostInc(double i_Rate, float c_Price){
    return c_Price * (i_Rate/100.0f);
}
//Savitch, Chapter 4, Problem 6
//Execution begins HERE
int Prob6(){
    float p_bal, bal, mrate, t_Interest;
    int term;
    const float PERCENT = 100.0f;
    do{
        cout << "Enter Current balance: ";
        cin >> p_bal;
        bal = p_bal;
        cout << "Enter Interest Rate in percent: ";
        cin >> mrate;
        mrate /= PERCENT;
        cout << "Enter Number of Months to Pay: ";
        cin >> term;
        t_Interest = GetIntDue(bal, mrate, term);
        cout << fixed << showpoint << setprecision(2);
        cout << "Previous Balance:" << setw(5) << "$" << p_bal << endl;
        cout << "Total Interest Due:" << setw(3) << "$" << t_Interest << endl;
        cout << "End-of-Term Balance:" << setw(2) << "$" <<  bal << endl;
        cout << "Again (y/n)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'y'||mChoice[0] == 'Y');
    //Execution ends HERE
    return 0;
}
//Problem 6 functions
//Get Total Interest Due
float GetIntDue(float &bal, float mrate, int term){
    float intdue, t_Interest = 0;
    while(term > 0){
        intdue = bal * mrate;
        bal +=intdue;
        t_Interest += intdue;
        term--;
    }
    return t_Interest;
}
//Savitch, Chapter 4, Problem 7
//Execution begins HERE
int Prob7(){
    //Declare variables
    float mass1, mass2, d, f_Grav;
    string mUnit1, mUnit2, dUnit;
    char Repeat;
    do{
        cout << "I calculate the gravitational attraction between 2 objects "
             << "across the distance between them.\n";
        //First object - mass
        cout << "\nEnter the mass of the first object including the unit of mass used: ";
        cin >> mass1 >> setw(3) >> mUnit1;
        while(mass1 < 0 ){
            cout << "\nNegative mass is a hypothetical concept! Try again!\n";
            cout << "Enter the mass of the first object: ";
            cin >> mass1;
        }
        while(mUnit1 != "lb" && mUnit1 != "g" && mUnit1 != "T"){
            cout << "\nI am limited to only 3 units of mass: grams(g), pounds(lb), or tons(T)\n";
            cout << "Please choose the appropriate unit of mass and try again.\n";
            cout << "Enter the unit of mass: ";
            cin >> setw(3) >> mUnit1;
        }
        //Second object - mass
        cout << "\nEnter the mass of the second object including the unit of mass used: ";
        cin >> mass2 >> setw(3) >> mUnit2;
        while(mass2 < 0 ){
            cout << "Negative mass is a hypothetical concept! Try again!\n";
            cout << "Enter the mass of the second object: ";
            cin >> mass2;
        }
        while(mUnit2 != "lb" && mUnit2 != "g" && mUnit2 != "T"){
            cout << "\nI am limited to only 3 units of mass: grams(g), pounds(lb), or tons(T)\n";
            cout << "Please choose the appropriate unit of mass and try again.\n";
            cout << "Enter the unit of mass: ";
            cin >> setw(3) >> mUnit2;
        }
        //Distance between the two objects
        cout << "\nEnter the distance between the two objects including the unit of distance: ";
        cin >> d >> setw(3) >> dUnit;
        while(d < 0 ){
            cout << "\nNegative distance is a vector concept! I accept only scalar quantities. Try again!\n";
            cout << "Enter the distance between the objects: ";
            cin >> d >> setw(3) >> dUnit;
        }
        while(dUnit != "cm" && dUnit != "ft" && dUnit != "mi"){
            cout << "\nI am limited to only 3 units of distance: centimeters(cm), miles(mi), or feet(ft)\n";
            cout << "Please choose the appropriate unit of mass and try again.\n";
            cout << "Enter the unit of mass: ";
            cin >> setw(3) >> dUnit;
        }
        cout << "\nMass of Object A = " << mass1 << " " << mUnit1 << "\n";
        cout << "Mass of Object B = " << mass2 << " " << mUnit2 << "\n";
        cout << "Distance between Object A and Object B = " << d << " " << dUnit << "\n";
        //Convert values if necessary
        mass1 = MassCon(mass1,mUnit1);
        mass2 = MassCon(mass2,mUnit2);
        d = DistCon(d,dUnit);
        // Compute the Gravitational Force
        f_Grav = Grav(mass1,mass2,d);
        //Output the gravitational force
        cout << "\nThe gravitational force F = " << f_Grav << " dynes(g^1*cm/sec^2).\n";
        cout << "\nAgain(Y/N)? ";
        cin >> Repeat;
    }
    while(Repeat == 'Y' || Repeat == 'y');
    //Execution ends HERE
    return 0;
}
//Problem 7 functions
float MassCon(float massx, string mUnitx){
    if(mUnitx=="lb"){
        float mConv=4.53592e2f;
        massx *= mConv;
        return massx;
    }
    else if(mUnitx=="T"){
        float mConv=1.0e6f;
        massx *= mConv;
        return massx;
    }
    else if(mUnitx=="g"){
        return massx;
    }
}
float DistCon(float dx, string dUnitx){
    if(dUnitx=="ft"){
        float dConv=3.048e1f;
        dx *= dConv;
        return dx;
    }
    else if(dUnitx=="mi"){
        float dConv=1.60934e5f;
        dx *= dConv;
        return dx;
    }
    else if(dUnitx=="cm"){
        return dx;
    }
}
float Grav(float mass1, float mass2, float d){
    const float G = 6.673e-8f; // in cm^3/(g*sec^2)
    float grav_F;
    grav_F = (G*mass1*mass2)/(d*d);
    return grav_F;
}
//Savitch, Chapter 4, Problem 13
//Execution begins HERE
int Prob13(){
    //Declare variables
    short Ctr, tens, ones;
    do{
        cout << "Enter the number of Beer bottles: ";
        cin >> Ctr;
        cout << "LET'S SING \"NINETY-NINE BOTTLES OF BEER ON THE WALL!!!\"\n\n";
        do{
            tens = Ctr/10;
            ones = Ctr%10;
            SingIt(tens,ones);
            if(tens == 0 && ones == 1) cout << " BOTTLE OF BEER ON THE WALL,\n";
            else cout << " BOTTLES OF BEER ON THE WALL,\n";
            SingIt(tens,ones);
            if(tens == 0 && ones == 1) cout << " BOTTLE OF BEER!\n";
            else cout << " BOTTLES OF BEER!\n";
            cout << "Take one down & pass it around,\n";
            Ctr--;
            tens = Ctr/10;
            ones = Ctr%10;
            SingIt(tens,ones);
            if(tens == 0 && ones == 1) cout << " BOTTLE OF BEER ON THE WALL!!!\n\n";
            else cout << " BOTTLES OF BEER ON THE WALL!!!\n\n";
        }while(Ctr > 0);
        cout << "Wanna sing again(Y/N)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'Y' || mChoice[0] == 'y');
    //Execution ends HERE
    return 0;
}
//Problem 13 functions
string numWd1(short digit){
    switch(digit){
        case 9: return "NINE";
        case 8: return "EIGHT";
        case 7: return "SEVEN";
        case 6: return "SIX";
        case 5: return "FIVE";
        case 4: return "FOUR";
        case 3: return "THREE";
        case 2: return "TWO";
        case 1: return "ONE";
        default: return "";
    }
}
string numWd2(short digit){
    switch(digit){
        case 5: return "FIF";
        case 4: return "FOUR";
        case 3: return "THIR";
        case 2: return "TWEN";
        case 1: return "TEN";
        default: return "";
    }
}
void SingIt(short tensP, short onesP){
    if(tensP > 8 || (tensP < 8 && tensP > 5)){
        if(onesP == 0) cout << numWd1(tensP) << "TY";
        else cout << numWd1(tensP) << "TY-" << numWd1(onesP);
    }
    if(tensP == 8){
        if(onesP == 0) cout << numWd1(tensP) << "Y";
        else cout << numWd1(tensP) << "Y-" << numWd1(onesP);
    }
    if(tensP <= 5 && tensP > 1){
        if(onesP == 0){
            if(tensP == 4) cout << "FORTY";
            else cout << numWd2(tensP) << "TY";
        }
        else if(tensP == 4 && onesP != 0) cout << "FORTY-" << numWd1(onesP);
        else cout << numWd2(tensP) << "TY-" << numWd1(onesP);
    }
    if(tensP == 1){
        if(onesP > 5) cout << numWd1(onesP) << "TEEN";
        else if(onesP == 2) cout << "TWELVE";
        else if(onesP == 1) cout << "ELEVEN";
        else if(onesP == 0) cout << "TEN";
        else cout << numWd2(onesP) << "TEEN";
    }
    if(tensP == 0){
        if(onesP != 0) cout << numWd1(onesP);
        else cout << "ZERO";
    }
}
//Savitch, Chapter 4, Problem 14
//Execution begins HERE
int Prob14(){
    //Declare variables
    string food;
    do{
        float wt, r_Cal, f_Cal, T_Cal;
        int t, I_fac, choice;
        //Input variables
        cout << "Enter your weight in pounds: ";
        cin >> wt;
        f_Cal = R_Cal(wt);
        cout << "Your Basal Metabolic Rate requirement is " << fixed << showpoint << setprecision(2)
             << f_Cal << " calories.\n";
        cout << "\nNow enter your choice of activity: " << endl;
        cout << setw(4) << "1. Running 10 mph\n";
        cout << setw(4) << "2. Running 6 mph\n";
        cout << setw(4) << "3. Basketball\n";
        cout << setw(4) << "4. Walking 1 mph\n";
        cin >> choice;
        I_fac = iFacIdx(choice);
        cout << "How much time in minutes do you spend on your activity of choice? ";
        cin >> t;
        r_Cal = R_Cal(wt,I_fac,t);
        T_Cal = Cals(r_Cal, f_Cal);
        cout << "Your Physical Activity requirement is " << r_Cal << " calories.\n";
        cout << "Your Total Caloric Requirement is " << T_Cal << " calories.\n";
        cout << "What is your favorite food and how many calories in one serving?\n";
        cout << "Enter your favorite food and calories, separated by a space. ";
        cin >> food >> f_Cal;
        cout << "Based on your information, you need " << numServ(Cals(r_Cal, T_Cal), f_Cal)
             << " servings of " << food << " to\n";
        cout << "reach your Total Caloric Requirement.\n";
        cout << "Again(Y/N? ";
        cin >> mChoice;
    }while(mChoice[0] == 'Y' || mChoice[0] == 'y');
    //Execution ends HERE
    return 0;
}
//Problem 14 functions
int iFacIdx(char choice){
    switch(choice){
        case 1: return 17;
        case 2: return 10;
        case 3: return 8;
        case 4: return 1;
    }
}
float R_Cal(float lbs){
    const float BMR_C = 70.0;
    lbs /= 2.2;
    return BMR_C * (pow(lbs, 0.756));
}
float R_Cal(float lbs, int Intens, int mins){
    const float PA_C = 0.0385;
    return PA_C * Intens * lbs * mins;
}
float Cals(float rCal, float tCal){
    return tCal += rCal;
}
float numServ(float tCal, float fCal){
    return tCal/(fCal*0.9); // fCal*0.9 is derived from formula for Digestion Caloric Req.
                            // D = fCal*0.1; fCal-D == fCal-(fCal*0.1) == fCal*(1-0.1) == fCal*0.9
}
//Savitch, Chapter 4, Problem 15
//Execution begins HERE
int Prob15(){
    //Declare variables
    char Buy, Repeat;
    do{
        cout << "****************************************\n";
        cout << "I" << setw(40) << "I\n";
        cout << "I" << " *** WELCOME TO TWINKIE CRUNCH!!! *** " << "I\n";
        cout << "I" << setw(40) << "I\n";
        cout << "****************************************\n\n";
        cout << "If you would like a DELICIOUS Fried Twinkie,\n";
        float money, tMoney = 0;
        bool isEnuff = false;
        while(!isEnuff){
            money = Ins_Mon();
            tMoney = Calc(money, tMoney);
            isEnuff = ChkAmt(tMoney);
        }
        cout << "\nWould you like to purchase a Twinkie(Y/N)? ";
        cin >> Buy;
            if(Buy == 'Y' || Buy == 'y'){
                Dispens(tMoney);
            }
            else{
                cout << "Returning current amount: $" << fixed << showpoint 
                     << setprecision(2) << tMoney << endl;
                cout << "Thank you for choosing Twinkie Crunch. Goodbye!\n";
            }
        cout << "\nAgain(Y/N)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'Y' || mChoice[0] == 'y');
    //Execution ends HERE
    return 0;
}
//Problem 15 functions
float Ins_Mon(){
    float coin = 0;
    int cents, pennies;
    while(coin == 0){
        cout << "Please insert cash.\n";
        cin >> coin;
        cents = (coin - static_cast<int>(coin) + .001)*100;
        if((cents % 5) !=0){
            pennies = cents % 5;
            cout << "I don't acccept pennies: $" << fixed << showpoint 
                 << setprecision(2) << static_cast<float>(pennies)/100
                 << " returned.\n";
            return coin - static_cast<float>(pennies)/100;
        }
        else{
            cout << "No pennies to return.\n";
            return coin;
        }
    }
}
float SetPR(){
    const float PRICE = 3.50;
    return PRICE;
}
float Calc(float coin, float tCoin){
    tCoin += coin;
    cout << "Current Balance: $" << fixed << showpoint << setprecision(2)<< tCoin << endl;
    return tCoin;
}
float Calc(float tCoin){
    float PRICE = SetPR();
    tCoin -= PRICE;
    return tCoin;
}
bool ChkAmt(float tCoin){
    float PRICE = SetPR();
    if(tCoin >= PRICE) return true;
    else return false;
}
void Dispens(float tCoin){
    float PRICE = SetPR();
    if(tCoin > PRICE){
        cout << "\nTWINKIE HEAVEN!!!\n";
        cout << "Thank you for your purchase!\n\n";
        cout << "Dispensing Change: $" << fixed << showpoint << setprecision(2) << Calc(tCoin) << endl;
    }
    else{
        cout << "\nTWINKIE HEAVEN!!!\n";
        cout << "Thank you for your purchase!\n\n";
        cout << "Exact amount given, no change due.\n";
    }
}
//Savitch, Chapter 4, Problem 16
//Execution begins HERE
int Prob16(){
    //Declare variables
    bool isValid = true;
    char Repeat;
    do{
        int Hr1, Min1, Hr2, Min2;
        char colon[2], toD1[3], toD2[3];
        cout << "Welcome to the TIME MACHINE!!!\n";
        cout << "Let's go forward in time!!!\n";
        do{
            cout << "Enter the current time in (HR:MM AM/PM) format: ";
            cin >> setw(2) >> Hr1 >> setw(2) >> colon >> setw(2) >> Min1 >> setw(3) >> toD1;
            isValid = Validate(Hr1, Min1, toD1);
                cin.clear();             //clear buffer in case
                cin.ignore(10000, '\n'); // there is an error
        }while(!isValid);
        cout << "The current time is " << Hr1 << colon;
        if (Min1 < 10) cout << "0" << Min1 << " " << toD1 << ".\n";
        else cout << Min1 << " " << toD1 << ".\n";
        do{
            cout << "Now enter a future time you wish to jump to: ";
            cin >> setw(3) >> Hr2 >> setw(2) >> colon >> setw(2) >> Min2 >> setw(3) >> toD2;
            isValid = Validate(Hr2, Min2, toD2);
            cin.clear();             //clear buffer in case
            cin.ignore(10000, '\n'); // there is an error
        }while(!isValid);
        for(int Ctr = 5; Ctr > 0; Ctr--){
            cout << "Bending the Space-Time Continuum...\n";
        }
        cout << "\nWelcome to the Future!!!\n";
        cout << "\nThe time is now " << Hr2 << colon;
        if (Min2 < 10) cout << "0" << Min2 << " " << toD2 << ".\n";
        else cout << Min2 << " " << toD2 << ".\n";
        cout << "You have traveled " << BendSTC(Hr1, Hr2, Min1, Min2, toD1[0], toD2[0])
             << " minutes into the future!!! Enjoy your stay.\n";
        cout << "Unfortunately, you'll have to find your own way back. Good luck!\n\n";
        cout << "Again(Y/N)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'Y' || mChoice[0] == 'y');
    //Execution ends HERE
    return 0;
}
//Problem 16 functions
bool Validate(int Hour, int Minute, char ToD[3]){
    if(Hour <= 12 && Hour != 0){
        if(Minute < 60){
            if(ToD[0] == 'A'||ToD[0] == 'a'||ToD[0] == 'P'||ToD[0] == 'p'){
                if(ToD[1] == 'M'||ToD[1] == 'm') return true;
                else{
                    cout << "Invalid time! Try again.\n";
                    return false;
                }
            }
            else{
                cout << "Invalid time! Try again.\n";
                return false;
            }
        }
        else{
            cout << "Invalid time! Try again.\n";
            return false;
        }
    }
    else{
        cout << "Invalid time! Try again.\n";
        return false;
    }
}
int BendSTC(int Hour1, int Hour2, int Minutes1, int Minutes2, char ToD1, char ToD2){
    switch(ToD1){
        case 'A':{
            if(Hour1 == 12) Hour1 = 24;
            else Hour1 = Hour1;
            break;
        }
        case 'P':{
            if(Hour1 == 12) Hour1 = Hour1;
            else Hour1 += 12;
            break;
        }
        case 'a':{
            if(Hour1 == 12) Hour1 = 24;
            else Hour1 = Hour1;
            ToD1 = 'A';
            break;
        }
        case 'p':{
            if(Hour1 == 12) Hour1 = Hour1;
            else Hour1 += 12;
            ToD1 = 'P';
            break;
        }
    }
    switch(ToD2){
        case 'A':{
            if(Hour2 == 12) Hour2 = 24;
            else Hour2 = Hour2;
            break;
        }
        case 'P':{
            if(Hour2 == 12) Hour2 = Hour2;
            else Hour2 += 12;
            break;
        }
        case 'a':{
            if(Hour2 == 12) Hour2 = 24;
            else Hour2 = Hour2;
            ToD2 = 'A';
            break;
        }
        case 'p':{
            if(Hour2 == 12) Hour2 = Hour2;
            else Hour2 += 12;
            ToD2 = 'P';
            break;
        }
    }
    if(Hour2 == Hour1 && Minutes2 == Minutes1 && ToD2 == ToD1){
        return (((Hour2*60)+Minutes2) - ((Hour1*60)+Minutes1))+1440;
    }
    if(Hour2 < Hour1 && ToD2 == 'P' && ToD1 == 'P'){
        return (((Hour2*60)+Minutes2) - ((Hour1*60)+Minutes1))+1440;
    }   
    else if(Hour2 < Hour1 && ToD2 != ToD1){
        return (((Hour2*60)+Minutes2) - ((Hour1*60)+Minutes1))+1440;
    }
    else return (((Hour2*60)+Minutes2) - ((Hour1*60)+Minutes1));
}