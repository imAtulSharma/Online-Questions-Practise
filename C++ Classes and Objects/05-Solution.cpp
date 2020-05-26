// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively 
// by creating a class named 'Rectangle' with a function named 'Area' which returns the area.
// Length and breadth are passed as parameters to its constructor.

#include<iostream>
#include<string>

using namespace std;

class Rectangle
{
    public:
        int length, breadth;

        Rectangle(int a, int b)
        {   
            length = a;
            breadth = b;
        }
        int area()
        {
            return length*breadth;
        }
};

int main()
{
    Rectangle r1(4, 5), r2(5, 8);

    cout << "The area of r1 is " << r1.area() << " and area of r2 is " << r2.area() << "." << endl;

    return 0;
}