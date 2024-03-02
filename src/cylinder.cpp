#include "../include/cylinder.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
Cylinder::Cylinder(int loc[3], int rad, int hgt) : Shape("Cylinder", loc), radius(rad), height(hgt) {}

void Cylinder::print() const
{
  cout << "Shape: Cylinder" << endl;
  Shape::print();
  cout << "Radius: " << radius << ", Height: " << height << endl;
}

float Cylinder::area() const
{
  return 2 * M_PI * radius * (radius + height);
}

float Cylinder::volume() const
{
  return M_PI * radius * radius * height;
}
