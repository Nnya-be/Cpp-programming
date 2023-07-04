#ifndef COMPLEXA_H
#define COMPLEXA_H


class complexa
{
    public:
        complexa( double , double );

        void  setFirstNumber( double & , double & ) ;
        void setSecondNumber(double & , double &);

        void addComplexReal( double );
        void addComplexImaginary( double  );

        double realAdded()const;
        double imaginaryAdded()const;

        void displayNumber( );

    private:
        double real_1;
        double real_2;
        double imaginary_1;
        double imaginary_2;

        double add1;
        double add2 ;
};

#endif // COMPLEXA_H
