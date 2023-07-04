#include <iostream>

using namespace std;

int main()
{
    int num = 9;
    int *numAdd = &num;

    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<numAdd<<endl;
    cout<<*numAdd<<endl;

    return 0;
}
