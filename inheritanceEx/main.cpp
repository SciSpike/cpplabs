#include <string>
#include <iostream>
#include "card.h"
#include "club.h"
#include "KingClub.h"
#include "timer.h"
#define MAX 10000

using namespace std;

void print(int i) {
		cout << i << " ";
}

int main() {
	  
		int i;
		Card c;
		Club cl;
		KingClub kc;

		string str = "Timer: ";
		Timer t(str);

		for(i=0; i<MAX ; i++) {
		print(i);
		}

}

