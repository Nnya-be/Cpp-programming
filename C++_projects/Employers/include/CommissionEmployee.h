#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <string>
#include "employee.h"

class CommissionEmployee : public employee
{
    public:
        CommissionEmployee( const std::string & , const std::string &, const std::string &,
                           double = 0.0 , double = 0.0);
        virtual ~CommissionEmployee() { };

        void setCommissionRate( double );
        double getCommissionRate( )const;

        void setGrossSales( double );
        double getGrossSales( )const;

        virtual double earnings( )const override;
        virtual void print( ) const override;

    private:
        double grossSales;
        double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H
