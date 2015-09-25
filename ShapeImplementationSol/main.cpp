#include <iostream.h>
#include "rectangle.h"

int main() {
  cout << "Shape Implementation Exercise Program" << endl;

  Shape * s = new Rectangle(  10, 100, 200, 10 );

  s->paint();

  delete s;

  return 0;
}
