/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

/* Hints/Suggestions:
   The most common and useful classes for this application are:
   Word: store 1 word, support comparison and display
   ListOfWords: a sortable linked-list or expandable array
*/

#include <iostream>
#include <cassert>
#include <string>
using namespace std;


class Word { // store 1 word, publish case-insensitive comparison
public:
	Word(const char * str="");
	bool operator<(const Word & rhs) const;
	friend ostream & operator<<(ostream & os, const Word & rhs);
	enum { MAXLEN = 25 };
private:
	char s[MAXLEN+1];
};

Word::Word(const char * str) {
	if (strlen(str)>MAXLEN)
		cerr << "Word exceeds capacity: " << str << endl;
	else
		strcpy(s, str);
}

bool Word::operator<(const Word & rhs) const {
	return strcmp(s, rhs.s) < 0;
}

ostream & operator<<(ostream & os, const Word & rhs) {
	return os << rhs.s;
}


class ListOfWords {
public:
	ListOfWords(int startsize=100);
	~ListOfWords();
	int num() const;
	void insert(const Word & w);
	void sort();
	const Word & operator[](int i) const;
private:
	ListOfWords(const ListOfWords &);    // block copy
	void operator=(const ListOfWords &); // block assignment
	void grow(int newsize);
	Word * lst;
	int count, capacity;
};

ListOfWords::ListOfWords(int startsize) : lst(0), count(0), capacity(0) {
	grow(startsize);
}

ListOfWords::~ListOfWords() { delete [] lst; }

int ListOfWords::num() const { return count; }

void ListOfWords::insert(const Word & w) {
	if (count == capacity)
		grow(capacity*2);
	lst[count++] = w;
}

void ListOfWords::sort() {
	for(int i=0; i<count; i++) {
		int minindex = i;
		for(int j=i; j<count; j++)
			minindex = (lst[j] < lst[minindex]) ? j : minindex;
		if (i != minindex) {
			Word tmp = lst[i];
			lst[i] = lst[minindex];
			lst[minindex] = tmp;
		}
	}
}
	
const Word & ListOfWords::operator[](int i) const {
	assert(i>=0 && i<count);
	return lst[i];
}

void ListOfWords::grow(int newsize) {
	assert(newsize>capacity);
	Word * newlst = new Word[newsize];
	for(int i=0; i<count; i++)
		newlst[i] = lst[i];
	delete [] lst;
	lst = newlst;
	capacity = newsize;
}

/*
 * This function should read all words from is
 * The words should be written out to os. When written out
 * to os, the words should be sorted alphabetically and 
 * duplicate words should be removed
 */
void generateWordList( istream& is, ostream& os ) {
	// TODO: Implement the algorithms for translation here...
	ListOfWords list;
	char s[100];
	while (is >> s)
		list.insert(Word(s));
	list.sort();
	for(int i=0; i<list.num(); i++) {
		if (i==0 || list[i-1] < list[i])
			cout << list[i] << " ";
	}
}

/*
  To redirect stdin/stdout (cin/cout) in Visual C++, you can run
  the executable from the command line or use the IDE menus:

  Project | Settings | Debug | Program Arguments

  // To grab the text file two directories above this one use:
	<..\..\dofi.txt
  To redirect input and output
	<..\..\dofi.txt >out.txt
  // caution: all stdout (cout) goes to out.txt (including "Press any key")
*/

int main() {
	generateWordList( cin, cout );
	return 0;
}
