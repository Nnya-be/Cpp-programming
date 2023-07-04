#include "MyTime.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>

using namespace std;

MyTime::MyTime(int hr, int mi , int se  )
{
    setTime( hr , mi , se );
}

MyTime &MyTime::setTime( int h, int m , int s)
{
    setHour( h );
    setMinute( m );
    setSecond( s );

    return *this;
}

MyTime &MyTime::setHour( int h )
{
    if ( h >= 0 && h  < 24 )
        hour = h;
    else
        throw invalid_argument("Hour must be 0 - 23");

    return *this;
}

MyTime &MyTime::setMinute( int m )
{
    if ( m >=0 && m < 60 )
        minute = m;
    else
        throw invalid_argument( " Minute must be 0 - 59");


    return *this;
}

MyTime &MyTime::setSecond( int s )
{
    if ( s >= 0 && s < 59 )
        second = s;
    else
        invalid_argument ( "seconds must be 0 - 59 ");


    return *this;
}

unsigned int MyTime::getHour( )const
{
    return hour;
}

unsigned int MyTime::getMinute( )const
{
    return minute;
}

unsigned int MyTime::getSecond( )const
{
    return second;
}

void MyTime::printUniversal ( )const
{
    cout << setfill( '0') << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}

void MyTime::printStandard( )const
{
    cout << ( (hour ==0 || hour ==12) ? 12 : hour % 12 ) << ": " << setfill('0') << setw( 2 ) << minute
    <<":"<<setw( 2 ) << second << ( hour < 12 ?" AM "  : " PM ");


}
