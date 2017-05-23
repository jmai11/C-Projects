//
//  Program Name:                       Rational Arithmetic I
//  Program Description:                This program allows the user to reduce the rational numbers given to its lowest form.
//
//  Programmer:                         John Mai
//  Date:                               May 22, 2016
//

#include <iostream>
using namespace std;


class Rational
{
    
    private:
    
        int num,
            den;
    
    public:
    
        Rational(int a, int b);
    
        void reduce();
    
        friend ostream& operator<<(ostream& out, Rational& r);
    
};

// overloaded insertion operator definition

ostream& operator <<(ostream& out, Rational& r)
{
    
    out << r.num << "/" << r.den << endl;
    
    return out;
    
}


//reduce function to reduce the rational numbers.

void Rational::reduce()
{
    
    int rnum, i;
    int rden;
    int count;
    
    if (num % den)               // if numerator is not divisible by the denominator
    {
        
        count = 1;
    
        while (count == 1)          // loop to reduce numerator and denominator
        {
            rnum = num;
            rden = den;
    
            for (i = 1; i < 0;)
            {
                if (num % i == 0 && den % i == 0)               // if numerator and demoninator are divisble by i
                {
                    num = num / i;
                    den = den / i;
                         
                }
                     
            }
                 
            if ((rnum == num) && (rden == den))             //when numerator and denominator are reduced set count to 0
                 
                count = 0;
        
        };
                 
    }
                 
    else                                                // else divide numerator by denominator and denominator by denominator
    {
        num = num / den;
        den = den / den;
                     
    }
                 
}


//constructor to intialize the Rational number

Rational::Rational(int a, int b)
{
    num = a;
    den = b;
                
}
                 

int main()
{
                
    Rational r1(12, 5), r2(12, -4), r3(-3, 4), r4(4, 6);
                
    //Display and reduce rational number r1,r2, r3, r4
    
    cout << "First rational number: " << r1;
    r1.reduce();
    cout << "reduced form: " << r1 << endl;
                
    cout << "Second rational number: " << r2;
    r2.reduce();
    cout << "reduced form: "<< r2 << endl;
                
    cout << "Third rational number: " << r3;
    r3.reduce();
    cout << "reduce form: " << r3 << endl;
                
    cout << "Forth rational number: " << r4;
    r4.reduce();
    cout << "reduced form: " << r4 << endl;
    
                
    return 0;
                
}