#include <iostream>
#include "Complex.h"

using namespace std;


Complex::Complex( double realPart , double imaginaryPart )
    :   real(realPart) ,
        imaginary(imaginaryPart )
{

}

Complex::~Complex()
{

}

Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real , imaginary +operand2.imaginary );
}

Complex Complex::operator-( const Complex &operand2 )const
{
    return Complex( real - operand2.real , imaginary - operand2.imaginary);
}

ostream &operator<<( ostream &output , const Complex &operand2)
{
    output << operand2.real << " + ";
    output <<operand2.imaginary  <<  " j ";
    output << endl;

    return output;
}

istream &operator >>( istream &input , Complex &operand2)
{
    input >> operand2.real;
    input >>operand2.imaginary;

    return input;
}

Complex Complex::operator* ( const Complex &operand2)const
{
    return Complex( real * operand2.real  , imaginary * operand2.imaginary);
}

bool Complex::operator==( const Complex &operand2 )const
{
    if( real != operand2.real || imaginary !=operand2.imaginary)
    return false;

    return true;
}
