#include "doubleScriptedArray.h"
#include <stdexcept>
#include <iostream>
#include <iomanip>

using namespace std;


doubleScriptedArray::doubleScriptedArray(int  first , int second)
:    row( first > 0 ? first : throw invalid_argument("row size must be greater than 0") ),
    column( second > 0 ? second : throw invalid_argument("column size must be greater than 0")),
    arraySize(row * column),
    ptr( new int [ arraySize])

{
    for ( size_t i = 0 ; i < arraySize ; i ++)
    {
        ptr[ i ] = 0;
    }

}

doubleScriptedArray::~doubleScriptedArray()
{
        delete [ ] ptr;
}

int  doubleScriptedArray::operator()( size_t  i , size_t  j)
{
     if( i > row || j > column)
    {
        delete [ ] ptr ;

        arraySize = j * i ;
      ptr  = new int [ arraySize ];
    }
    return ptr[i * j];
}

bool doubleScriptedArray::operator==( doubleScriptedArray &right)const
{

    if( right.arraySize != arraySize )
        return false;

    for ( size_t i = 0 ; i < arraySize ; i++)
    {
        if( ptr[ i ] != right.ptr[ i ])
            return false;
    }

    return true ;
}

ostream &operator<<( ostream &output   , const  doubleScriptedArray &a)
{
    for ( size_t i = 0 ; i < a.arraySize; i++ )
    {
        output << setw(5) << a.ptr[ i ];

        if( i == 4)
            output<<endl;
    }
    return output;
}

istream &operator>>( istream &in , doubleScriptedArray &a)
{
    for ( size_t i = 0; i < a.arraySize ; i++)
    {
        in  >> a.ptr[ i ];
    }

    return in;
}


const doubleScriptedArray doubleScriptedArray::operator= ( const doubleScriptedArray &object)
{

  if( &object != this)
  {
        if( arraySize != object.arraySize)
    {
        delete [ ]ptr;

        arraySize = object.arraySize;

        ptr = new int [ arraySize ];

    }


    for ( size_t  i = 0 ; i < arraySize ; i++)
    {
        ptr[ i ] = object.ptr[ i ];
    }
  }

    return *this;
}
