// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
// by creating a class named 'Triangle' with the constructor having the three sides as its parameters.


#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Triangle
{
    public:
        Triangle(int a, int b, int c)
        {   
            int perimeter = a + b + c;
            float semi_perimeter = (float)perimeter/2;

            // By applying Heron's Formula to get the area of triangle
            float area = sqrt(semi_perimeter*( semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c) );

            cout << "The perimeter and area of the triangle is " << perimeter << " and " << area << " respictively." <<endl;
        }
};

int main()
{
    Triangle t1(3, 4, 5);

    return 0;
}