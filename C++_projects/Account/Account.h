
class Account
{
    public:
        explicit Account(int);

        void credit (int );
        void debit (int);
        int getBalance()const;

    private:
        int accountBalance;
};

