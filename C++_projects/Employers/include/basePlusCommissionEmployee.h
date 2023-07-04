#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include <string>
#include "CommissionEmployee.h"


class basePlusCommissionEmployee : public CommissionEmployee
{
    public:
        basePlusCommissionEmployee( const std::string &, const std::string & , const std::string &,
                                   double = 0.0 , double = 0.0 , double = 0.0 );


    void setBaseSalary ( double );
    double getBaseSalary ( ) const ;

    virtual double earnings( ) const override;
    virtual void print ( ) const override;

    private:
        double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
