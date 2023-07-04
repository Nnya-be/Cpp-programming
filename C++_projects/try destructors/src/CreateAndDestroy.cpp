#include "CreateAndDestroy.h"
#include <iostream>
#include <string>

using namespace std;


CreateAndDestroy::CreateAndDestroy( int ID , string stringMessage)
    :objectID(ID) , message(stringMessage)
{
        cout << "object " << objectID <<  " constructor runs " <<message <<endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
        cout << (objectID == 1 || objectID == 6 ? "\n" : "");

        cout << "object " << objectID << " destructor runs " << message << endl;
}
