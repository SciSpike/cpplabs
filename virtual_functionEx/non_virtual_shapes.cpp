#include "../lib/timer.h"

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

int main()
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
