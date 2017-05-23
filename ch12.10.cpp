//
//  Program Name:                         Password Verifier
//  Program Description:                  This program allows user to verify that the password entered is correct set by the
//                                        guidelines
//
//  Programmer:                           John Mai
//  Date:                                 May 22, 2016
//

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;


//function prototype
bool verified(char *);
void invalidLength();
void invalidLower();
void invalidUpper();
void invalidDigit();
void invalidAlpha();


int main()
{
    
    const int MAX = 100;
    char password [MAX];
    
    //display criteria for password and ask for password
    cout << " Please enter a password that is:\n";
    cout << "\t At least 6 characters long \n";
    cout << "\t At least 1 uppercase letter \n";
    cout << "\t At least 1 lowercase letter \n";
    cout << "\t At least 1 numerical digit \n";
    cout << " Enter Password:  ";
    cin.getline (password, MAX);
    cout << "\n\n\n";
    
    
    //validator to see if password was typed correctly
    while (!verified(password))
    {

        cout << "\n\n";
        cout << " Re-enter Password: ";
        cin.getline (password, MAX);


    }
  
    cout << "\n\n";
    cout << " The password " << password << " is a valid password! \n\n\n";

    return 0;

}

//verifier to see if the rules for password are passed.
bool verified(char *pass)
{
        bool vLength = false;
        bool vUpper = false;
        bool vLower = false;
        bool vDigit = false;
        bool vAlpha = false;
        double length = strlen(pass);
       
        
        
        for (int i = 0; i < length; i++)
        {
            if (length >= 6) vLength = true;
            if (isdigit(pass[i])) vDigit = true;
            if(islower(pass[i])) vLower = true;
            if(isupper(pass[i])) vUpper = true;
            if(isalpha(pass[i])) vAlpha = true;

        }
        
        if (vLength == false || vDigit == false || vUpper == false || vLower == false || vAlpha == false)
        {
          
            cout << "Your password DOES NOT contain the following: \n";

        }
        if (vLength == false) invalidLength();
        if (vAlpha == false) invalidAlpha();
        if (vDigit == false) invalidDigit();
        if (vLower == false) invalidLower();
        if (vUpper == false) invalidUpper();
        
        return vUpper && vLower && vDigit && vAlpha;
    
}

//display missing password rule
void invalidLength() { cout << "* At least 6 characters long. \n"; }
void invalidLower() { cout << "* At least one lower case letter. \n"; }
void invalidUpper() { cout << "* At least one upper case letter. \n"; }
void invalidDigit() { cout << "* At least one numerical digit. \n"; }
void invalidAlpha() { cout << "* At least one letter. \n"; }
    
    

    
