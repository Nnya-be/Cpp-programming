#include <iostream>
#include <iomanip>
#include <vector>
#include "employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "basePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer ( const employee  * const );
void virtualViaReference ( const employee & );


int main()
{

    cout << fixed << setprecision( 2 );

    SalariedEmployee salariedEmployee ( "Solomon" , " Chamamme " , "11-2-2343-3" , 800);
    CommissionEmployee commissionEmployee( "Amoateng " , "Precious" ,"110-235-76-34" , 10000, .06);
    basePlusCommissionEmployee BasePlusCommissionEmployee(
                                                          "Kumah " , "kingsley" , "87-5-643-3", 5000, .04 , 300);


            cout << "Employees processed individually using static binding:\n\n";

            salariedEmployee.print();
            cout << "\nearned $" << salariedEmployee.earnings( ) << "\n\n";
            commissionEmployee.print();
            cout << "\nearned $" << commissionEmployee.earnings( ) << "\n\n";
            BasePlusCommissionEmployee.print();
            cout << "\nearned $" <<BasePlusCommissionEmployee.earnings( )<< "\n\n";


            vector < employee *> employees( 3 );

            employees [ 0 ] = &salariedEmployee;
            employees[ 1 ] = &commissionEmployee;
            employees[ 2 ] = &BasePlusCommissionEmployee;


            cout << "Employees processed polymorphically via dynamic binding :\n\n";


            cout << "Virtual functions calls made off base-class pointer :\n\n";


            for ( const employee *employeePtr : employees )
                virtualViaPointer( employeePtr );

            cout << "Virtual function calls made off base-class references :\n\n";

            for ( const employee *employeePtr : employees )
                virtualViaReference ( *employeePtr );

}


void virtualViaPointer ( const employee *const baseClassPtr )
{
    baseClassPtr -> print( );
    cout << "\nearned $" <<baseClassPtr ->earnings( ) << "\n\n";
}


void virtualViaReference( const employee &baseClassRef )
{
    baseClassRef.print( );
    cout << "\nearned $" << baseClassRef.earnings( ) << "\n\n";
}
