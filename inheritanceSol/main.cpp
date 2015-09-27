#include "card.h"
#include "club.h"
#include "KingClub.h"
#include "../lib/timer.h"
#include <iostream>

using namespace std;

void print(int i) {
  cout << i;
}

int main() {
	  
  int i;
  Card c;
  Club cl;
  KingClub kc;
  {
    Timer t("Timer: ");
    
    for(i=0; i<10000 ; i++) {
      print(i);
    }
  }
  return 0;
}

