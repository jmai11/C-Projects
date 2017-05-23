//
//  Program Name:                      Inventory Class
//  Program Description:               This program allows users to add inventory item with their number, quantity, cost and it
//                                     will calculate its total cost.
//
//  Programmer Name:                   John Mai
//  Date:                              April 12, 2016
//


#include <iostream>
#include <iomanip>
#include "Inventory.h"
using namespace std;


int main()
{
    
    // declare the Inventory object using the default constructor
    Inventory inventoryA;
    
    // declare variables for inventory number, quantity, cost
    int itemNumber,
         quantity;
    double cost;
    
    
    
    
    // collect and validate inventory number

    cout << "Enter item number (positive): ";
    cin >> itemNumber;
    while (itemNumber < 0)
    {
        cout << "Error: Enter item number (positive):  ";
        cin >> itemNumber;
    }
    
    // collect and validate quantity
    cout << "Enter item quantity (positive): ";
    cin >> quantity;
    while (quantity < 0)
    {
        cout << "Error: Enter item quantity (positive):  ";
        cin >> quantity;
    }
    
    // collect and validate cost
    cout << "Enter item cost (positive): ";
    cin >> cost;
    while (cost < 0)
    {
        cout << "Error: Enter item cost (positive):  ";
        cin >> cost;
    }
    
    inventoryA.setItemNumber(itemNumber);    // change the inventory number using the setItemNumber() member function
    inventoryA.setQuantity(quantity);        // change the quantity using the setQuantity() member function
    inventoryA.setCost(cost);                // change the cost using the setCost() member function
    
    
    
    
    // display the contents of Inventory item using getItemNumber(), getQuantity(), and getCost()
    cout << "INVENTORY SUMMARY" <<endl;
    cout << "=================" <<endl;
    cout << "Item Number:    " << inventoryA.getItemNumber() << endl;
    cout << "Item Quantity:  " << inventoryA.getQuantity() << endl;
    cout << "Item Cost:     $" << setprecision(2)<< fixed << inventoryA.getCost() << endl;
    cout << "-----------------" << endl;
    
    // display the total cost using getTotalCost() member function (which returns cost * quantity)
    cout << "Total Cost:    $"  << setprecision(2)<< fixed  << inventoryA.getTotalCost() << endl;
    
    
    
    return 0;
}
