// Assign and print the roll number, phone number and address of two students having
// names "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        int roll_no;
        string ph_no;
        string add;
};

int main()
{
    Student sam, john;

    sam.roll_no = 34;
    sam.ph_no = "9876543210";
    sam.add = "New Delhi";

    john.roll_no = 76;
    john.ph_no = "9801234567";
    john.add = "Banglore";

    cout << "Roll number, phone number and address of sam is " << sam.roll_no << ", " << sam.ph_no << " and " << sam.add << "." << endl;
    cout << "Roll number, phone number and address of john is " << john.roll_no << ", " << john.ph_no << " and " << john.add << "." << endl;
    return 0;
}