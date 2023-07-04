#include "GradeBook.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

GradeBook::GradeBook( const string &name,
std::array< std::array < int, tests > , students> &gradesArray )
: courseName(name),grades(gradesArray)
{

}


void GradeBook::setCourseName(const string &name)
{
        courseName = name;
}

string GradeBook::getCourseName()const
{
    return courseName;
}

void GradeBook::setInstructorName(string instruct)
{
    instructorName = instruct;
}


string GradeBook::getInstructorName()const
{
    return instructorName;
}

void GradeBook::displayMessage()const
{
    cout<<"Welcome to your Grade book for :"<<getCourseName()<<" !"<<endl;
}


void GradeBook::determineClassAverage()const
{
    int total = 0;
    unsigned int gradeCounter = 1;

    cout<<"Enter grade or -1 to quit :";
    int grade =0;
    cin>> grade;


    while(grade != -1)
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout<<"Enter next grade or -1 to quit: ";
        cin>>grade;
    }

    if (gradeCounter != 0)
    {
        double average = static_cast<double>(total) / gradeCounter;

        cout<<"\nTotal of all " <<gradeCounter << "grades entered is " <<total<<endl;

        cout<<setprecision(2)<<fixed;
        cout<<"Class average is : "<<average<<endl;
           }
}

void GradeBook::inputGrade()
{

    int grade1;
    int grade2;
    int grade3;

    cout << "Enter three integers :";
    cin >> grade1 >> grade2 >> grade3;

    maximumGrade = maximum(grade1 , grade2 , grade3 );

    /*
    {
        int grade;

    cout << "Enter the letter grades." << endl;
    cout << " Enter the EOF character to end input."<< endl;

     while( (grade = cin.get()) != EOF)
     {
         switch (grade)
         {
         case 'A':
         case 'a':
            ++aCount;
            break;

         case 'B':
         case 'b':
            ++bCount ;
            break;

         case 'C':
         case 'c':
            ++cCount;
            break;

         case 'D':
         case 'd':
            ++dCount;
            break;

         case 'E':
         case 'e':
            ++eCount;
            break;

         case 'F':
         case 'f':
            ++fCount;
            break;

         default:
            cout << "Incorrect letter grade entered."
            << "Enter a new grade." << endl;
            break;
         }
     }
    }*/
}

void GradeBook::displayGradeReport() const
{

    cout << "Maximum of grades entered :" << maximumGrade << endl;

    // output summary of results
    /*cout << "\n\nNuumber of students who received each letter grade:"
    << "\nA :" << aCount
    << "\nB :" << bCount
    << "\nC :" << cCount
    << "\nD :" << dCount
    << "\nE :" << eCount
    << "\nF :" << fCount
    << endl;
    */
}

int GradeBook::maximum( int x , int y , int z ) const
{
    int maximumValue = x;

    if ( y > maximumValue )
        maximumValue = y;
    if ( z > maximumValue )
        maximumValue = z;

        return maximumValue;
}
void GradeBook::processGrades()const
{
    outputGrades();

    cout << "Lowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() <<endl;

    outputBarChart();
}

int GradeBook::getMinimum()const
{
    int lowGrade = 100;

    for ( auto const &student : grades)
    {
        for( auto const &grade : student )
        {
            if(grade < lowGrade)
            lowGrade = grade;
        }

    }

    return lowGrade;
}

int GradeBook::getMaximum()const
{
    int highGrade = 0;
    for ( auto const &student :grades)
    {
        for( auto const &grade : student)
        {
            if (grade > highGrade)
            highGrade = grade;
        }

    }

    return highGrade;
}

double GradeBook::getAverage( const array<int , tests > &setOfGrades )const
{
    int total = 0;

    for(int grade : setOfGrades)
        total +=grade;

    return static_cast<double>(total)/setOfGrades.size();
}

void GradeBook::outputBarChart()const
{
    cout << "\nOverall grade distribution :" <<endl;

    const size_t frequencySize = 11;
    array<unsigned int , frequencySize > frequency = {};

    for ( auto const &student : grades)
        for( auto const &test : student)
        ++frequency[test / 10];

    for (size_t count = 0; count < frequencySize ; ++count)
    {
        if(0 == count)
            cout<< "0 - 9";
        else
            if(10 == count)
            cout << "     100: ";
        else
            cout << count * 10 << " - " << ( count * 10 ) + 9 << " : ";

        for ( unsigned int stars = 0; stars < frequency[ count ]; ++stars)
            cout << '*';

        cout << endl;
    }
}

void GradeBook::outputGrades()const
{
    cout << "\nThe grades are :\n\n";
    cout << "           ";


    for( size_t test = 0; test < tests; ++test )
        cout << " Test " << test + 1 << " ";

    cout << "Average " <<endl;

    for ( size_t student = 0; student < grades.size(); ++student)
    {
        cout << "Student " << setw(2) << student +1;

        for( size_t test = 0; test < grades[ student ].size(); ++test )
        cout << setw(8) << grades[ student ][ test ];



        double average = getAverage( grades [ student ]);

        cout << setw(9) << setprecision(2) <<fixed <<average <<endl;
    }
}
