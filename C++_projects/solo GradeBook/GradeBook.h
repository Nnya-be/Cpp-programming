#include <array>
#include <string>

class GradeBook
{
    public:
        static const size_t students = 10;
        static const size_t tests    = 3;


        GradeBook( const std::string &,
                   std::array<std::array <int, tests> , students > &);

        //course name setting functions
        void setCourseName(const std::string &);
        std::string getCourseName()const;

        //instructor name setting functions
        void setInstructorName(std::string);
        std::string getInstructorName()const;

        void displayMessage()const;

        //determining the average of the class scores

        void determineClassAverage()const;
        void inputGrade();
        void displayGradeReport()const;
        void processGrades()const;

        int getMinimum()const;
        int getMaximum()const;

        double getAverage( const std::array <int , tests> &)const;
        void outputBarChart()const;
        void outputGrades()const;
        int maximum(int, int , int)const;
    private:
        std::string courseName;
        std::string instructorName;
        int maximumGrade;
        std::array< std::array <int , tests > , students>grades;
};

