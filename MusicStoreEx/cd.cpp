/* TODO: includes necessary header files */


#include "cd.h"
#include <iostream>

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

/* TODO: Implement additional CD/CDList functions below */