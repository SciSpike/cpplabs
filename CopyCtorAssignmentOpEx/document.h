#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>

/* Description: A Document contains an array of strings (char*'s),
                each of which is a copy of a string passed to
                AddWordToDoc(). */

class Document {
public:
	Document();
	void AddWordToDoc(const char * word);
    ~Document();
	/* TODO: add a copy constructor and copy assignment
	   TODO: to the Document class */

	friend std::ostream& operator<<( std::ostream& ostr, 
	                            const Document& doc );
private:
	void initialize( const char* word);
	enum { MAXWORDS = 100 };
	char *  Words[MAXWORDS];
	int count;
};

#endif