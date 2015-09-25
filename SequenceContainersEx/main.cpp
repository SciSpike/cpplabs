/*
 * Copyrights SciSpike
 *
 * Test code to time the use of various collection
 * types in STL
 */
#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include <string>
#include "timer.h"

using namespace std;

// TODO Change this type and run it with all the
// TODO standard sequence containers of STL
// TODO These are {vector,deque,list}
typedef list<long> CollectionType;

/*
 * Insert 20000 elements at the end of the 
 * collection
 */
void timeInsertEnd() {
	CollectionType c(20000);
	{
		Timer t("Insert at end 20,000 longs: ");

		for (int l = 0; l < 20000; l++) {
			c.insert(c.end(), l);
//		   c[l] = l;
		}
	}
}

/*
 * Insert 20000 elements at the beginning of the 
 * collection
 */
void timeInsertBegin() {
	Timer t("Insert at beginning 20,000 longs: ");
	CollectionType c;
	for (long l = 0; l < 20000; l++) {
		c.insert(c.begin(), l);
	}
}

/*
 * Access 20000 elements at random locations of the
 * collection
 */
void timeRandomAccess() {
	CollectionType c;
	for (long l = 0; l < 20000; l++) {
		c.insert(c.end(), l);
	}
	{
		Timer t("20,000 random accesses: ");
		for (long l = 0; l < 20000; l++) {
			long l2;
			//			l2 = c[rand() % 20000];
			// for list use this (you may want to go 
			// down to 100 accesses :-)
			int i = rand() % 20000;
			list<long>::iterator it = c.begin();
			for (int j = 0; j < i; j++) {
				it++;
			}
			l2 = *it;
		}
	}
}

/*
 * Main calls the various test functions
 */
int main() {
	timeInsertEnd();
	timeInsertBegin();
	timeRandomAccess();
	return 0;
}
