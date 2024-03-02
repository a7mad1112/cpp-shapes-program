#ifndef SPHERE_H
#define SPHERE_H

#include "../include/shape.h"

class Sphere : public Shape
{
public:
  Sphere(int loc[3], int rad);
  void print() const override;
  float area() const override;
  float volume() const override;

private:
  int r;
};

#endif