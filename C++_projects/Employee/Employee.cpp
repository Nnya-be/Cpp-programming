#include "Employee.h"
#include<iostream>

using namespace std;


Employee::Employee(string fName, string sName , int mSalary)
    :firstName(fName), secondName(sName), monthlySalary(mSalary)
{
        if(mSalary >= 0)
    monthlySalary = mSalary;

    if (mSalary < 0)
        monthlySalary = 0;
}

void Employee::setFirstName(string name)
{
    firstName = name;
}

string Employee::getFirstName()const
{
    return firstName;
}

void Employee::setSecondName(string name)
{
    secondName = name;
}

string Employee::getSecondName()const
{
    return secondName;
}

void Employee::setMonthlySalary(int salary)
{
    if(salary >= 0)
    monthlySalary = salary;

    if (salary < 0)
        monthlySalary = 0;
}

int Employee::getMonthlySalary()const
{
    return monthlySalary;
}
