#ifndef HUGEINT_H
#define HUGEINT_H
#include <array>
#include <iostream>
#include <string>


class HugeInt
{

    friend HugeInt  operator * ( int   , const HugeInt &);
    friend std::ostream &operator << ( std::ostream & , const HugeInt &);

    public:
        static const int digits = 30;

        HugeInt( long = 0 );
        HugeInt ( const std::string &);

        ~HugeInt();

        //addition operator  hugeInt + hugeInt
        HugeInt operator+ ( const HugeInt &) const ;

        //addition operator  HugeInt + int
        HugeInt operator+( int ) const;

        //addition operator hugeint + string
        HugeInt operator+ ( const std::string &) const;

        //for 2 objects of the class
        HugeInt operator* ( const HugeInt &) const ;

        bool operator == ( const HugeInt & ) const;

        bool operator != ( const HugeInt &opp2) const
        {
            return !( *this == opp2 );
        }

        HugeInt operator/ ( const HugeInt &) const ;
    private:
        std::array <short , digits > integer;
};

#endif // HUGEINT_H
