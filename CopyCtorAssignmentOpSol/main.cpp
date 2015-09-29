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

  cout << "\nDeleting the original..." << endl;

  delete d1;

  // The copies have no dead links, so no problem ...
  
  cout << "\nPrinting the copies doc2 and doc3:" << endl;
  cout << d2 << endl
	  << d3 << endl;

  cout << endl << "Let's also try to ensure that assigment to self works correctly" << endl;
  d3 = d3;
  cout << d3 << endl;

}
