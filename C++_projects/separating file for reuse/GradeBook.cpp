#include "GradeBook.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    GradeBook gradebook1("Introduction to programming ");

    cout<<"Your initial grade name is :"<<gradebook1.getCourseName()<<endl;
}
