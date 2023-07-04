#include "HugeInt.h"
#include <cctype>

using namespace std;

HugeInt::HugeInt(long value)
{
    for ( short &element  :  integer )
        element = 0;

    //placing digits into array
    for ( size_t j = digits - 1; value != 0 && j >= 0;  j--)
    {
        integer[ j ] = value % 10;
        value /=10;
    }
}

HugeInt::HugeInt( const string &number )
{
    for ( short &element : integer )
        element = 0;

    size_t length  = number.size();

    for ( size_t j = digits - length, k = 0;  j < digits; ++j , ++k)
        if( isdigit( number [ k ] ) )   //ensure that character is a digit
            integer[ j ] = number [ k ]  - '0';
}

HugeInt::~HugeInt()
{
    //dtor
}

HugeInt HugeInt::operator+( const HugeInt &opp2 ) const
{
    HugeInt temp;
    int carry = 0 ;

    for ( int i = digits -1 ; i >= 0; i-- )
    {
        temp.integer[ i ] = integer [ i ] + opp2.integer [ i ] + carry;

        if( temp.integer[ i ]  > 9 )
        {
            temp.integer [ i ] %= 10;
            carry = 1;
        }
        else
            carry = 0;
    }

    return temp;
}

HugeInt HugeInt::operator+( int opp2 )const
{
    return *this + HugeInt( opp2 );
}

HugeInt HugeInt::operator+( const string &opp2 )const
{
     return *this + HugeInt( opp2 );
}

ostream &operator<<( ostream &output , const HugeInt &num)
{
    int i ;
    for ( i = 0; ( i < HugeInt::digits ) && ( 0 == num.integer[ i ] ); ++i )
        ;

    if( i == HugeInt::digits)
        output << 0;
    else
        for (  ; i  < HugeInt::digits; ++i )
        output << num.integer[ i ];

    return output;
}

HugeInt HugeInt::operator*( const HugeInt &opp2 ) const
{
        HugeInt temp;
       int  carry = 0;

    for ( size_t i = digits - 1 ; i > 0 ; i --)
    {
        for ( size_t j = digits - 1, x = i ; j > 0 ; j --, x--)
        {
            //declaring a variable to hold the multiplication temporary
            int tempNo = 0;

            //multiplying  the 2 arrays plus the carry
                tempNo =(opp2.integer[ i ] * integer[ j ])  + carry;

    //checking if after multiplying the number is still in base 10
                if( tempNo > 9 )
                {
                    carry = tempNo / 10;

                    tempNo %= 10;

                }
                else
                    carry = 0;

            //passing the number to the temp array to hold the unchecked value
                temp.integer [ x ] = tempNo + temp.integer [ x ]  ;
        }

    }


    //validation of the values in the temp array to base 10
    for ( size_t i = digits - 1; i > 0 ; i--)
    {
        temp.integer [ i ] = carry + temp.integer [ i ];

        if ( temp.integer [ i ] > 9 )
        {
            carry = temp.integer [ i ] / 10;
            temp.integer[ i ] %= 10;
        }

        else
            carry = 0;
    }

    return temp;
}

HugeInt operator * ( int opp1 , const HugeInt &opp2)
{
     return opp2 * HugeInt ( opp1);
}

bool HugeInt::operator==( const HugeInt &opp2) const
{
    for ( size_t  i = digits- 1; i > 0; i --)
    {
        if ( opp2.integer[ i ] != integer [ i ])
            return false;
    }

    return true ;
}
HugeInt HugeInt::operator/ ( const HugeInt &) const
{

}
