#include "ClientData.h"
#include <string>

using namespace std;

//default ClientData constructor
ClientData::ClientData( int accountNumberValue , const string &lastNameValue,
                       const string &firstNameValue , double balanceValue )
                       :accountNumber(accountNumberValue) , balance( balanceValue)
{
    setLastName( lastNameValue );
    setFirstName( firstNameValue );
}

//get account -number value
int ClientData::getAccountNumber( ) const
{
    return accountNumber;
}

//set account number value
void ClientData::setAccountNumber( int accountNumberValue  )
{
    accountNumber = accountNumberValue;
}

//get last name value
string ClientData::getLastName( )const
{
    return lastName;
}

//set last name value
void ClientData::setLastName( const string &lastNameString )
{
    //copy at most 15 characters from string to lastName
    int length = lastNameString.size( );
    length  = (length < 15 ? length : 14 );//validating to make sure it's less than 15
    lastNameString.copy ( lastName , length );
    lastName [ length ] = '\O'; //append null character to lastName
}

//get first name value
string ClientData::getFirstName( )const
{
    return firstName;
}

void ClientData::setFirstName( const string &firstNameString )
{
    int length = firstNameString.size( );
    length = ( length < 10 ? length : 9 );
    firstNameString.copy ( firstName , length);
    firstName [ length ] = '\O';
}

double ClientData::getBalance( )const
{
    return balance;
}

void ClientData::setBalance( double balanceValue )
{
    balance = balanceValue;
}
