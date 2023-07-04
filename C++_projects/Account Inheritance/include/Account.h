#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
        Account( double  = 0.0);

        //set and get functions for the  debit function

        void Debit (double );


        //set and get functions for the credit function

        void Credit( double );

        // get balance function
       virtual double getBalance( )const;

    private:
        double accountBalance ;
};

#endif // ACCOUNT_H
