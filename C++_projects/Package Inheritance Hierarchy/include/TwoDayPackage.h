#include "Package.h"
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>



class TwoDayPackage : public Package
{
    public:
        TwoDayPackage(std::string ,std::string , std::string , std::string , std::string ,
                double , double,std::string ,std::string , std::string , std::string , std::string,double=0.0 );

                void setFlatFee( double);
                double getFlatFee()const;
    private:
        double flatFee;
};

#endif // TWODAYPACKAGE_H
