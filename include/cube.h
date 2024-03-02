#ifndef CUBE_H
#define CUBE_H

#include "../include/shape.h"

class Cube : public Shape
{
public:
  Cube(int loc[3], int edgeLength);
  void print() const override;
  float area() const override;
  float volume() const override;

private:
  int side;
};

#endif
