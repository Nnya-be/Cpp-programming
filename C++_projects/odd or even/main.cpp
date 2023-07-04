//a program to check odd and even numbers

#include <iostream>

using namespace std;


int main()
{
    //initializing identifiers
    int number = 0;

    //taking number
    cout<<"Enter the number :"<<endl;
    cin>> number;

    //making manipulations
    if(number % 2==0)
        cout<<"The number is an even number"<<endl;

    if (number % 2==1)
        cout<<"The number is an odd number"<<endl;

}
