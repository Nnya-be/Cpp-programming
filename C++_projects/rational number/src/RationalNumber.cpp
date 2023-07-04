#include "RationalNumber.h"
#include <iostream>
#include <stdexcept>

using namespace std;


RationalNumber::RationalNumber( int num  , int deno )
 : numerator ( num ) ,
   denominator ( deno > 0 ? deno : throw invalid_argument ( " denominator must be greater than 0"))
{
    for ( int i = numerator ; i > 1 ; i -- )
    {
        if ( numerator % i == 0 && denominator % i == 0)
          {
              numerator /=i ;
              denominator /=i;
          }
    }
}


ostream  &operator << ( ostream &output , const RationalNumber &op2)
{
    output << op2.numerator ;
    output  << " / ";
    output << op2.denominator <<endl;


    return output;
}

RationalNumber RationalNumber::operator+( const RationalNumber &op2 )
{
    int d =    0 , n = 0 ;

    d = denominator * op2.denominator;
    n= ( op2.denominator * numerator ) + ( denominator * op2.numerator );


    RationalNumber ra( n , d );
    return ra;
}

RationalNumber RationalNumber::operator- ( const RationalNumber &op2)
{
    int d = 0 , n = 0;
    d = denominator * op2.denominator;
    n = (denominator *op2.numerator ) - ( op2.denominator * numerator );

    RationalNumber ra( n , d );
    return ra;
}

RationalNumber RationalNumber::operator* ( const RationalNumber &op2 )
{
    int d = 0 , n = 0 ;
    d= denominator * op2.denominator ;
    n = numerator * op2.numerator;

    RationalNumber ra( n, d);

    return ra;
}

RationalNumber RationalNumber::operator/( const RationalNumber &op2)
{
    int d = 0, n = 0;
    d = op2.numerator * denominator;
    n = op2.denominator * numerator;

    RationalNumber ra( n , d);

    return ra;
}

bool RationalNumber::operator== ( const RationalNumber &op2 ) const
{
    if( numerator != op2.numerator )
        return false;


    if( denominator != op2.denominator)
        return false;


    return true ;
}
