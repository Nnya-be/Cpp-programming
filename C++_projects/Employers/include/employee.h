#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>


class employee
{
    public:
        employee( const std::string & , const std::string & ,  const  std::string&);

        virtual ~employee(){ };

        void setFirstName( const std::string &);
        std::string getFirstName( )const ;

        void setLastName( const std::string &);
        std::string getLastName( )const;

        void setSocialSecurityNumber( const std::string & );
        std::string getSocialSecurityNumber( )const;

        //pure virtual functions makes Employee an abstract base class
        virtual double earnings( )const = 0;
        virtual void print( )const;

    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
};

#endif // EMPLOYEE_H



