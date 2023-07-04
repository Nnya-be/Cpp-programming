#include "fullname.h"
#include <iomanip>

using namespace std;

fullname::fullname()
{

}


 istream &operator >> ( istream &in , fullname &names)
 {
    in>>setw(10)>>names.firstName;
     in>>setw(10)>>names.secondName;

     return in ;
 }

 ostream &operator << (ostream &out , fullname &names)
 {
      out << names.firstName << " \n"
      <<names.secondName<<endl;

      return out;
 }
