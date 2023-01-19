#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <iostream>

class Complex0{
private:
    double real;
    double imaginary;
public:
    Complex0(double r = 0, double i = 0);
    Complex0 operator+(const Complex0 & c) const;
    Complex0 operator-(const Complex0 & c) const;
    Complex0 operator*(const Complex0 & c) const;
    Complex0 operator*(double n) const;
    Complex0 operator~() const;
    friend Complex0 operator*(double n, const Complex0 & c);
    
    friend std::ostream & operator<<(std::ostream & os, const Complex0 & c);
    friend std::istream & operator>>(std::istream & is, Complex0 & c);
    
};

#endif