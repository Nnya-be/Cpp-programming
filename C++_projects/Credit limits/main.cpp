#include <iostream>

using namespace std;

int main()
{

    double beginningBalance = 0;
    double totalCharges = 0;
    double totalCredits = 0;
    double creditLimits = 0;


    int accountNumber = 0;

    cout<<"Enter account number or ( -1 to quit ) :";
    cin>>accountNumber ;

    while ( accountNumber != -1)
    {
        cout<<"Enter beginning balance : ";
        cin>>beginningBalance;

         cout<<"Enter total Charges : ";
         cin>>totalCharges;

         cout<<"Enter total credits : ";
         cin>>totalCredits;

         cout<<"Enter credit limit : ";
         cin>>creditLimits;


    double newBalcance = 0;
         newBalcance = beginningBalance + totalCharges - totalCredits;

         cout<<"New Balance is : " <<newBalcance<<endl;


         if( newBalcance > creditLimits )
         {
             cout<<"Account      "<< accountNumber <<endl;
             cout<<"Credit Limit " << creditLimits <<endl;
             cout<<" Balance     " <<newBalcance <<endl;

             cout<<"Credit Limit exceeded. "<<endl;
         }


         cout<<endl;
         cout<<endl;

         cout<<"Enter account number or ( -1 to quit ) : ";
         cin >> accountNumber;
    }
}
