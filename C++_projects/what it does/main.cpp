#include <iostream>

using namespace std;

int main()
{
    unsigned int counter = 1;

    while(counter <= 10 )
    {
        cout<<(counter % 2 ? "****" : "+++++++") <<endl;

        ++counter;
    }
}
