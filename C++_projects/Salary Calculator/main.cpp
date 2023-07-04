#include <iostream>

using namespace std;

int main()
{
    int hoursWorked = 0;


    cout<<"Enter hours worked or ( -1 to quit ): ";
    cin>>hoursWorked;


    while(hoursWorked != -1 )
    {
        double rate = 0;
        cout<<"Enter rate of salary : ";
        cin >> rate;

        double salary = 0;
        {
            if(hoursWorked <= 40)
                salary = hoursWorked * rate;

            else
                salary = (hoursWorked * rate) * 1.5;
        }

        cout<<" Your Salary is : "<<salary<<endl;

        cout<<endl;


        cout<<"Enter hours worked or ( -1 to quit ): ";
        cin>>hoursWorked;
    }
}
