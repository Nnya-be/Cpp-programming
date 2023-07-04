#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
   Employee myWork("Solomon " , "Chamamme", 8394) ;
   Employee myWork1("Therezah " , "Nnyabe " , -64);

   cout<<myWork1.getMonthlySalary();


}
