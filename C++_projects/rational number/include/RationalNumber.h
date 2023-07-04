#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>

class RationalNumber
{
    friend std::ostream &operator << ( std::ostream & , const  RationalNumber &);


    public:
        RationalNumber( int =2 , int=4 );

        RationalNumber operator +( const  RationalNumber &);
        RationalNumber operator - ( const RationalNumber &);
        RationalNumber operator * ( const RationalNumber &);
        RationalNumber operator/ ( const RationalNumber &);

        bool operator == ( const RationalNumber & ) const;

        bool operator != ( const RationalNumber &op2) const
        {
            return !( *this == op2 );
        }

    private:
        int numerator;
        int denominator;
};

#endif // RATIONALNUMBER_H
