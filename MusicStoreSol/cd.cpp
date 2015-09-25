#include <iostream>
#include <iomanip>
#include "cd.h"

using namespace std;


CD ReadNewCD(void) {
	CD temp;
	cout << "Enter Artist: ";
	cin.ignore(cin.rdbuf()->in_avail()); // input stream flush
	cin.getline(temp.Artist, 80);
	cout << "Enter Title: ";
	cin.getline(temp.Title, 80);
	cout << "Enter Price: $";
	cin >> temp.Price;
	return temp;
}

void FindInList(CD ra[], int count) {
	char str[80];
	cout << "Enter Artist: ";
	cin.ignore(cin.rdbuf()->in_avail()); // input stream flush
	cin.getline(str, 80);
	bool found = false;
	for(int i=0; i<count; i++) {
		if (strcmp(ra[i].Artist, str)==0) {
			found = true;
			DisplayCD(&ra[i]);
		}
	}
	if (!found) 
		cout << '\"' << str << '\"' << " not found" << endl;
}

void DisplayList(CD ra[], int count) { 
	cout << setw(30) << "Artist:"
		<< setw(30) << "Title:"
		<< "  Price:" << endl;
	for(int i=0; i<count; i++) {
		DisplayCD(&ra[i]);
	}
}

void DisplayCD(CD * p) {
	cout << setw(30) << p->Artist
		<< setw(30) << p->Title << "  $"
		<< setw(8) << setprecision(2) 
		<< left << showpoint << fixed << p->Price
		<< endl;
}