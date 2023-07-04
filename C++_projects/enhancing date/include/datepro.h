#ifndef DATEPRO_H
#define DATEPRO_H


class datepro
{
    public:
        datepro( int , int , int );

        void nextDay(  );

        void setDay(int );
        void setMonth();
        void setYear();

        int getDay()const;
        int getMonth()const;
        int getYear()const;

        void displayDate()const;
    private:
        int day;
        int month;
        int year;

        int increase;
};

#endif // DATEPRO_H
