// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
// First function named as 'setDim' takes the length and breadth of the rectangle 
// as parameters and the second function named as 'getArea' returns the area of the rectangle.
// Length and breadth of the rectangle are entered through keyboard.

#include<iostream>
#include<string>

using namespace std;

class Area
{
    public:
        int length, breadth;

        void setDim(int a, int b)
        {   
            length = a;
            breadth = b;
        }
        int getArea()
        {
            return length*breadth;
        }
};

int main()
{
    Area r1, r2;
    int a, b;

    cout << "Enter dimensions(length and breadth) of rectangle r1: ";
    cin >> a >> b;
    r1.setDim(a, b);

    cout << "Enter dimensions(length and breadth) of rectangle r2: ";
    cin >> a >> b;
    r2.setDim(a, b);

    cout << "The area of r1 is " << r1.getArea() << " and area of r2 is " << r2.getArea() << "." << endl;

    return 0;
}