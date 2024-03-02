# Shapes App
Welcome to ShapesApp! This C++ project provides a simple implementation of geometric shapes including cylinder, cube, and sphere classes, all inheriting from the base abstract shape class. The project demonstrates polymorphism and file input/output operations to manipulate shapes.

## Usage
To run ShapesApp, you'll need to install the g++ compiler. Once installed, follow these steps:

1. Clone the repository:
```
git clone https://github.com/a7mad1112/cpp-shapes-program.git
```

2. Navigate to the project directory:
```
cd shapesApp
```

3. Compile the program:
```
g++ main.cpp src/shape.cpp src/sphere.cpp src/cube.cpp src/cylinder.cpp -o shapesApp
```

4. Run the executable:
```
./shapesApp
```

## Functionality
ShapesApp offers the following functionality
- **Shape Classes:** Includes implementations of cylinder, cube, and sphere classes, all derived from the abstract shape class.
- **File I/O:** The program reads shapes from a file and stores them in a polymorphic array of pointers.
- **Volume Calculation:** Finds the shape with the highest volume among the shapes read from the file.

Happy coding! 🚀
