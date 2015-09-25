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
//        cl -o vshapes.exe -I.. -GX virtual_shapes.cpp ..\util\timer.cpp
//
//   3. Run the program with
//        vshapes
//
/////////////////////////////////////////////////////////////////////////

class Shape {
public:
    virtual void paint() = 0; //pure virtual
};

class Square : public Shape {
public:
    virtual void paint() {}
};

class Circle : public Shape {
public:
    virtual void paint() {}
};

class Oval : public Shape {
public:
    virtual void paint() {}
};

class Triangle : public Shape {
public:
    virtual void paint() {}
};

int main()
{
    int         i;
    const int   num_iter = 800000;

    Timer t("Time for 800000 Virtual paint operations: ");

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
        shapes[i]->paint();
    }

    return 0;
}
