// Write a program by creating an 'Employee' class having the following functions and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.

#include<iostream>
using namespace std;

class Employee
{
    public:
        int salary, working_hour;
        
        void getInfo(int get_salary, int get_working_hour)
        {
            salary = get_salary;
            working_hour = get_working_hour;
        }

        void AddSal()
        {
            if(salary < 500)
            {
                salary += 10;
            }
        }

        void AddWork()
        {
            if(working_hour > 6)
            {
                salary += 5;
            }
        }

        void printInfo()
        {
            cout << "Salary and working hour of the employee are " << salary << " and " << working_hour << "." << endl;
        }
};

int main()
{
    Employee john;
    
    john.getInfo(60, 7);
    john.AddSal();
    john.AddWork();
    john.printInfo();

    return 0;
}