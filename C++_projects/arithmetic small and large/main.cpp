//a program to print the sum , product, and take out the smallest and largest

#include<iostream>

using namespace std;

int main()
{
    //declaring the identifiers;
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    //Prompting the user for the integers

    cout<<"Input three different integers :  "<<endl;
    cin >> number1 >> number2 >> number3;

    //calculating and outputting the sum,average and the product of the numbers
    cout<<"Sum is :"<<number1 + number2 + number3<<endl;
    cout<<"Average is :"<<(number1 + number2 + number3 )/3<<endl;
    cout<<"Product is :"<< number1 * number3 * number2<<endl;

    //making the comparison to output the smallest and the largest
    {
        if(number1 < number2)
    {
        if (number2 < number3)
            cout<<"Smallest : "<<number1<<"\nLargest :"<<number3<<endl;
        if (number2 > number3)
        {
            if (number3 < number1)
                cout<<"Smallest :"<<number3<<"\nLargest :"<<number2<<endl;
            if(number3 > number1)
                cout<<"Smallest :"<<number1<<"\nLargest :"<<number2<<endl;
        }
    }


        if(number1 > number2)
        {
            if(number2 > number3)
                cout<<"Smallest :"<<number3<<"\nLargest :"<<number1<<endl;
            if(number2 <number3)
            {
                if(number1 < number3)
                    cout<<"Smallest :"<<number2<<"\nLargest :"<<number3<<endl;
                if(number3 < number1)
                    cout<<"Smallest :"<<number2 <<"\nLargest :"<<number1<<endl;
            }
        }
    }

}
