#include <iostream>

using namespace std;

int main()
{
    int firstSection =0;
    int secondSection = 0;
    int counter;
    int number = 0;

    cout<< "Enter your number :";
    cin>>number;


        firstSection = number / 1000;
        secondSection = number % 100;

        int num ;
        int currentNumber;
        num = secondSection % 10;
        currentNumber = num * 10 + (secondSection / 10);


        if ( currentNumber == firstSection)
            cout<< "The number is a palindrome "<<endl;

        else
            cout<< "The number is not a palindrome "<<endl;
}
