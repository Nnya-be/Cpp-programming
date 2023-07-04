#include <iostream>

using namespace std;

int main()
{
    int number =9;
    double euler =1;
    double euler1 ;
    double euler2 =1;

    while(number > 1)
    {
        euler *= number;
        euler1 = 1/(euler);

        euler2 = euler1;

        number--;
    }
    cout << endl;

cout << euler1 << endl;
}

