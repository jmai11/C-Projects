//  Program Name:            Population
//  Program Description:     This program allows a user to calculate the increase in a population size with a n number of days
//                           given.
//
//
//  Programmer Name:         John Mai
//  Date:                    March 14, 2016
//

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes

int main()
{
    int days;                        //days population multiplies
    float populationSize,            //size of starting population
          populationIncrease,        //percentage of population increase by each day
          populationFinal;           //final count for population after increase each day.
    
    
    // ask for starting population size
    cout << "What is the starting number of the population? \n";
    cin >> populationSize;
    
    //input validates that starting population size must be larger than 2
    while (populationSize < 2)
    {
    
        cout << "Invalid. The starting population cannot be less than 2. Please enter a valid number:";
        cin >> populationSize;
        
    }
    
    
    //ask for number of days population will multiply
    cout << "What is the number of days the population will multiply?";
    cin >> days;
    
    
    //input validates that number of days must be larger than 1
    while ( days < 1)
    {
        cout << "Invalid. The number of days cannot be less than 1. Please enter a valid number:";
        cin >> days;
    }
    
    
    //ask for percentage of poulation increase each day
    cout << "What is the average daily increase of the population in percentage?";
    cin >> populationIncrease;
    
    
    //input validates that percentage cannot be a negative number
    while (populationIncrease < 0)
    {
        cout << "Invalid. The daily average percentage cannot be negative. Please enter a valid number:";
        cin >> populationIncrease;
    }
    
    //set two places after decimal
    cout << setprecision(2)<< fixed;
    
    //for loop to calculate increase per day
    for (int d=1; d<= days; d++)
    {
        
        //calculates population increase
        populationFinal= ((populationIncrease/100) * populationSize) + populationSize;
        
        //displays the population increase each day given
        cout << "The population for day " << d << " is " << populationFinal << endl;
        
        //final population size is the the starting size for the next day
        populationSize= populationFinal;
    }
        

    return 0;
}
