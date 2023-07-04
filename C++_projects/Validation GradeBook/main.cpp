#include <iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
    GradeBook myBook("Introduction to C plus plus");

    cout<<"Your initial grade name is :"<<myBook.getCourseName()<<endl;
}
