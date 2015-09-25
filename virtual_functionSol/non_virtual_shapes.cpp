#include <iostream.h>
#include "timer.h"

//////////////////////////////////////////////////////////////////////////
//
// To compile and run this program:
//
//   1. In a DOS window, execute VC_DIR\bin\VCVARS32.BAT
//      where VC_DIR is the directory where Visual C++ is installed.
//      For example, the default installation directory for Visual C++ 6.0
//      in Visual Studio 6.0 is:
//        C:/Program Files/Microsoft Visual Studio/VC98
//
//   2. Compile with the following command line in the same DOS window:
//        cl -o nvshapes.exe -I.. -GX non_virtual_shapes.cpp ..\util\timer.cpp
//
//   3. Run the program with
//        nvshapes
//
/////////////////////////////////////////////////////////////////////////

enum ShapeType {SquareShape, CircleShape, OvalShape, TriangleShape};

class Shape {
public:
    Shape(ShapeType t) { type = t; }
    void paint() {}
public:
    ShapeType type;
};

class Square : public Shape {
public:
    Square() : Shape(SquareShape) {}
    void paint() {}
};

class Circle : public Shape {
public:
    Circle() : Shape(CircleShape) {}
    void paint() {}
};

class Oval : public Shape {
public:
    Oval() : Shape(OvalShape) {}
    void paint() {}
};

class Triangle : public Shape {
public:
    Triangle() : Shape(TriangleShape) {}
    void paint() {}
};

int main1()
{
    int         i;
    const int   num_iter = 800000;

    Timer t("Time for 800000 non virtual paint operations: ");

    Shape **shapes = new Shape*[num_iter];

    for (i = 0; i < num_iter; i++) {
        switch (i % 4) {
        case 0:
            shapes[i] = new Square;
            break;
        case 1:
            shapes[i] = new Circle;
            break;
        case 2:
            shapes[i] = new Oval;
            break;
        case 3:
            shapes[i] = new Triangle;
            break;
        }
    }

    for (i = 0; i < num_iter; i++) {
        switch (shapes[i]->type) {
        case SquareShape:
            ((Square*)shapes[i])->paint();
            break;
        case CircleShape:
            ((Circle*)shapes[i])->paint();
            break;
        case OvalShape:
            ((Oval*)shapes[i])->paint();
            break;
        case TriangleShape:
            ((Triangle*)shapes[i])->paint();
            break;
        }
    }

    return 0;
}
