//a program to  print diameter and circumference and area of a circle
#include <iostream>

using namespace std;

int main()
{
    //initialising the identifiers
    int radius =0;

    //taking the radius
    cout<<"Enter the radius of the circle in cm :"<<endl;
    cin>>radius;

    cout<<"The diameter is : "<<radius + radius<<endl;

    cout<<"The circumference is : "<< 2 * (3.14159 * radius)<<endl;

    cout<<"The Area is : "<< 3.14159 * (radius * radius)<<endl;

}
