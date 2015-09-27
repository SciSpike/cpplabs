#include "../lib/timer.h"

class Shape {
public:
    virtual void paint() {}
};

// TODO create the various subclasses (rectangle, triangle..)
// with virtual function paint() implemented.
// Make shape's paint a pure virtual function.
//class Square;
//class Circle;
//class Oval;
//class Triangle;

int main()
{
  int         i;
  const int   num_iter = 800000;
  Timer t("Time for 800000 virtual paint operations: ");
  
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
