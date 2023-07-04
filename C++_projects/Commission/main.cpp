#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"


using namespace std;

int main()
{
      //creating the base class object
      CommissionEmployee com( "Sue" , "Solomon" , "23.45-3453-3452-3" , 10078.54 ,0.06);

      //creating a base class pointer
      CommissionEmployee *comPtr = nullptr;


      //creating the derived class object
      BasePlusCommissionEmployee base("Solomon" ,"Chamamme" , "4-5444-353-6" , 500 , .05,400  );

      BasePlusCommissionEmployee *basePtr = nullptr;

      cout << fixed <<setprecision( 2 );

      //outputting objects commission employee and BaseCommission

      cout << " Print the base class and derived class objects :\n\n";
      com.print();

      cout << "\n\n";
      base.print();


      //aim base class pointer at base class objects and print
      comPtr = &com;

      cout << "\n\n\nCalling the print  with base class pointer to "
      << "\nbase class object invokes base class print function\n\n";

      comPtr ->print();

      //aiming the derived class pointer at derived class objects and print
      basePtr = &base ;
      cout << "\n\nCalling the print with derived class pointer to "
      << "\nderived class object invoked derived class"
      << "print function :\n\n";
      basePtr ->print( );

      //aiming base class pointer at the derived class object and print

      comPtr = &base;
      cout << "\n\n\nCalling print with base class pointer to"
      << "\nderived class object\ninvokes base class print "
      << "\nfunction on that derived class object :\n\n";
      comPtr ->print( );

      cout <<endl;
}
