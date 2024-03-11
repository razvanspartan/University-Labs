#include <iostream>
#include <ostream>
using namespace std;
class Complex{

    public:

    Complex();
    Complex(double re, double im);
    double real();
    double imag();
    void setReal(double re);
    void setImag(double im);
    Complex operator+(const Complex& c);
    friend ostream& operator<<(ostream& os, const Complex& c);
    
    private:
        double re;
        double im;
};