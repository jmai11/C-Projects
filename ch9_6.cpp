//
//  Program Name:                String Selection Sort
//  Program Description:         This program allows user to alphabetized an array of strings in ascending order.
//
//  Programmer:                  John Mai
//  Date:                        May 03, 2016 
//

#include <iostream>
#include <string>
using namespace std;



//Function protoypes
void selectionSort(string [], int);
void showArray(const string [] , int);

int main()
{
    
    
    //Constant globals
    const int SIZE = 20;
    
  
    // array of unsorted names
    string names[SIZE] = {"Collins, Bill","Sanchez, Manny", "Allison, Jeff", "Moretti, Bella", "Smith, Cathy",
                          "Smith, Bart", "Rubin, Sarah", "Moreno, Juan", "Wu, Hong", "Conroy, Pat","Michalski, Joe",
                          "Taylor, Tyrone", "Wolfe, Bill", "Patel, Renee", "Kelly, Sean", "Griffin, Jim",
                          "Johnson, Jill","Whitman, Jean", "Harrison, Rose", "Holland, Beth"};
    
 
        //display unsorted array
        cout << "The unsorted names are:\n";
        showArray(names, SIZE);
        
        //Sort array
        selectionSort(names, SIZE);
        
        //Display sorted array
        cout << "The sorted names are:\n";
        showArray(names, SIZE);
        
   

    return 0;
}

//function perform an ascending order selection sort on the array
void selectionSort(string array[], int size)
{
    int startScan, minIndex;
    string minValue;
    
    for(startScan = 0; startScan < (size -1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        
        for(int index = startScan +1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

// function used to display content of the array
void showArray(const string array[], int size)
{
    for (int count = 0; count < size; count++)
    cout << array [count] << endl;
}

