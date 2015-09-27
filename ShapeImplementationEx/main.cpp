#include <iostream>
#include "rectangle.h"

int main() {
  std::cout << "Shape Implementation Exercise Program" << std::endl;

  // TODO: Make this compile...
  Shape * s = new Rectangle(  10, 100, 200, 10 );

  s->paint();

  delete s;

  return 0;
}
