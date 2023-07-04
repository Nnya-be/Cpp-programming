#include <iostream>

 using namespace std;


 class GradeBook
 {
 public:
    void displayMessage()const
    {
        cout<<"Welcome to your grade book "<<endl;
    }

 };


 int main()
 {
     GradeBook myGradeBook;

     myGradeBook.displayMessage();
 }
