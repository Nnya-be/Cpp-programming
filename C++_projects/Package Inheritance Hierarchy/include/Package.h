#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>


class Package
{
    public:
        Package( std::string ,std::string , std::string , std::string , std::string ,
                double , double,std::string ,std::string , std::string , std::string , std::string);

    virtual double calculateCost();
    virtual void packageInformation()const;

    void setPackageWeight( double );
    double getPackageWeight()const;

    void setCostPerOunce( double );
    double getCostPerOunce()const;

    private:
        //declaring the sender's info
        std::string senderName;
        std::string senderAddress;
        std::string senderCity;
        std::string senderState;
        std::string senderZipCode;

        // declaring the package info
        double packageWeight;
        double costPerOunce;

        //declaring the receiver's info
        std::string receiverName;
        std::string receiverAddress;
        std::string receiverCity;
        std::string receiverState;
        std::string receiverZipCode;

};

#endif // PACKAGE_H
