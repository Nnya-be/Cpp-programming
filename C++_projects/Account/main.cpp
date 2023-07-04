#include <iostream>
#include "Account.h"

using namespace std;

int main()
{

    int deposit = 0;
    int withdraw = 0;
  Account money(489);
  Account money1(1009);

  cout<<"Your initial account balance is "<<money.getBalance()<<endl;

  cout<<endl;

  cout<<"How much would you like to deposit :"<<endl;
  cin>>deposit;
  cout<<endl;

  money1.credit(deposit);
  cout<<"Your current account balance after your deposit is :"<<money1.getBalance()<<endl;

  cout<<endl;


  cout<<"How much would you like to withdraw in all :"<<endl;
  cin>>withdraw;
    cout<<endl;
  money1.debit(withdraw);

  cout<<"Your current account balance after your withdrawal is :"<<money1.getBalance()<<endl;
  cout<<endl;

}
