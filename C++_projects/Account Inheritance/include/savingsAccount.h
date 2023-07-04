#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

class savingsAccount  :  public Account
{
    public:
        savingsAccount( double = 100 , double = 0.12);

        double calculateInterest();


    private:
        double interestRate ;
};

#endif // SAVINGSACCOUNT_H
