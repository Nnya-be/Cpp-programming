#include <string>
#include "ClientData.h"

using namespace std;

//default Client Data constructor
ClientData::ClientData( int accountNumberValue , const string &lastNameValue,
                       const string &firstNameValue, double balanceValue )

                       : accountNumber(accountNumberValue), balance(balanceValue)
{
    setLastName( lastNameValue );
    setFirstName( firstNameValue );
}

//get account number value
int ClientData::getAccountNumber( )const
{
    return accountNumber;
}

//set account number value
void ClientData::setAccountNumber( int accountNumberValue )
{
    accountNumber = accountNumberValue;
}

//get last name value
string ClientData::getLastName( )const
{
    return lastName;
}

// set last name value
void ClientData::setLastName( const string &lastNameString )
{
    int length = lastNameString.size( );

    length = (length < 15 ? length :14 );
    lastNameString.copy( lastName , length );
    lastName[ length ] = '\O';
}

//get first Name value
string ClientData::getFirstName( ) const
{
    return firstName;
}

//set first name value
void ClientData::setFirstName( const string &firstNameString )
{
    int length = firstNameString.size();

    length = ( length < 10 ? length  : 9 );
    firstNameString.copy( firstName , length );
    firstName[ length ] = '\O';
}

//get balance value
double ClientData::getBalance( )const
{
    return balance;
}

//set balance value
void ClientData::setBalance( double balanceValue )
{
    balance = balanceValue;
}
