#include<iostream>
#include<string>


using namespace std;

class GradeBook
{
public:
    void displayMessage(string courseName)
    {
        cout<<"Welcome to your grade book for\n"<<courseName<<"!"<<endl;
    }
};

int main()
{
    string name;

    cout<<"Please Enter your course name :"<<endl;
    getline(cin,name);
    cout<<endl;

    GradeBook myGradeBook;
    myGradeBook.displayMessage(name);

}
