//a program to determine whether a number is a multiple of another

#include <iostream>

using namespace std;

int main()
{
    //initializing the identifiers

    int num1 = 0;
    int num2 = 0;

    //taking numbers
    cout<<"Enter the first number :"<<endl;
    cin>>num1;

    cout<<"Enter the second number :"<<endl;
    cin>>num2;

    //making the manipulations

    if(num2 % num1 ==0)
        cout<<num1 <<" Is a multiple of "<<num2<<endl;
    if(num2 % num1 !=0)
        cout<<num1 <<" Is not a multiple of "<<num2<<endl;
}
