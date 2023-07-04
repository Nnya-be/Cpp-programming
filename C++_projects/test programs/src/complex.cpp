#include "complexa.h"
#include <iostream>

using namespace std;

complexa::complexa(double r , double i )
: real  ( r ) , imaginary( i )
{

}

void complexa::displayComplexNumber( ) const
{
    cout << "Your complex number is : " << real << "+ " << imaginary << endl;
}
