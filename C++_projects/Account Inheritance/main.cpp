#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include "Account.h"
#include "savingsAccount.h"

using namespace std;

int main()
{
    savingsAccount accounts( 259 ,1.23);

    accounts.Debit(24);

    cout << "The current amount in your savings account is :"  << accounts.getBalance();
}
