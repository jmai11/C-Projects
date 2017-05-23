//
//  Program Name:                Interest Earned
//  Program Description:         This program allows users to calculate the interest earned when inputting the Principle,
//                               interest rate and times compounded during the year.
//
//  Programmer Name:             John Mai
//  Date:                        February 22, 2016
//

#include <iostream>
#include <iomanip>  //to use stream manipulators
#include <cmath>    //to use power functions
#include <string>   //to use strings

using namespace std;

//function prototypes

int main()
{
    int    T;           //amount of times compounded in a year
   
    double amount,      //total amount calculated after interest rate
           principle,   //amount started with in the account
           percent,     //the percentage of interest
           rate,        //the annual interest rate
           interest;    //the amount of interest that was collected
    
    
    
   
    //collect input from users on principle, interest rate and times compounded a year.
    
    cout << "What is the Principle in the account? \n";
    cin >> principle;
    
    cout << "What is the interest rate? \n";
    cin >> percent;
    
    cout << "What is the number of times interest is compounded a year? \n";
    cin >> T;
    
    
    //calculates the rate from the interest given
    rate= percent/100;
    
    //calculates the final balance
    amount= principle * pow((1 +(rate/T)),T);
    
    //calculates the interest amount collected
    interest= amount - principle;
    
    
    //displays results
    
    cout << "Interest Rate:" << right << setw(13) << showpoint << setprecision(3)<< percent << fixed << "%" << endl;
    
    cout << "Times Compounded:" << right << setw(10) << T << setprecision(2) << endl;
    
    cout << "Principle:        $" << right << setw(8) << principle << setprecision(2) << showpoint << fixed << endl;

    cout << "Interest:         $" << right << setw(8) << interest << setprecision(2) << fixed << endl;
    
    cout << "Final Balance:    $" << right << setw(8)  << amount << setprecision(2) << fixed << endl;

    
    return 0;
}
