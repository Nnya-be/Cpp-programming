#include <iostream>
#include "MyTime.h"
#include <ctime>

using namespace std;

int main()
{

    MyTime t (6,7,8);

    t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );

    cout << "Universal time:";
    t.printUniversal();

    cout << "\n Standard time: ";
    t.printStandard( ),


    cout << "\n\nNew standard time: ";

    t.setTime(20, 20,20).printStandard( );
    cout << endl;

}
