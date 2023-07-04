#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
        Complex com(2.3 , 26.2);
        Complex com2(4,2.2);
        Complex com1;
        cout << com;



        cout << "Enter the complex number in :";
        cin >> com1;

      cout << com1 * com * com2;
}
