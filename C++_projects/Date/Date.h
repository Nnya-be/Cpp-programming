


class Date
{
    public:
        explicit Date(int , int , int );

        void setDay(int);
        int getDay()const;

        void setMonth(int);
        int getMonth()const;

        void setYear(int);
        int getYear()const;

        void displayDate()const;

    private:
        int day;
        int month;
        int year;
};
