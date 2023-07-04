#include<iostream>

using namespace std;
//a program to print the sum, product, and quotient of integers.

int main()
{
    //initializing the identifiers
        int number1 = 0;
        int number2 = 0;
    //prompting the user for the values
    cout<<"Enter your first number :";
    //getting the first integer value from user
    cin>>number1;
    //prompting the user for second value
    cout<<"Enter your second number :";
    cin>>number2;
    cout<<endl;

    //displaying the sum of the 2 numbers
    cout<<"The sum of "<<number1 <<" and "<<number2<<" is equal to :"<<number1 + number2<<endl;

    //displaying the product of the 2 numbers
    cout<<"The product of " <<number1<<" and "<<number2<<" is equal to :"<<number2*number1<<endl;

    //displaying the quotient of the numbers
    cout<<"The quotient of " <<number1 <<" and "<< number2<<" is equal to :"<<number1/number2<<endl;

    //displaying the difference of the  numbers
    cout<<"The difference of "<<number1<<" and "<<number2<<" is equal to :"<<number1-number2<<endl;

}
