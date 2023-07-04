#include <iostream>

using namespace std;

int main()
{
    double sales = 0;

    cout<<" Enter sales in dollars or ( -1 to end) : ";
    cin>> sales;

    while( sales != -1 )
    {
        double commision = 200 + ( 0.09 * sales);

        cout<<" Salary is : $"<<commision<<endl;

        cout<<endl;

        cout<<" Enter sales in dollars or ( -1 to end ) : ";
        cin >> sales;
    }
}
