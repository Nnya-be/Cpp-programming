#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

void create( void ); // prototype

    CreateAndDestroy first(  1 , "( object before main is called)");

int main()
{

    cout << "\MAIN FUNCTION BEGIN TO EXECUTE :" <<endl;

    CreateAndDestroy second ( 2 , "( local automatic in main) ");
    static CreateAndDestroy third(3 , "( local static in main )" );

    cout << "\nMAIN FUNCTION CALLS THE CREATE FUNTION" <<endl;
    create();

    cout << "\n \nMAIN FUNCTION EXECUTION CONTINUES :" <<endl;

    CreateAndDestroy fourth (4, "(local automatic in main)");


    cout << "\n MAIN FUNCTION ENDS HERE \n" <<endl;
}
// end of the function main

void create ( void)
{

    cout << "\n  CREATE FUNCTION BEGINS EXECUTION " <<endl;
    CreateAndDestroy fifth(5 , "(local automatic in create)");
    static CreateAndDestroy sixth(6 , "(local static in create)");
    CreateAndDestroy seventh (7 , "(local automatic in create)");

    cout << "\n END OF FUNCTION CREATE " <<endl;

}

