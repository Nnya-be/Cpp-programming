#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main()
{
    RationalNumber ra(4,8);
    RationalNumber ra1( 2 , 6 );

    if ( ra == ra1)
        cout << " hey ";
        else
    if( ra != ra1)
        cout << " there ";

    else
        cout << " none";
}
