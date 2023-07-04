#include <string>

class Employee
{
    public:
        explicit Employee(std::string , std::string , int);

        void setFirstName(std::string);
        std::string getFirstName()const;

        void setSecondName(std::string);
        std::string getSecondName()const;

        void setMonthlySalary(int);
        int getMonthlySalary()const;

    private:
        std::string firstName;
        std::string secondName;
        int monthlySalary;
};


