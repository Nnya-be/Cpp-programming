#include "Package.h"
#include "TwoDayPackage.h"
#include <stdexcept>

using namespace std;

TwoDayPackage::TwoDayPackage ( string name1, string address1 , string city1 ,
                 string state1, string zip1 , double weight , double cost,
                 string name2 , string address2, string city2 ,string state2, string zip2 , double flat )

                 :Package(name1 , address1 , city1 , state1, zip1 , weight , cost , name2, address2, city2 , state2, zip2)

{
    setFlatFee( flat);
}

void TwoDayPackage::setFlatFee( double flat )
{
    if( flat >= 0.0)
        flatFee = flat;
    else
        throw invalid_argument( " invalid Flat fee");
}

double TwoDayPackage::getFlatFee()const
{
     return flatFee;
}
