// Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
// with separate functions for each operation whose real and imaginary parts are entered by the user.

#include<iostream>
using namespace std;

class Complex
{
    public:
        int real;
        int imaginary;

        Complex(int a, int b)
        {
            real = a;
            imaginary = b;
        }
};


void sum(Complex c1, Complex c2)
{
    cout << "The sum of two complex number is ("<< c1.real + c2.real << ") + (" << c1.imaginary + c2.imaginary << ")i" << endl;
}
void difference(Complex c1, Complex c2)
{
    cout << "The sum of two complex number is ("<< c1.real - c2.real << ") + (" << c1.imaginary - c2.imaginary << ")i" << endl;
}
void product(Complex c1, Complex c2)
{
    cout << "The sum of two complex number is ("<< c1.real*c2.real - c1.imaginary*c2.imaginary << ") + (" << c1.real*c2.imaginary + c1.imaginary*c2.real << ")i" << endl;
}

int main()
{
    int a, b;

    cout << "Enter real and imaginery part of c1: ";
    cin >> a >> b;

    Complex c1(a, b);

    cout << "Enter real and imaginery part of c2: ";
    cin >> a >> b;

    Complex c2(a, b);

    sum(c1, c2);
    difference(c1, c2);
    product(c1, c2);
}