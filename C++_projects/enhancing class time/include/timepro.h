#ifndef TIMEPRO_H
#define TIMEPRO_H


class timepro
{
    public:
        timepro( int , int , int );

        //set functions
        void setTime( int );
        void setHour();
        void setMinute();
        void setSecond (  );


        //get functions
        unsigned int getHour()const;
        unsigned int getMinute()const;
        unsigned int getSecond()const;

        //display functions
        void displayStandardTime()const;
        void displayUniversalTime()const;
        void displayOverallTime()const;


    //private data members
    private:
        unsigned int hour ;
        unsigned int minute;
        unsigned int second;
        long unsigned int increase;
};

#endif // TIMEPRO_H
