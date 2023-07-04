#include "times.h"
#include<iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;


times::times(int hour , int minute , int second )
{
        setTime(hour , minute  , second );
}


// defining the set functions

void times::setTime( int h , int m , int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void times::setHour( int h)
{
	if ( h >=0 && h < 24 )
	{
		hour = h;
	}

	else
		throw invalid_argument( " The hour is incorrect :");
}

void times::setMinute( int m )
{
	if (m >= 0 && m < 60)
	{
			minute = m;
	}

	else
		throw invalid_argument("The minute is incorrect :");
}

void times::setSecond( int s)
{
	if ( s >= 0 && s < 60)
	{
		second = s;
	}

	else
		throw invalid_argument( "The second is incorrect :");
}

	// defining the get functions

int times::getHour()const
{
	return hour;
}

int times::getMinute()const
{
	return minute;
}

int times::getSecond()const
{
	return second;
}
void times::printStandard()const
{
    cout << setfill('0') << (getHour() <=12  ? getHour() : getHour() % 12 ) << " : " <<setw(2) << getMinute()<< " : " <<setw(2) <<getSecond() << ( getHour() < 12  ? "am" : "pm") ;
}

void times::printUniversal()const
{
    cout << setfill('0') << ((getHour() ==12 || getHour() == 0) ? 12  : getHour()  ) << " :" << setw(2) << getMinute() << " : " <<setw(2) <<getSecond()  << endl;
}
