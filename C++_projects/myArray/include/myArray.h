#ifndef MYARRAY_H
#define MYARRAY_H
#include <iostream>




class myArray
{

    friend std::ostream &operator << ( std::ostream & , const myArray &);
    friend std::istream &operator >> (std::istream &, myArray &);


    public:
        explicit myArray( int = 10); //default constructor
        myArray( const myArray &);//copy constructors

        ~myArray();//destructors

        size_t getSize()const ;

        const myArray &operator=(const myArray &);
        bool operator == ( const myArray &)const ;
        bool operator!=( const myArray &right )const
        {
            return !( * this == right );
        }

        int  &operator[]( int );

        int operator[](int)const ;

    private:
        size_t size;
        int *ptr;

};

#endif // MYARRAY_H
