#include "Account.h"
#include <iostream>


using namespace std;


Account::Account(int balance)
    :accountBalance(balance)
{
    if (balance < 0)
       {
           accountBalance=0;
    cerr<<"The initial account balance was invalid"<<endl;
       }
}

void Account::credit(int deposit )
{
    accountBalance = accountBalance + deposit;
}

void Account::debit(int withdraw)
{
    if(withdraw <=accountBalance)
        accountBalance = accountBalance - withdraw;
    if(withdraw > accountBalance)
       {
           accountBalance = accountBalance;
    cerr<<"Debit amount exceeded account balance :"<<accountBalance<<endl;
       }

}

int Account::getBalance()const
{
    return accountBalance;
}
