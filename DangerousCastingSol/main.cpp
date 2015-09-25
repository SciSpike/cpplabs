#include <iostream>
#include "rectangle.h"
#include "square.h"
#include "document.h"

using namespace std;

int main()
{
  cout << "Dangerous Casting Exercise Program" << endl;

  Shape* anyShape = new Rectangle();

  // Now to draw it has to be Rectangle, so ..
  // Dangerous but Good Casting...
  cout << "\n\nTrying to draw..." << endl;
  ((Rectangle*)(anyShape))->draw();

  // Dangerous and Bad Casting, a Square into a Document
  Document* doc = (Document*)(anyShape);
  cout << "\n\nBad Document:" << *doc << endl;

  cout << "\n\nDone Testing" << endl;
  delete anyShape;

}
