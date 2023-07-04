#ifndef MYTIME_H
#define MYTIME_H
#include <ctime>

class MyTime
{
    public:
        explicit MyTime( int, int ,int );

        MyTime &setTime(int , int , int);
        MyTime &setHour( int );
        MyTime &setMinute( int );
        MyTime &setSecond( int );


        //get functions
        unsigned int getHour ( )const;
        unsigned int getMinute( )const;
        unsigned int getSecond( )const;


        //print functions to display the results
        void printUniversal( )const;
        void printStandard( )const;


    private:
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};

#endif // MYTIME_H
