#include "../include/cube.h"
#include <iostream>
using namespace std;
Cube::Cube(int loc[3], int edgeLength) : Shape("Cube", loc), side(edgeLength) {}

void Cube::print() const
{
  cout << "Shape: Cube" << endl;
  Shape::print();
  cout << "Side length: " << side << endl;
}

float Cube::area() const
{
  return 6 * side * side;
}

float Cube::volume() const
{
  return side * side * side;
}
