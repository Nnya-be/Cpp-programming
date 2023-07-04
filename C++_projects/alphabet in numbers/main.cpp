//a program to display alphabets in their numeric forms

#include <iostream>

using namespace std;

int main()
{
    char solo ;
    //taking alphabets
    cout<<"Enter any alphabet :"<<endl;
    cin>>solo;

    cout<<endl;

    cout<<static_cast<int>(solo);

}
