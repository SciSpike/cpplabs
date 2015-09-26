#include <iostream>
#include <iomanip>
#include "cd.h"

using namespace std;

void DisplayOptions(void) {
	cout << "\t1. Add a new cd\n"
		 << "\t2. Display the list\n"
	 	 << "\t3. Search for a cd\n"
		 << "\t4. Exit" << endl;
}

int main(int argc, char * argv[]) {
	CD cdlist[20];
	int count=0;

	int choice=0;
	while (choice != 4) {
		DisplayOptions();
		cin >> choice;
		switch (choice) {
		case 1: 
			cdlist[count++] = ReadNewCD();
			break;
		case 2:
			DisplayList(cdlist, count);
			break;
		case 3:
			FindInList(cdlist, count);
			break;
		case 4:
			break;
		default:
			cout << "Invalid menu option, try again!" << endl;
		}
	}
}
