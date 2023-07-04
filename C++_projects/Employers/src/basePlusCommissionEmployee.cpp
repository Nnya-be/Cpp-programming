#include "basePlusCommissionEmployee.h"
#include <iostream>
#include <stdexcept>

using namespace std;

basePlusCommissionEmployee::basePlusCommissionEmployee( const string &first , const string &last ,
                                                       const string &ssn , double sales ,double rate , double salary)
                                                       :CommissionEmployee ( first , last , ssn , sales , rate)
{
    setBaseSalary( salary );
}

void basePlusCommissionEmployee::setBaseSalary( double salary )
{
    if( salary >= 0.0 )
        baseSalary = salary;
    else
        throw invalid_argument( " salary must be >= 0.0 ");
}

double basePlusCommissionEmployee::getBaseSalary( )const
{
    return baseSalary ;
}

double  basePlusCommissionEmployee::earnings( )const
{
    return getBaseSalary( ) + CommissionEmployee::earnings( );
}

void basePlusCommissionEmployee::print( )const
{
    cout << "base-salaried ";
    CommissionEmployee::print( );
    cout << "; base salary : " << getBaseSalary( );
}

