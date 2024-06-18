//
// Created by dell on 2024/6/17.
//

#ifndef CHACPTER11_COMPLEX_H
#define CHACPTER11_COMPLEX_H
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double r, double i);
    ~Complex();
    Complex operator+(const Complex & c) const;
    Complex operator-(const Complex & c) const;
    Complex operator*(const Complex & c) const;
    friend Complex operator*(int x,const Complex & c);
    friend Complex operator~(const Complex & c);
    friend std::ostream & operator<<(std::ostream & os,const Complex & c);
    friend std::istream & operator>>(std::istream & is,Complex & c);
};


#endif //CHACPTER11_COMPLEX_H
