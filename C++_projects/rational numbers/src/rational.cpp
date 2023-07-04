#include<iostream>
#include"rational.h"
#include <iomanip>

using namespace std;

rational::rational( int nume , int denomi,int nume2 , int denomi2)
:numerator1(nume) , denominator1(denomi) , numerator2(nume2) , denominator2(denomi2)
{
    divideRationalNumbers();
    breakNumbersDown();
    setDecimalNumber();
}

int rational::getNumerator()const
{
    return numerator;
}

int rational::getDenominator()const
{
    return denominator;
}

void rational::addRationalNumbers()
{
    if(denominator1 % denominator2 ==0)
    {
        numerator = numerator1 + ((denominator1 / denominator2) * numerator2);
        denominator = denominator1;
    }

    else
        if(denominator2 % denominator1 == 0)
    {
        numerator = numerator2 + ((denominator2 / denominator1) * numerator1);
        denominator = denominator2;
    }

    else
    {
        denominator = denominator1 * denominator2;

        numerator = ((denominator / numerator1)* numerator1) + ((denominator / numerator2) * numerator2);
    }
}


void rational::subtractRationalNumbers()
{
    if(denominator1 % denominator2 ==0)
    {
        numerator = numerator1-  ((denominator1 / denominator2) * numerator2);
        denominator = denominator1;
    }

    else
        if(denominator2 % denominator1 == 0)
    {
        numerator = numerator2 - ((denominator2 / denominator1) * numerator1);
        denominator = denominator2;
    }

    else
    {
        denominator = denominator1 * denominator2;

        numerator = ((denominator / numerator1)* numerator1) - ((denominator / numerator2) * numerator2);
    }
}

void rational::multiplyRationalNumbers()
{
    numerator = numerator1 * numerator2;

    denominator = denominator1 * denominator2;
}

void rational::divideRationalNumbers()
{
    numerator = numerator1 * denominator2;
    denominator = denominator1 * numerator2;

}

void rational::breakNumbersDown()
{
    if( numerator % denominator == 0)
    {
        numerator =numerator / denominator;
        denominator = denominator / denominator;
    }
    else
        if ( denominator % numerator == 0)
    {
        denominator = denominator / numerator;
        numerator = numerator / numerator;
    }

    else
            {
                int small;
                for ( int  i = numerator;  i >=2 ; i--)
                {
                    if((i %numerator == 0) && (i % denominator == 0))
                    {
                        small = i;
                    }
                }

                numerator /=small;
                denominator /=small;
            }
}

void rational::setDecimalNumber()
{
    decimal = static_cast<double>(numerator)  / denominator;
}

double rational::getDecimalNumber()const
{
    return decimal;
}

void rational::displayRationalNumber()const
{
    cout << "The fraction is " << getNumerator() << "/ " << getDenominator()<<endl;
    cout << endl;
    cout << setprecision(3) << fixed<<endl;
    cout << "The decimal form is :" << getDecimalNumber() << endl;
}
