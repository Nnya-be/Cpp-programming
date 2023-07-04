#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    unsigned int largestNumber = 0;

    while ( counter <= 10)
    {
        unsigned int number = 0;


        cout<<"Enter the next number :";
        cin >> number;

         counter ++;

        if ( largestNumber < number )

               largestNumber = number;

           else
            largestNumber = largestNumber;


        cout << "The current larger number is :"<< largestNumber <<endl;

        cout << endl;

    }
}
