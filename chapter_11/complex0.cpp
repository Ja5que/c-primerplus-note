#include "complex0.h"
#include <iostream>

Complex0::Complex0(double r, double i){
    real = r;
    imaginary = i;
}

Complex0 Complex0::operator+(const Complex0 & c) const{
    return Complex0(real + c.real, imaginary + c.imaginary);
}

Complex0 Complex0::operator-(const Complex0 & c) const{
    return Complex0(real - c.real, imaginary - c.imaginary);
}

Complex0 Complex0::operator*(const Complex0 & c) const{
    return Complex0(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

Complex0 Complex0::operator*(double n) const{
    return Complex0(real * n, imaginary * n);
}

Complex0 Complex0::operator~() const{
    return Complex0(real, -imaginary);
}

Complex0 operator*(double n, const Complex0 & c){
    return c * n;
}

std::ostream & operator<<(std::ostream & os, const Complex0 & c){
    os << "(" << c.real << ", " << c.imaginary << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, Complex0 & c){
    std::cout << "real: ";
    is >> c.real;
    std::cout << "imaginary: ";
    is >> c.imaginary;
    return is;
}

