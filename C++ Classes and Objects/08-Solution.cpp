// Print the average of three numbers entered by the user by creating a class named 'Average'
// having a function to calculate and print the average without creating any object of the Average class.

#include<iostream>
using namespace std;

class Average
{
    public:
        static void get_average(int a, int b, int c)
        {
            double average = (double)(a + b + c)/3;

            cout << "The average is " << average << endl;
        }
};

int main()
{
    Average::get_average(2, 3, 4);
    return 0;
}