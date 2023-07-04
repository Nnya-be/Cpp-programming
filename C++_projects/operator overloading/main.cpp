#include <iostream>
#include "doubleScriptedArray.h"
#include <stdexcept>

using namespace std;

int main()
{
   doubleScriptedArray doom(3, 3);
   doubleScriptedArray doom1(2,3);

    cin >> doom ;

    cout <<endl;
    cout <<endl;
    doom1 = doom;

    cout << doom1;


}
