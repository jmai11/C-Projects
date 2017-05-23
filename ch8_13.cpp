//
//  Program Name:                   Array of Payroll Objects
//  Program Description:            This program allows user to calculate gross income of each employee given from the data
//                                  table
//
//  Programmer:                     John Mai
//  Date:                           May 03, 2016
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


class Payroll
{
    private:
        double payRate;     // holds an emplayee hourly pay rate
        double hoursWorked;  // an employee's hours worked
    
    
    
    public:
    
        Payroll()                               // empty constructor sets the payRate and hoursWorked to zero
        {
            payRate=0;
            hoursWorked=0;
        }
    
        Payroll(double payR, double hoursW)     //constructor checks for payR and hoursW to be positive
        {                                       // and sets payRate and hours worked; sets to zero if negative values are
                                                // provided
            if (payR < 0)
        
                payRate = 0;
        
            else
            
                payRate = payR;
    
            if (hoursW < 0)
                
                hoursW = 0;
        
            else
            
                hoursW = hoursWorked;
        }
    
        void setPayRate(double payR)           //mutator for payRate; checks for payR to be positive or sets to zero
        {
            if (payR < 0)
                    
                payRate = 0;
                
            else
                    
                payRate = payR;

        }
    
        void setHoursWorked(double hoursW)           //mutator for hoursWorked; checks for positive hoursW or sets to zero
        {
            if (hoursW < 0)
                    
                hoursW = 0;
                
            else
                    
                hoursWorked = hoursW;
            }
    
        double getPayRate()                           //accessor to return payRate
        {
            return payRate;
        }
        double getHoursWorked()                       // accessor to return hoursWorked
        {
            return hoursWorked;
        }
    
        double getGrossPay()                            // computes and returns gross pay including OVERTIME computed as hours
        {                                               // over 40 * 1.5 * payRate, if any
            if (hoursWorked < 40)
    
                return (payRate * hoursWorked);

            else
            
                return (((payRate * 1.5) * (hoursWorked-40))+ (payRate * 40));
            
        }
    
    
};

int main()
{
    const int NUMOFEMPLOYEES = 7;             //number of employees
    double payRate,                           //number of pay rate
           hoursWorked;                       //number of hours worked
    
    
    
    
    //opening file
    ifstream datafile;
    
    datafile.open("payroll.dat");
    
    

    Payroll payArray[NUMOFEMPLOYEES];

    
    //validates if file is being read
    if (!datafile)
    
        cout << "Error: Cannot open the following file." << endl;
    
    
    //sets pay rate and hours worked for each employee and compute gross pay to be displayed
    else
    
    {
        for (int index = 0; index < NUMOFEMPLOYEES; index++)
    
        {
    
            datafile >> payRate >> hoursWorked;
    
            payArray[index].setPayRate(payRate);
    
            payArray[index].setHoursWorked(hoursWorked);
    
            cout << "Employee #" << index + 1 << ": $";
            cout << setprecision(2) << fixed << payArray[index].getGrossPay() << endl;
    
        }
    
    }
    
    datafile.close();
    return 0;

}
