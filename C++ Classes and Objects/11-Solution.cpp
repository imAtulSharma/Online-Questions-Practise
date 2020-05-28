// Write a program that would print the information (name, year of joining, salary, address) of three employees
// by creating a class named 'Employee'. The output should be as follows:
// Name        Year of joining        Address
// Robert        1994        64C- WallsStreat
// Sam        2000        68D- WallsStreat
// John        1999        26B- WallsStreat

#include<iostream>
using namespace std;

class Employee
{
    public:
        string name;
        int year_of_joining;
        double salary;
        string address;

        Employee(string get_name, int get_year_of_joining, double get_salary, string get_address)
        {
            name = get_name;
            year_of_joining = get_year_of_joining;
            salary = get_salary;
            address = get_address;
        }
};

int main()
{
    Employee Robert("Robert", 1994, 50000, "64C- WallsStreet"), Sam("Sam", 2000, 64000, "68d- WallsStreet"), John("John", 1999, 890000, "26B- WallsStreet");

    cout << "Name\tYear ofjoining\t\tAddress" << endl;
    cout << Robert.name << "\t\t" << Robert.year_of_joining << "\t\t" << Robert.address << endl;
    cout << Sam.name << "\t\t" << Sam.year_of_joining << "\t\t" << Sam.address << endl;
    cout << John.name << "\t\t" << John.year_of_joining << "\t\t" << John.address << endl;
}