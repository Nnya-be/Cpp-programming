#include <iostream>
#include "employer.h"

using namespace std;

int main()
{

    cout << "No of employers before instantiation of any objects is " << employer::getCount( ) <<endl;

        {
            employer  e1( " Susan " , " Baker ");
            employer  e2( "Robert " , "Jones"  );


            cout << "No of employers after objects are instantiated is " << employer::getCount( );

            cout << "\n\nEmployer 1 :"<<e1.getFirstName( ) << "  " << e1.getLastName( )
            << "\nEmployer 2 :" << e2.getFirstName( ) << "  " << e2.getLastName( ) << "\n\n";
        }


        cout << "\n Number of employers after objects are deleted is " <<employer::getCount( )<<endl;

}
