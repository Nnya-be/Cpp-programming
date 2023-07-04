#include <iostream>
#include <iomanip>
#include "datepro.h"

using namespace std;

int main()
{
    datepro date( 1 , 3, 45);

    for (int i = 1; i <= 400 ; i++)
    {
        date.setDay( i );
    date.displayDate();
    }

}
