#include <iostream>
#include <string>
//a program to show the improved version of the GradeBook
using namespace std;

class Gradebook
{
public:
    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName ()const
    {
        return courseName;
    }


    void displayMessage()const
    {
        cout<<"Welcome to your \n "<<getCourseName()<<" Grade Book"<<endl;
    }

private:
   string courseName;
};


int main()
{
    string nameOfCourse;

    Gradebook myGradeBook;
    //Displaying the initial course name
    cout<<" Your initial Course name is :"<<myGradeBook.getCourseName()<<endl;

    cout<<endl;

    //Prompting the user for a course name
    cout<<"Enter the name of your course :"<<endl;
    getline(cin,nameOfCourse);

    cout<<endl;

    myGradeBook.setCourseName(nameOfCourse);

    myGradeBook.displayMessage();

}
