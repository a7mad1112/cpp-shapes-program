#ifndef CYLINDER_H
#define CYLINDER_H

#include "../include/shape.h"

class Cylinder : public Shape
{
public:
  Cylinder(int loc[3], int radius, int height);
  void print() const override;
  float area() const override;
  float volume() const override;

private:
  int radius;
  int height;
};

#endif
