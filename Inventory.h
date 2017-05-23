//
//  Program Name:                       Inventory.h
//  Program description:                This is the Inventory Header
//
//  Programmer Name:                   John Mai
//  Date:                              April 12, 2016
//

#ifndef Inventory_h
#define Inventory_h

class Inventory
{
    private:
        int itemNumber,         //int item number
            quantity;           //int quantity number
        double cost,            //double cost number
            totalCost;          //double total cost number
    
    
    public:
    
        //constructor
        Inventory(int num=0, int qty=0, double cst=0.0)
        {
            itemNumber= num;
            quantity= qty;
            cost=cst;
            setTotalCost(qty, cst);
        }
    
        //sets the new item number
        void setItemNumber(int num)
        {
            itemNumber = num;
        }
    
        // sets the new quantity number
        void setQuantity(int qty)
        {
            quantity = qty;
        }
    
        //sets the new cost number
        void setCost(int cst)
        {
            cost = cst;
        }
    
        //sets the new total cost number
        void setTotalCost(int qty, double cst)
        {
            totalCost = qty * cst;
        }
    
        // used to get item number
        int getItemNumber()
        {
            return itemNumber;
        }
    
        //used to get quantity number
        int getQuantity()
        {
            return quantity;
        }
    
        //used to get cost number
        double getCost()
        {
            return cost;
        }
    
        //used to get total cost number
        double getTotalCost()
        {
            return quantity * cost;
        }
    
    
};



#endif /* inventory_h */
