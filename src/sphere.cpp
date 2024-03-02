#include "../include/sphere.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
Sphere::Sphere(int loc[3], int rad) : Shape("Sphere", loc), r(rad) {}

void Sphere::print() const
{
  cout << "Shape: Sphere" << endl;
  Shape::print();
  cout << "Radius: " << r << endl;
}

float Sphere::area() const
{
  return 4 * M_PI * r * r;
}

float Sphere::volume() const
{
  return (4.0 / 3.0) * M_PI * r * r * r;
}
