#include "document.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

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

Document::Document( const Document & doc ) {
	for(int i=0; i<doc.count; i++) {
		Words[i] = new char[strlen(doc.Words[i]) + 1];
		strcpy(Words[i], doc.Words[i]);
	}
	count = doc.count;	
}

Document::~Document() {
	for(int i=0; i<count; i++)
		delete [] Words[i];
}

const Document & Document::operator=(const Document & rhs) {
	if (this != &rhs) {
		for(int i=0; i<count; i++)
			delete [] Words[i];
		for(int j=0; j<rhs.count; j++) {
			Words[j] = new char[strlen(rhs.Words[j]) + 1];
			strcpy(Words[j], rhs.Words[j]);
		}
		count = rhs.count;
	}
	return * this;
}

ostream& operator<<( ostream& ostr, const Document& doc ) {
	for(int i=0; i<doc.count; i++)
		ostr << doc.Words[i] << " ";
	return ostr;
}

