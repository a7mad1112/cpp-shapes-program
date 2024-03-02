#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "include/sphere.h"
#include "include/cube.h"
#include "include/cylinder.h"
using namespace std;

Shape **readShapes(string filename, int &size)
{
  ifstream in(filename);
  if (!in)
  {
    cerr << "cannot open file: " << filename << endl;
    size = 0;
    return nullptr;
  }
  in >> size;
  Shape **shapes = new Shape *[size];
  for (int i = 0; i < size; i++)
  {
    string shapeType;
    int loc[3];
    int dimension1, dimension2;
    in >> shapeType;
    if (shapeType == "Sphere")
    {
      in >> dimension1;
      in >> loc[0] >> loc[1] >> loc[2];
      shapes[i] = new Sphere(loc, dimension1);
    }
    else if (shapeType == "Cylinder")
    {
      in >> dimension1 >> dimension2;
      in >> loc[0] >> loc[1] >> loc[2];
      shapes[i] = new Cylinder(loc, dimension1, dimension2);
    }
    else if (shapeType == "Cube")
    {
      in >> dimension1;
      in >> loc[0] >> loc[1] >> loc[2];
      shapes[i] = new Cube(loc, dimension1);
    }
    else
    {
      cerr << "invalid shape type: " << shapeType << endl;
      shapes[i] = nullptr;
    }
  }
  return shapes;
}

Shape *LargestVolumeShape(Shape **shapes, int size)
{
  if (size <= 0 || shapes == nullptr)
  {
    return nullptr;
  }
  Shape *largestShape = shapes[0];
  float largestVolume = shapes[0]->volume();

  for (int i = 1; i < size; i++)
  {
    float currentVolume = shapes[i]->volume();
    if (currentVolume > largestVolume)
    {
      largestVolume = currentVolume;
      largestShape = shapes[i];
    }
  }
  return largestShape;
}

int main()
{
  int size = 0;
  Shape **shapes = readShapes("shapes.txt", size);
  if (shapes == nullptr)
  {
    cout << "can't read shapes from file" << endl;
    return 1;
  }
  Shape *largestShape = LargestVolumeShape(shapes, size);
  if (largestShape != nullptr)
  {
    cout << "the largest shape is: " << endl;
    largestShape->print();
    cout << "it has a volume = " << largestShape->volume() << endl;
  }
  else
  {
    cout << "The file is empty" << endl;
  }
  for (int i = 0; i < size; i++)
  {
    delete shapes[i];
  }
  return 0;
}