//
//  Program Name:                           Movie Statistics
//  Program Description:                    This program allows user to input the amount of movies each student saw and it will
//                                          calculate the mean and median of the total.
//
//  Programmer:                             John Mai
//  Date:                                   May 22, 2016
//

#include <iostream>
#include <iomanip>
using namespace std;



// Function prototypes
double calculateMean(int *, int);
double calculateMedian(int *, int);


int main()

{
    
    int *movies;          // To dynamically allocate an array
    int students;         // To hold the number of students
    char repeat = ' ';    // To repeat the program
    
    do
    {

        // Ask the user how many students were surveyed
        cout << "How many students were surveyed? ";
        cin >> students;
       
        // Determine input validation.
      
        while (students < 0)
        
        {
            
            cout << "Invalid number of students.\n";
            cout << "Please enter how many students were surveyed: ";
            cin >> students;
        
        }
    
        // Dynamically allocate an array large enough to hold that many numbers of students.
        movies = new int[students];
    
        
        // Get the number of movies each student watched;
       
        for (int count = 0; count < students; count++)
        {
            cout << "Number of movies Student #" << (count + 1) << " saw: ";
            cin >> movies[count];
        
        
            // Validate input.
            while (movies[count] < 0)
            {
                cout << "Invalid number. Please enter a positive number: ";
                cout << "\nNumber of movies Student #" << (count + 1) << " saw: ";
                cin >> movies[count];
            }
            
        }
    
        // output formatting.
        cout << fixed << showpoint << setprecision(1);

        // Display the mean.
        cout << "\nThe mean is: ";
        cout << calculateMean(movies, students) << endl;
    
        // Display the median.
        cout << "\nThe median is: ";
        cout << calculateMedian(movies, students) << endl;
    

        
    
        // Free dynamically allocated memory.
    
        delete[] movies;
        movies = 0;       // Make nums point to null.
    
        
    
        // Ask the user if he/she wants to go again
        cout << "New survey input?";
        cin >> repeat;
       
    }
        while (repeat == 'Y' || repeat == 'y');

            cout << "Program ending.\n";
   
    return 0;

}


// function calculates and returns the mean number
    
double calculateMean(int *movies, int students)
{
        double total = 0;
        double average;
    
        
    
        for (int count = 0; count < students; count++)
        
        {
        
            total += movies[count];
        
        }
    
        average = total / students;
    
        return average;
    
}



// function calculates and returns the median number

double calculateMedian(int *movies,  int students)
{
    
        double median = 0.0;
    
        cout << fixed << showpoint << setprecision(1);

        

        // int answer = num_students % 2;
        
        if (students % 2 == 0)
            
        {
           
            median = (movies[students / 2] + movies[(students / 2) + 1]) / 2.0;
            
            // median = even_median;
        
        }
    
        else
    
            median = movies[students / 2];

        

        return median;
}
