#ifndef CD_H
#define CD_H

struct CD {
	char Artist[80];
	char Title[80];
	double Price;
};

CD ReadNewCD(void);
void FindInList(CD ra[], int count);
void DisplayList(CD ra[], int count);
void DisplayCD(CD * p);

#endif