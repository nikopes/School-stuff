#include <iostream>
#include <string>

// Define the complex class
class Complex {
private:
    double real;
    double imaginary;
public:
    // Constructor to initialize Complex class
    Complex(double r = 0, double i = 0): real(r), imaginary(i){}
    // Overload +, - and / functions for Complex class
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    Complex operator/(const Complex& other) {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double r = (real * other.real + imaginary * other.imaginary) / denominator;
        double i = (imaginary * other.real - real * other.imaginary) / denominator;
        return Complex(r, i);
    }
    // Declare a friend function to overload << for output
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

// Define the friend function
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real;
    if (c.imaginary >= 0)
        os << " + " << c.imaginary << "i";
    else
        os << " - " << -c.imaginary << "i";
    return os;
}

int main() {
    // Defining values for complex numbers
    Complex c1(4, 5), c2(2, -3);
    // Outputs the complex numbers 
    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "Sum = " << c1 + c2 << std::endl;
    std::cout << "Difference = " << c1 - c2 << std::endl;
    std::cout << "Quotient = " << c1 / c2 << std::endl;
    return 0;
}