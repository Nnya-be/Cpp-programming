#include <iostream>
#include"GradeBook.h"

using namespace std;

int main()
{
    GradeBook myBook("Introduction to programming");

    cout<<"There's been a gradebook created for "<<myBook.getCourseName()<<endl;
}
