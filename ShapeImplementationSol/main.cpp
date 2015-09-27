#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
  cout << "Shape Implementation Exercise Program" << endl;

  Shape * s = new Rectangle(  10, 100, 200, 10 );

  s->paint();

  delete s;

  return 0;
}
