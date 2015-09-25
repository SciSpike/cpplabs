#include "document.h"
#include <iostream>
#include <iomanip>
#include <string>

Document::Document() : count(0) {}

void Document::AddWordToDoc(const char * word) {
	if (count < MAXWORDS) {
		Words[count] = new char[strlen(word) + 1];
		strcpy(Words[count], word);
		count++;
	}
	else
		cerr << "Attempt to add to a full Document" << endl;
}

Document::~Document() {
	for(int i=0; i<count; i++)
		delete [] Words[i];
}

std::ostream& operator<<( std::ostream& ostr, const Document& doc ) {
	for(int i=0; i<doc.count; i++)
		ostr << doc.Words[i] << " ";
	return ostr;
}

/* TODO: Implement the copy ctor and operator= */