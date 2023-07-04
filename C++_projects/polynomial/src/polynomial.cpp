#include "polynomial.h"
#include <iostream>

using namespace std;

polynomial::polynomial( int polynomial)
    : polySize( polynomial ),
        polynomialPtr ( new int [ polySize + 1] )
{

    for ( size_t i = 0 ;  i < polySize ; i++ )
        polynomialPtr[ i ] = 0;
}

polynomial::~polynomial()
{
        delete [ ] polynomialPtr ;
}

polynomial::polynomial( const polynomial &right)
{
    polySize = right.polySize;
    polynomialPtr = new int [ polySize];

    for ( size_t i = 0 ; i < polySize ; i ++)
        polynomialPtr[ i ] = right.polynomialPtr[ i ];
}

polynomial polynomial::operator+( const polynomial &op2 )const
{
    //creating a temporary object
      polynomial temp;


     //assigning the temporary objects size to the highest one
     if( op2.polySize > polySize )
        temp.polySize = op2.polySize;
     else
        temp.polySize = polySize;


     //adding the 2 objects to be assigned to the temporary one
     for ( size_t i = 0; i < temp.polySize ; i++)
     {
         //adding the 2 polynomials
         temp.polynomialPtr [ i ] = polynomialPtr [ i ] + op2.polynomialPtr [ i ];
     }

     //returning temporary
     return temp;
}

polynomial polynomial::operator-( const polynomial &op2 )const
{
    //creating a temporary object
      polynomial temp;


     //assigning the temporary objects size to the highest one
     if( op2.polySize > polySize )
        temp.polySize = op2.polySize;
     else
        temp.polySize = polySize;


     //adding the 2 objects to be assigned to the temporary one
     for ( size_t i = 0; i < temp.polySize ; i++)
     {
         //subtracting the 2 polynomials
         temp.polynomialPtr [ i ] = polynomialPtr [ i ] - op2.polynomialPtr [ i ];
     }

     //returning temporary
     return temp;
}

ostream &operator<<( ostream &output , const polynomial &right )
{
    for ( size_t i = 0; i < right.polySize ; i++ )
    {
        output << right.polynomialPtr[ i ] ;
        output << " ";
    }
    output <<endl;

    return output ;
}

istream &operator >> ( istream &input , polynomial &op2 )
{
    for ( size_t i = 0; i < op2.polySize ; i++ )
    {
         if(0 == i )
         {
             cout << " Enter the value of no exponent coefficient : " ;
             input >> op2.polynomialPtr [ i ];
         }
        else
         {
             cout << " Enter the coefficient of the exponent " << i  << " :";
              input >> op2.polynomialPtr [ i ];
         }

    }
    cout << endl;

    return input;
}


