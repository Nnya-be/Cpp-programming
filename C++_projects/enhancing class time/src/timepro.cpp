#include "timepro.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

timepro::timepro( int h , int m , int s )
 :hour( h) , minute(m) , second(s)
{

}

void timepro::setTime( int a)
{
    increase = a;
    setSecond();
    setMinute();
    setHour();
}
void timepro::setSecond( )
{
    //setting the second to increase
    if(increase < 60)
        second = increase;
    //setting the second to the remainder of increase
    else
        second = increase % 60;


        {
            //validating that second is not more than 60
            if ( second >= 0 && second < 60 )
            {
                second = second;
            }

            else
                throw ("Invalid second was set");
        }

}

void timepro::setMinute( )
{
    //setting the minute by dividing the increase by 60
    minute = increase / 60;

    //setting the minute by the remainder by dividing by 60
    if ( minute >= 60)
        minute %= 60;

    {
        // validating the minute is not more than 60
        if ( minute >= 0 && minute < 60 )
        {
            minute = minute ;
        }

        else
            throw("Invalid minute was set");
    }
}

void timepro::setHour()
{
    //setting hour to the dividend of increase
    hour = increase / 3600;

    {
        // validating the hour is not more than 24
        if(hour >= 0 && hour <= 24)
        hour =hour;

    else
        throw ("invalid argument");
    }

}

unsigned int timepro::getHour()const
{
    return hour;
}

unsigned int timepro::getMinute()const
{
    return minute;
}

unsigned int timepro::getSecond()const
{
    return second;
}

void timepro::displayOverallTime()const
{
    cout <<setfill('0')<< "the overall time is :"<<setw(2) <<getHour() << " : " <<setw(2)<<getMinute() << " : "<<setw(2)<< getSecond()<< endl;
}

void timepro::displayStandardTime()const
{
    //setting the time to output in am and pm format l
     cout << setfill('0') << "The Standard time is :" << setw(2) << ((hour ==0 || hour ==12) ? hour  : hour % 12 )
     << " : " << setw(2) << getMinute() << " : "
     <<setw(2) << getSecond() << "  "
     << (( hour < 12 ) ? "AM" : "PM") <<endl;
}
