//  Program name:              Box Office
//  Program Description:       This program will allow users to calculate the Box Office gross and net profit for a night based
//                             on the amount of tickets sold to both adult and child.
//
//  Programmer Name:           John Mai
//  Date:                      February 22, 2016
//

#include <iostream>
#include <iomanip>              //to use stream manipulator
#include <string>               //to use strings
using namespace std;

//function prototypes

int main()
{
    const double adultTicketCost=6.00;  //price of adult ticket
    const double childTicketCost=3.00;  //price of child ticket
    const double profit=.2;             //percentage of profit the box office keeps
   
    string movie;                       // movie name
    
    int adult,                          //number of adult tickets sold
        child;                          //number of child tickets sold
    
    double grossAdult,                  //gross amount of adult tickets sold
           grossChild,                  //gross amount of child tickets sold
           grossBoxOffice,              //Total amount box office has sold
           netBoxOffice,                //Amount of profit the theater keeps
           distributor;                 //Amount that the theater gives to the distributors
    
    
    //set the output formatting for numbers
    cout << setprecision(2) <<fixed;
    
    //collecting input from the user
    cout << "Enter name of movie: \n";
    getline(cin, movie);
    
    cout << "What is the total number of adult tickets sold: \n";
    cin >> adult;
    
    cout << "What is the total number of child tickets sold: \n";
    cin >> child;
    
    //computing the gross amount of adult tickets and child tickets sold
    grossAdult= adult * adultTicketCost;
    grossChild= child * childTicketCost;
    
    //computing the gross amount box office sold
    grossBoxOffice= grossAdult + grossChild;
    
    //computing the net profit the box office keeps
    netBoxOffice= grossBoxOffice * profit;
    
    //computing the amount that the theater gives to the distributors
    distributor= grossBoxOffice - netBoxOffice;
    
    
    
    //display result
    cout << "Name of Movie:            " << right << "'"<< movie << "'" << endl;
    cout << "Adult tickets:            " << right << setw(10) << adult << endl;
    cout << "Child tickets:            " << right << setw(10) << child << endl;
    cout << "Gross Box office Profit:         $"<< right << setw(8)<< grossBoxOffice << setprecision(2) << fixed << endl;
    
    cout << "Amount Paid to Distributors:    -$" << right << setw(8)  << distributor <<setprecision(2) << fixed << endl;
    cout << "Net Box Office Profit:           $" << right << setw(8) << netBoxOffice <<setprecision(2) << fixed <<endl;
    
    
    return 0;
}
