#include <iostream>
#include <iomanip>

//a program to calculate the miles per gallon of a journey

using namespace std;

int main()
{
        //initializing global variables

        double tMiles = 0;
        double tGallons = 0;
        double tMilesPerGallons = 0;

        //prompting user for value of miles

        cout<<"Enter miles driven or ( -1 to quit ) : ";
        int miles = 0;
        cin >>miles;

        //begin the while looping
            while(miles != -1 )
            {
                //prompting and passing value of gallons used
                cout<<"Enter number of gallons used : ";
                int gallons = 0;
                cin>>gallons;

                //passing various parameters to the total sum
                tMiles += miles;
                tGallons += gallons;

                //performing to output calculations of miles per gallons
                double milesPerGallons = 0;
                milesPerGallons = static_cast<double>(miles) / gallons;
                cout<<setprecision(6)<<fixed;
                cout<<"MPG of this journey is : "<< milesPerGallons<<endl;


                //performing to output calculations of total miles per gallons
                tMilesPerGallons = tMiles / tGallons;

                cout<<"Total MPG of your journey is : " <<tMilesPerGallons<<endl;

                cout<<endl;

                //prompting user for next values or to quit
                cout<<"Enter miles driven or ( -1 to quit ) : ";
                cin>>miles;


            }



}
