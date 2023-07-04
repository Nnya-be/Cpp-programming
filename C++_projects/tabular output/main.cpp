#include <iostream>

using namespace std;

int main()
{
    unsigned int counter = 1;

    cout<<"N\t"<<"10*N\t"<<"100*N\t"<< "1000*N"<<endl;
    cout<<endl;

    while ( counter <= 5)
    {
        cout<<counter <<"\t"<<counter *10<<"\t"<<counter * 100<<"\t"<<counter *1000<<endl;

        ++counter;
    }
}
