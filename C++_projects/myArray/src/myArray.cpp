#include "myArray.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

//default constructor of the class
myArray::myArray( int arraySize )
: size( arraySize  > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")),
    ptr ( new int [ size ])
{
    for ( size_t  i = 0; i< size; ++i )
        ptr[ i ] = 0;
}


//copy constructor
myArray :: myArray( const myArray &arrayToCopy)
: size ( arrayToCopy.size ) ,
 ptr ( new int[ size ] )
{
    for (size_t i = 0; i < size; ++i)
        ptr[ i ] = arrayToCopy.ptr[ i ];
}


//destructor
myArray::~myArray()
{
    delete [ ] ptr;
}

//return the number of elements in the array
size_t  myArray::getSize() const
{
     return size;
}

//overloading assignment operator
// const  return avoid : ( a1 = a2) =a3
const myArray &myArray::operator= ( const myArray &right )
{
    if( &right  !=  this )
    {
        if(size  != right.size)
        {
            delete [ ] ptr;
            size = right.size;

            ptr = new int[size];
        }

        for (size_t i = 0; i< size ; ++i )
            ptr[ i ] = right.ptr[ i ];
    }

    return *this;
}

//determine if two arrays are equal
bool myArray::operator == ( const myArray &right) const
{
    if ( size != right.size )
        return false;
    for ( size_t  i = 0 ; i< size ; ++i)
        if( ptr [ i ] != right.ptr[ i ])
        return false;

    return true;
}

//overloaded subscript operator for non const array;
int &myArray::operator[ ]( int subscript)
{
    if( subscript < 0 || subscript >= size )
        throw out_of_range("subscript out of range");

    return ptr[ subscript ];
}

//overloading subscript operator for const arrays
int myArray::operator[ ] ( int subscript )const
{
     if ( subscript < 0 || subscript >= size )
     throw out_of_range("subscript out of range ");

     return ptr[ subscript ];
}

//overloading input operator
istream &operator>>( istream &input , myArray &a)
{
    for ( size_t i = 0 ;  i < a.size ; ++i)
        input >>a.ptr[ i ];

    return input;
}

//overloading output operator
ostream &operator <<( ostream &output , const myArray &a)
{
    for( size_t i=0; i< a.size; ++i)
    {
        output <<setw(12) <<a.ptr[ i ];

        if(( i +1) % 4 ==0)
            output <<endl;
    }

    if( a.size % 4 != 0)
        output <<endl;

    return output;
}
