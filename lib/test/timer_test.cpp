#include "../timer.h"
#include <iostream>

using namespace std;

int main () {
  {
    Timer t("test");
    for (int x = 0; x < 1000; x++ ) {
      cout << x;
    }
    cout << endl << endl;

  }
  return 0;
}
