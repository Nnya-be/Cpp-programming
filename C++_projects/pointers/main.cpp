#include <iostream>

using namespace std;

int main()
{
    int  *nPtr = nullptr;
    int n[ ]  = {1,2,3,4,5,6,7,8};

    nPtr = n;

    cout <<nPtr  <<endl;
    cout << *(n + 1 )<<endl;
    cout << nPtr + 2 <<endl;


}
