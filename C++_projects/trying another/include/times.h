#ifndef TIMES_H
#define TIMES_H


class times
{
    public:
        times(int  = 0, int  = 0 , int = 0 ) ; // constructor

        // public functions

        //set functions
        void setTime( int , int ,int );

        void setHour (int);
        void setMinute( int );
        void setSecond( int );

        // get functions
        int getHour ( ) const;
        int getMinute()const;
        int getSecond()const;

        //output functions
        void  printStandard() const;
        void printUniversal() const;

    private:
        //declaring member data
        unsigned int  hour ;
        unsigned int minute ;
        unsigned int second;

};

#endif // TIMES_H
