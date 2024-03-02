#include "../include/Shape.h"
#include <iostream>
using namespace std;
Shape::Shape(const string &n, int loc[3]) : name(n)
{
  location[0] = loc[0];
  location[1] = loc[1];
  location[2] = loc[2];
}
void Shape::print() const
{
  cout << "Location is: {" << location[0] << ", " << location[1] << ", " << location[2] << "}\n";
}
