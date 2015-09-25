#include <stdio.h>
#include <windows.h>
#include <iostream.h>
#include "card.h"
#include "club.h"
#include "KingClub.h"
#include "..\\util\\timer.h"
#define MAX 10000

void print(int i) {
		cout << i;
}

void main() {
	  
		int i;
		Card c;
		Club cl;
		KingClub kc;

		Timer t("Timer: ");

		for(i=0; i<MAX ; i++) {
		print(i);
//		kc.print(i);
		}
	

}

