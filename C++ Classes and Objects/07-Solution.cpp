// Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth
// as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle.
// Length and breadth of the rectangle are entered through keyboard.

#include<iostream>
#include<string>

using namespace std;

class Area
{
    public:
        int length, breadth;

        Area(int a, int b)
        {   
            length = a;
            breadth = b;
        }
        int returnArea()
        {
            return length*breadth;
        }
};

int main()
{
    int a, b;

    cout << "Enter dimensions(length and breadth) of rectangle r1: ";
    cin >> a >> b;
    Area r1(a, b);

    cout << "Enter dimensions(length and breadth) of rectangle r2: ";
    cin >> a >> b;
    Area r2(a, b);

    cout << "The area of r1 is " << r1.returnArea() << " and area of r2 is " << r2.returnArea() << "." << endl;

    return 0;
}