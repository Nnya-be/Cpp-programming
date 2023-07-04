#include "savingsAccount.h"
#include <iostream>

using namespace std;

savingsAccount::savingsAccount( double amount , double interest )
 :Account( amount )
{

}

double savingsAccount::calculateInterest( )
{
    return Account::getBalance() * interestRate;
}
