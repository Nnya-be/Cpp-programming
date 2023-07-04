#include<iostream>
#include<string>

using namespace std;


class GradeBook
{
public:
    explicit GradeBook(string name)
    :courseName(name)
    {

    }

    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName()const
    {
        return courseName;
    }


    void displayMessage()const
    {
        cout<<"Welcome to your Grade book for :\n"<<getCourseName()<<endl;
    }

private:
    string courseName;

};



int main()
{

    string nameOfCourse;

    GradeBook myGradeBook("Introduction to Programming ");
    GradeBook gradeBook1("Advanced Programming");

    cout<<"Your initial Grade book is named :"<<myGradeBook.getCourseName()<<endl;

    cout<<endl;

    cout<<"Please enter your course name :"<<endl;
    getline(cin,nameOfCourse);

    gradeBook1.setCourseName(nameOfCourse);
    cout<<endl;

    cout<<endl;
    gradeBook1.displayMessage();

}
