#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
  Shape(const std::string &n, int loc[3]);
  virtual void print() const = 0;
  virtual float area() const = 0;
  virtual float volume() const = 0;

protected:
  std::string name;
  int location[3];
};

#endif
