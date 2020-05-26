
// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units 
// by creating a class named 'Triangle' with a function to print the area and perimeter.


#include<iostream>
#include<string>
using namespace std;

class Triangle
{
    public:
        void print_perimeter(int a, int b, int c)
        {   
            int perimeter = a + b + c;
            cout << "The perimeter of the triangle is " << perimeter << endl;
        }
};

int main()
{
    Triangle t1;

    t1.print_perimeter(3, 4, 5);

    return 0;
}