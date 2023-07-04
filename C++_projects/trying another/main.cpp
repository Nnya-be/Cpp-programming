#include <iostream>
#include "times.h"
#include <stdexcept>


using namespace std;

int main()
{
    times t ;
    times t1(12,4,5);

    cout << "your time is set to :";
    t.printStandard() ;
    cout << endl;
    cout << " Please enter the hour :" ;
    unsigned int hour ;
    cin >>hour;

    cout << " Enter the minute : " ;
    unsigned int minute;
    cin >> minute;

    cout << "Enter the second :" ;
    unsigned int second ;
    cin >> second;


    t.setTime( hour , minute , second);

    t.printStandard();
    cout << endl;
    t.printUniversal();

    try
    {
        times t2(2,34,123);
    }

    catch( invalid_argument &e)
    {
        cerr << " Exception while initiation :" << e.what() <<endl;
    }
}
