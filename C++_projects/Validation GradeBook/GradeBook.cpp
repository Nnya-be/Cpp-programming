#include "GradeBook.h"
#include<iostream>

using namespace std;

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}


void GradeBook::setCourseName(string name)
{
    if(name.size()<=25)
    courseName = name;

    if(name.size()>25)
    {
        courseName = name.substr(0,25);
        cerr<<"The name \""<<name<<"\" exceeds maximum length (25).\n"<<"Limiting courseName to first 25 characters.\n"<< endl;
    }

}


string GradeBook::getCourseName()const
{
    return courseName;
}

void GradeBook::displayMessage()const
{
    cout<<"Hello !\n Welcome to your Gradebook for :\n"<<getCourseName()<<endl;
}
