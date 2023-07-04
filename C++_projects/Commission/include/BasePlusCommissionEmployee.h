#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include <string>
#include "CommissionEmployee.h"


class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee( const std::string &, const std::string &, const std::string &, double = 0.0 , double  = 0.0, double = 0.0 );

        void setBaseSalary( double );
        double getBaseSalary( )const ;

        double earnings( )const ;

        void print( )const;

    private:
        double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
