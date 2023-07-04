#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{

    friend std::ostream &operator<<( std::ostream & , const Complex &) ;
    friend std::istream &operator>>( std::istream & , Complex &) ;

    public:
        explicit Complex(double = 0.0 , double = 0.0);
        ~Complex();


            Complex operator+( const Complex &) const ;
            Complex operator-( const Complex & ) const ;
            Complex operator* ( const Complex &)const ;
            bool operator==( const Complex &)const;
            bool operator !=( const Complex &operand2)const
            {
                return !(*this == operand2);
            }

    private:
        double real;
        double imaginary;
};

#endif // COMPLEX_H
