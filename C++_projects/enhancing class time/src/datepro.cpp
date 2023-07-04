#include <iostream>
#include "datepro.h"
#include <iomanip>

using namespace std;

datepro :: datepro( )
{

}

void datepro::nextDay( int da)
{
    increase = da;
}


void datepro::setDay()
{
    if( day <= 365 )
        day = increase;
    else
        day = increase % 365;
}

int datepro::getDay()const
{
    return day;
}

void datepro::displayDate()const
{
    cout << " the day is " << getDay() << endl;
}
