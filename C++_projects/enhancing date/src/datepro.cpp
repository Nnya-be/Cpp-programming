#include "datepro.h"
#include <iostream>
#include <iomanip>

using namespace std;

datepro::datepro( int d , int m , int y)
: day(d) , month(m) ,year(y)
{
    setYear();
}

void datepro::setDay( int d )
{
        increase = d;

     day = increase;

    if (day > 365 )
    {
        day = increase % 365;
    }
}

int datepro::getDay()const
{
    return day;
}

void datepro::setYear()
{
    year = increase / 365;
}

int datepro::getYear()const
{
    return year;
}
void datepro::displayDate()const
{
    cout << " current day " <<getDay() <<  " :" <<getYear() <<endl;
}
