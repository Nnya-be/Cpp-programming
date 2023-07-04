#include "Account.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Account::Account( double balance )
: accountBalance((balance >= 0.0) ? balance  : throw invalid_argument(" invalid account balance"))
{

}

void Account::Debit(double amount )
{
    if(accountBalance > amount )
        accountBalance = accountBalance - amount;
    else
        throw invalid_argument( " The debit amount exceeds the account balance");
}
void Account::Credit( double amount )
{
    accountBalance +=amount;
}

double Account::getBalance( )const
{

    return accountBalance;
}
