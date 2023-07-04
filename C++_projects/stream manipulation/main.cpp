#include <iostream>

using namespace std;

int main ()
{

        ///////////////// saving in this format outputs as a normal text //////////////////////////////////
    const char * const word = " hey there ";

    cout << word << endl;

    ////////////////////////////////////   the void returns a pointer to the text //////////////////////////////////
    cout << static_cast <const void* >(word) << endl;
}
