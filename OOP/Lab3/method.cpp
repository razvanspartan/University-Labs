#include "complex.h"
#include <iostream>

Complex::Complex(){
    re = 0;
    im = 0;
}
Complex::Complex(double re, double im){
    this->re = re;
    this->im = im;
}
double Complex::real(){
    return re;
}
double Complex::imag(){
    return im;
}
void Complex::setReal(double re){
    this->re = re;
}
void Complex::setImag(double im){
    this->im = im;
}
Complex Complex::operator+(const Complex& c){
    Complex result;
    result.re = re + c.re;
    result.im = im + c.im;
    return result;
}
std::ostream& operator<<(std::ostream& os, const Complex& c){
    os << c.re << " + " << c.im << "i";
    return os;
}