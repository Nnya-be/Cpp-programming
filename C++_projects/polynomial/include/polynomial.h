#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>

class polynomial
{
    //prototype of  the input and output overloaded functions
    friend std::ostream &operator<<( std::ostream & , const polynomial &);
    friend std::istream &operator >> ( std::istream &, polynomial &);

    public:
        //class constructor
        polynomial( int = 3 );
        //copy constructor
        polynomial( const polynomial &);
        //destructor
        ~polynomial();

            //the overloaded addition operator's protorype
         polynomial operator +( const polynomial &)const ;
         polynomial operator - ( const polynomial &)const ;

    private:
       int  *polynomialPtr ;
        size_t polySize;
};

#endif // POLYNOMIAL_H
