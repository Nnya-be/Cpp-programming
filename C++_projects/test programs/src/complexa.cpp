#include "complexa.h"
#include <iostream>

using namespace std;

complexa::complexa( double r , double i )
: real_1(r) , imaginary_1(i) , real_2(r) , imaginary_2(i)
{
       setFirstNumber( real_1 , imaginary_1);
       setSecondNumber( real_2 , imaginary_2);
}

void complexa::setFirstNumber( double &num_1, double & num_2 )
{

    cout << "Enter your  the first real number in the complex numbers :" ;
    cin >> num_1;


    cout << "Enter the first complex number of the second value: ";
    cin>>num_2;
}

void complexa::setSecondNumber( double &num_1, double & num_2 )
{

    cout << "Enter your  the first real number in the complex numbers :" ;
    cin >> num_1;


    cout << "Enter the first complex number of the second value: ";
    cin>>num_2;

    cout <<endl;
}

void complexa::addComplexReal( double num1)
{
     num1 = real_1 + real_2;

  add1= num1;
}

void complexa::addComplexImaginary( double num1)
{
     num1 = imaginary_1 + imaginary_2;

     add2= num1;
}

double complexa::realAdded()const
{
    return add1;
}

double complexa::imaginaryAdded()const
{
    return add2;
}

void complexa::displayNumber()
{
    cout << " The first imaginary number is  : (" << real_1 << "," << imaginary_1 << ")" <<endl;

    cout << "\nThe second imaginary number is : (" << real_2 << "," << imaginary_2 << ")" <<endl;

    cout <<endl;
    cout << "The added complex number gives : (" << realAdded() << "," << imaginaryAdded() << ")" <<endl;

}
