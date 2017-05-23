//
// Program Name:             Total and Average Rainfall
// Program Description:      This program allows users to calculate total and average rainfall over a given set of data.
//
// Programmer:               John Mai
// Date:                     March 15, 2016
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;



int main()
{
    
    
    ifstream inputFile;         //input file
    string startMonth,          //start of the month data
           endMonth;            //end of the month data
    
    double month=0,              //number of months
           monthlyRainfall,     //number of monthly rainfall
           avgRainfall,         //average rainfall calculated
           totalRainfall= 0.0;  //total rainfall calculated
    
    
    //opening rainfall txt file
    inputFile.open("rainfall.txt");
    
    inputFile >> startMonth;
    
    inputFile >> endMonth;
    
    
    //validate if file is being read
    if (inputFile)
    
    {
    
        //calculate total rainfall
        while (inputFile >> monthlyRainfall)
    
        
        totalRainfall += monthlyRainfall;
        
        
        
       //calculate average rainfall with given parameters
        for( month=0; month<=4; month++)
        
        {

            avgRainfall = totalRainfall/month;
        }
        
        
        inputFile.close();
    
    }
    
    //if file cant be read
    
    else
    {
    
        cout << "Error opening the file. \n";
        
    }
            
   
    
    //display result
    cout << "During the months of " << startMonth << "-" << endMonth << " the total rainfall was " << totalRainfall << " inches and the average monthly rainfall was " << setprecision(2) << fixed << avgRainfall << " inches." << endl;
    
    
    
    return 0;
}
