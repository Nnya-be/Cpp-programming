// a program to calculate your body mass index

#include <iostream>

using namespace std;

int main()
{
    //initializing identifiers

    int weight = 0;
    int height = 0;

    cout<<"Please all weight are in kg and height in meters "<<endl;

    cout<<endl;

    //taking values;

    cout<<"Please enter your weight :"<<endl;
    cin>>weight;

    cout<<"Please enter your height :"<<endl;
    cin>>height;

    //outputting the results of the person
    cout<<"Your BMI value is :"<<(weight)/(height * height)<<endl;
}
