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

#ifdef  _MSC_VER
#pragma warning( disable : 4786 )
#endif

/* Include Files */
#include <string>
#include <map>
#include <iostream>
#include <iomanip>

/* Constants and defines */
using namespace std;
typedef map<string,string> PhoneBook;
typedef pair<string,string> Entry;
typedef PhoneBook::iterator Iterator;

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
  static PhoneBook book; // the phone book
  char nameBuffer[100];  // the name input buffer
  char phoneBuffer[100]; // the phone number input buffer
  bool retval = true;    // return value (false if quit)
  Iterator i;            // iterator to be used for iteration
                         // on phone book

  switch( c ) {

  // case A = Add entry to the phone book
  case 'A':
  case 'a':
    cout << "Name  : ";
    cin >> nameBuffer;
    cout << "\nNumber: ";
    cin >> phoneBuffer;
    book.insert( Entry( nameBuffer, phoneBuffer) );
    cout << "\nNew entry: <" << nameBuffer << "," << phoneBuffer << ">" << endl;
    break;

  // case D = Delete item from the phone book
  case 'D':
  case 'd':
    cout << "Name to delete: ";
    cin >> nameBuffer;
    book.erase( nameBuffer );
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
    cout << "Name to find: ";
    cin >> nameBuffer;
    cout << "\n";
    i = book.find( nameBuffer );
    if ( i == book.end() ) {
       cout << nameBuffer << " not found" << endl;
    } else {
       cout << "Phone number: " << (*i).second.data() << endl;
    }
    break;

  // case L = List entries in the phone book
  case 'L':
  case 'l':
     cout << "List" << endl;
     for ( i = book.begin(); i != book.end(); i++ ) {
        cout << setw( 20 ) << (*i).first.data() 
           << setw( 20 ) << (*i).second.data() << endl;
     }
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
