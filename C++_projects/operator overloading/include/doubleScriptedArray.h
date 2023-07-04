#ifndef DOUBLESCRIPTEDARRAY_H
#define DOUBLESCRIPTEDARRAY_H

#include <iostream>

class doubleScriptedArray
{
    friend std::ostream &operator<<(std::ostream & , const doubleScriptedArray &);
    friend std::istream &operator >>( std::istream & , doubleScriptedArray &);

    public:
        doubleScriptedArray(  int, int);
        ~doubleScriptedArray();

        //int &operator ( )( size_t , size_t );
        int operator()( size_t , size_t);

    bool operator==( doubleScriptedArray &)const;
    bool operator!=( doubleScriptedArray &right)const
    {
        return  ! (*this ==right);
    }

 const    doubleScriptedArray operator= (const  doubleScriptedArray &);


    private:
        size_t row;
        size_t column;
        size_t arraySize;
        int *ptr;
};

#endif // DOUBLESCRIPTEDARRAY_H
