// Write a program to print the volume of a box by creating a class named 'Volume'
// with an initialization list to initialize its length, breadth and height.

#include<iostream>
using namespace std;

class Volume
{
    public:
        int length;
        int breadth;
        int height;

        Volume() : length(5), breadth(6), height(10)
        {
            cout << "The volume of Box is " << length*breadth*height << endl;
        }
};

int main()
{
    Volume Box;
    return 0;
}