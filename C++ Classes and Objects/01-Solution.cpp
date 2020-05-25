// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        string name;
        int roll_no;
};

int main()
{
    Student s1;
    
    s1.name = "Atul sharma";
    s1.roll_no = 786;

    cout << "The name of student is " << s1.name << " and roll number is " << s1.roll_no << "." << endl;

    return 0;
}