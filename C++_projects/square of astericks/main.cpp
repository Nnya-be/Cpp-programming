#include <iostream>

using namespace std;

int main()
{
    unsigned int side = 0;
    int column  =  1;
    int row    = 1;


    cout<< "Enter the number of sides of the square :";
    cin >> side;

    while ( column <= side)
    {
        row = side;

        while( row >= 1)
        {
            cout << "*";
            row--;
        }
        cout<<endl;

        column ++;
    }
}
