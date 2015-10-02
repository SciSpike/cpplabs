/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for the address book
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <string>
#include <map>
#include <iostream>
#include <iomanip>
#include "address_book.h"

/* Constants and defines */
using namespace std;

/****************************************************************
 *
 * Description: Reads the command from standard in
 *
 * Pre:  None
 *
 * Post: Collects the input as a char and returns it to the
 *       requester
 *
 ***************************************************************/
char readInput() {
  cout << "Enter command: ";
  char retval;
  cin >> retval;
  cout << "\n";
  return retval;
}

/****************************************************************
 *
 * Description: The main hander function for the phonebook. Notice
 *              the book is defined here (as a static value).
 *
 *
 * Pre:  none
 *
 * Post: Handles the input based on the value of c.
 *
 ***************************************************************/
bool handleInput( char c ) {
  static AddressBook book; // the phone book
  string nameBuffer;
  string phoneBuffer;
  bool retval = true;    // return value (false if quit)

  switch( c ) {

  // case A = Add entry to the phone book
  case 'A':
  case 'a':
    cout << "Name  : ";
    cin >> nameBuffer;
    cout << "\nNumber: ";
    cin >> phoneBuffer;
    book.addEntry(nameBuffer, phoneBuffer);
    cout << "\nNew entry: <" << nameBuffer << "," << phoneBuffer << ">" << endl;
    break;

  // case D = Delete item from the phone book
  case 'D':
  case 'd':
    cout << "Name to delete: ";
    cin >> nameBuffer;
    book.removeEntry( nameBuffer );
    cout << "\n";
    break;

  // case Q = Quit
  case 'Q':
  case 'q':
    cout << "Quit" << endl;
    retval = false;
    break;

  // case F = Find an entry
  case 'F':
  case 'f':
    {
      cout << "Find: ";
      cin >> searchString;
      cout << "\n";
      /**
       * TODO:
       *
       * We ant to search for all the elements that matches some criterial specified
       * by a lamda function that you pass in from here.
       *
       * As an example, you may return true from your lamnda function if you find parial match
       * on either the name or the phone number (although, you decide what the search criteria should be
       * 
       * Assuming you have already implemented the find function on the AddressBook, 
       * you should be able to write some code similar to this (IN PSEUDO CODE):
       *
       * list<pair<string,string> > result = book.find( YOUR_LAMBDA_FUNCTION);
       * if ( result.empty() ) {
       *    cout << nameBuffer << " not found" << endl;
       * } else {
       *   for( auto entry : result ) {
       *      cout << "Name / number : " << entry.first << " / " << entry.second << endl;
       *   }
       * }
    }
    break;
    
    // case L = List entries in the phone book
  case 'L':
  case 'l':
    book.listEntries(cout);
    break;
    
    // default prints help
  default:
    cout << "Commands are:" << endl <<
      "A -> Add entry" << endl <<
      "D -> Delete entry" << endl <<
      "F -> Find entry" << endl <<
      "L -> List" << endl <<
      "Q -> Quit" << endl;
    break;
  }
  return retval;
}

/****************************************************************
 *
 * Description: main for the address book example
 *
 * Pre:  none
 *
 * Post: Reads input and handles input until the handleInput
 *       function returns false.
 *
 ***************************************************************/
int main() {
  char c;
  do {
   c = readInput();
  } while ( handleInput( (char) c ) );

  return 0;
}
