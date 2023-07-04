#include "employee.h"
#include <iostream>

using namespace std;


employee::employee( const string &first , const string &last, const string &ssn )
:  firstName( first ) , lastName( last ) , socialSecurityNumber( ssn )
{

}




void employee::setFirstName( const string &first )
{
    firstName = first ;
}

string employee::getFirstName( )const
{
    return firstName;
}

void employee::setLastName( const string &last )
{
    lastName = last;
}

string employee::getLastName( )const
{
    return lastName;
}

void employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn;
}

string employee::getSocialSecurityNumber( )const
{
    return socialSecurityNumber;
}

void employee::print ( )const
{
    cout <<getFirstName( ) << "  " << getLastName( )
    << "\nsocial security number : " << getSocialSecurityNumber( );
}
