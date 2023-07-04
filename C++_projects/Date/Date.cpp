#include "Date.h"
#include <iostream>

using namespace std;


Date::Date(int da , int bosome , int afe)

    :day(da) , month(bosome) , year(afe)
{

}

void Date::setDay(int da)
{
    day = da;
}

int Date::getDay()const
{
    return day;
}

void Date::setMonth(int bosome)
{
    if(bosome <= 12)
        month = bosome;
    if(bosome > 12)
        month = 1;

}

int Date::getMonth()const
{
    return month;
}

void Date::setYear(int afe)
{
    year = afe;
}

int Date::getYear()const
{
    return year;
}

void Date::displayDate()const
{
    cout<<"the current date is in the format of DD/MM/YY :\n" <<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;
}
