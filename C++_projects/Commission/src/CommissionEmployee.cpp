#include "CommissionEmployee.h"
#include <iostream>
#include <stdexcept>

using namespace std;

CommissionEmployee::CommissionEmployee( const string &first, const string &last , const string &ssn, double sales , double rate )
    :firstName( first ) , lastName( last ) , socialSecurityNumber( ssn )
{
    setGrossSales( sales );
    setCommissionRate( rate );
}

void CommissionEmployee::setFirstName( const string &first )
{
    firstName = first;
}

string CommissionEmployee::getFirstName( )const
{
    return firstName;
}

void CommissionEmployee::setLastName( const string &last )
{
    lastName = last;
}

string CommissionEmployee::getLastName( )const
{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn ;
}

string CommissionEmployee::getSocialSecurityNumber( )const
{
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales( double sales )
{
    if (sales >= 0.0 )
        grossSales = sales;
    else
        throw invalid_argument ( " gross sales must be >= 0.0 ");

}

double CommissionEmployee::getGrossSales( )const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate( double rate )
{
    if( rate > 0.0 && rate < 1.0 )
        commissionRate = rate;
    else
        throw invalid_argument( " commission rate must be > 0.0 and 1.0 " );

}

double CommissionEmployee::getCommissionRate( )const
{
    return commissionRate;
}

double CommissionEmployee::earnings( )const
{
    return getCommissionRate( ) * getGrossSales( );
}

void CommissionEmployee::print( )const
{
    cout << " Commission employee : "
        <<getFirstName( ) << "  "<< getLastName( )
        << " \nsocial security number :  " << getSocialSecurityNumber( )
        <<" \ngross sales : " << getGrossSales( )
        << " \ncommission rate : " <<  getCommissionRate( );
}
