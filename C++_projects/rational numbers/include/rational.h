#ifndef RATIONAL_H
#define RATIONAL_H


class rational
{
public:
    rational( int , int  , int , int);

    int getNumerator()const;
    int getDenominator()const;

    void addRationalNumbers();
    void subtractRationalNumbers();
    void multiplyRationalNumbers();
    void divideRationalNumbers();

    void setDecimalNumber();
    double getDecimalNumber()const;

    void breakNumbersDown();

    void displayRationalNumber()const;

private:
    int numerator;
    int numerator1;
    int numerator2;

    int denominator;
    int denominator1;
    int denominator2;

    double decimal ;

};

#endif // RATIONAL_H
