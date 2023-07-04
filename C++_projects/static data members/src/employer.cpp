#include "employer.h"
#include <iostream>

using namespace std;

unsigned int employer::counter  = 0;


unsigned int employer::getCount()
{
    return counter;
}


employer::employer( const string &first, const string &last )
    :firstName( first ) , lastName( last )
{
        ++counter;

        cout << " Employer constructor for  " << firstName << ' ' << lastName << " called " <<endl;
}

employer::~employer()
{
    cout << " Destructor for " << firstName << ' ' << lastName << endl;
    -- counter;
}

string employer::getFirstName( ) const
{
    return firstName;
}

string employer::getLastName( ) const
{
    return lastName;
}
