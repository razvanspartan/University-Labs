/*#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <ostream>
#include "method.cpp"
using namespace std;
double absolutefunction(Complex c){
    return sqrt(c.real()*c.real()+c.imag()*c.imag());
}
void multiplyfunction(Complex& c1, Complex c2){
    c1.setReal(c1.real()*c2.real()-c1.imag()*c2.imag());
    c1.setImag(c1.real()*c2.imag()+c1.imag()*c2.real());

}

void display_mandelbrot( int width, int height, int max_its)
{
const float x_start = -3.0f;
const float x_fin = 1.0f;
const float y_start = -1.0f;
const float y_fin = 1.0f;
double dx = (x_fin - x_start)/(width - 1);
double dy = (y_fin - y_start)/(height - 1);
for(int y = 0; y < height; ++y)
{
for(int x = 0; x < width; ++x)
{
// TODO your code here
// create complex number z = 0 + 0i
Complex z{};
Complex c{x_start + x*dx, y_start + y*dy};

// create complex number c = x_start+ x*dx + (y_start+y*dy)i
int iteration = 0;
// while |z| < 2 and we haven't reach max_its
while(absolutefunction(z)<2 and ++iteration < max_its){
// apply the rule: z = z*z + c
multiplyfunction(z,z);
z=z+c;
}
// TODO: your code here (modify the code to display the mandelbrot

if(iteration == max_its){
printf( "\033[1;33;41m*\033[0m\n";);
}else{
printf( "-");
}
}
printf("\n");
}
}
int main(void)
{
display_mandelbrot(100, 25, 100);
getchar();
return 0;
}*/