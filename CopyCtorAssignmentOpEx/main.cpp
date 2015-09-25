#include <iostream>
#include "document.h"

using namespace std;

int main() {
  cout << "Copy Constructor & Operator= Exercise" << endl;

  cout << "\nMaking a new document:" << endl;

  Document * d1 = new Document;
  d1->AddWordToDoc("Four");
  d1->AddWordToDoc("word");
  d1->AddWordToDoc("document");
  d1->AddWordToDoc("contents!!");

  cout << *d1 << endl;

  cout << "\nCopy constructing to doc2..." << endl;

  Document d2( *d1 );

  cout << "\nAssignment copy to doc3..." << endl;

  Document d3;
  d3 = d2;

  cout << "\nDeleting the orginal..." << endl;

  delete d1;

  // TODO: Printing the copies should bomb since the
  // TODO: default copyctor and op= are being used
  
  cout << "\nPrinting the copies doc2 and doc3:" << endl;
  cout << d2 << endl
	  << d3 << endl;

}
