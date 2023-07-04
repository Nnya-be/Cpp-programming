#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>

class CommissionEmployee
{
    public:
        CommissionEmployee( const std::string & , const std::string & , const std::string & , double = 0.0 , double = 0.0 );

        void setFirstName( const std::string & );// set  first name
        std::string getFirstName ( ) const; //return first name

        void setLastName( const std::string & );//set second name
        std::string getLastName( )const ;//return second name

        void setSocialSecurityNumber( const std::string & );//set ssn
        std::string getSocialSecurityNumber( )const; // return ssn

        void setGrossSales ( double );// set gross amount on sales
        double getGrossSales ( )const;//return gross sales

        void setCommissionRate ( double );// set commission rate in percentage
        double getCommissionRate( )const ;//return commission rate

        double earnings( )const ;//calculate earnings

        void print( )const ;// print all the details in the class object

    private:
        std::string  firstName ;
        std::string lastName;
        std::string socialSecurityNumber;
        double grossSales;
        double commissionRate;

};

#endif // COMMISSIONEMPLOYEE_H
