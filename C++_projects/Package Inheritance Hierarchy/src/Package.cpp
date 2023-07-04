#include "Package.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

Package::Package( string name1, string address1 , string city1 ,
                 string state1, string zip1 , double weight , double cost,
                 string name2 , string address2, string city2 ,string state2, string zip2)

    : senderName(name1),senderAddress(address1),senderCity(city1),senderState(state1),
    senderZipCode(zip1),
    receiverName(name2),
    receiverAddress(address2),receiverCity(city2),receiverState(state2),receiverZipCode(zip2)
{
    setPackageWeight(weight);
}

void Package::setPackageWeight( double weight )
{
    //verifying the weight of the package
    if(weight >= 0.0)
        packageWeight = weight;
    else
    {
            throw invalid_argument( " Invalid weight entered");
            packageWeight = 0.0;
    }
}

double Package::getPackageWeight()const
{
// returning the package weight
    return packageWeight;
}

void Package::setCostPerOunce(double cost)
{

    if (  cost >= 0.0 )
        costPerOunce = cost;
    else
    {
        throw invalid_argument( "invalid cost per ounce entered");
        costPerOunce = 0.0;
    }
}

double Package::getCostPerOunce()const
{
    return costPerOunce;
}

double Package::calculateCost()
{
    return packageWeight * getCostPerOunce();
}

void Package::packageInformation()const
{
    cout << setprecision(2) << fixed;

    cout << " The information of this package is below."
    << "\n check for any correction in this information or ignore." <<endl;

    cout << "Sender info:"
    << "\nName" << setw(5) << senderName
    << "\nAddress"<<setw(5) << senderAddress
    <<"\nState"<<setw(5) << senderState
    <<"\nZip code" <<setw(5) << senderZipCode << endl;
    cout << endl;
    cout << endl;

    cout << "Receivers info:"
    << "\nName" << setw(5) << receiverName
    << "\nAddress"<<setw(5) << receiverAddress
    <<"\nState"<<setw(5) << receiverState
    <<"\nZip code" <<setw(5) << receiverZipCode << endl;

    cout << endl;
    cout<<endl;

    cout << "Package info :"
    << "\nPackage weight :" <<setw(5)<<getPackageWeight()
    << "\nPackage cost :" <<setw(5)<< packageWeight * getCostPerOunce()<<endl;
}
