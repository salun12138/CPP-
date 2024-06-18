//
// Created by dell on 2024/6/17.
//

#include "Complex.h"
#include <iostream>

Complex::Complex() {
    real = imaginary = 0;
}

Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
}

Complex::~Complex() {

}

Complex Complex::operator+(const Complex &c) const {
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;

    return temp;
}

Complex Complex::operator-(const Complex &c) const {
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;

    return temp;
}

Complex Complex::operator*(const Complex &c) const {
    Complex temp;
    temp.real = real * c.real - imaginary * c.imaginary;
    temp.imaginary = real * c.imaginary + imaginary * c.real;
    return temp;
}

Complex operator*(int x, const Complex & c){
    Complex temp;
    temp.real = x * c.real;
    temp.imaginary = x * c.imaginary;

    return temp;
}

Complex operator~(const Complex & c){
    Complex temp;
    temp.real = c.real;
    temp.imaginary = c.imaginary * (-1);

    return temp;
}

std::ostream & operator<<(std::ostream & os, const Complex & c){
    os << "(" << c.real << "," << c.imaginary << "i)";

    return os;
}

std::istream & operator>>(std::istream & is, Complex & c){
    std::cout << "real:";
    is >> c.real;
    std::cout << "imaginary";
    is >> c.imaginary;

    return is;
}