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
#ifdef  _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include <string>
#include <map>
#include <iostream>
#include <iomanip>


/* Constants and defines */
// TO DO: start using namespace std
// TO DO: typedef the constructs to use from STL
// TO DO: All to minimize typing :-)

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
  std::cout << "Enter command: ";
  char retval;
  std::cin >> retval;
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
  char nameBuffer[100];  // the name input buffer
  char phoneBuffer[100]; // the phone number input buffer
  bool retval = true;    // return value (false if quit)

  switch( c ) {

  // case A = Add entry to the phone book
  case 'A':
  case 'a':
    std::cout << "Name  : ";
    std::cin >> nameBuffer;
    std::cout << "Number: ";
    std::cin >> phoneBuffer;
    // TO DO: Insert the name into you phone book here
    std::cout << "New entry: <" << nameBuffer << "," << phoneBuffer << ">" << std::endl;
    break;

  // case D = Delete item from the phone book
  case 'D':
  case 'd':
    std::cout << "Name to delete: ";
    std::cin >> nameBuffer;
    // TO DO: Erase the name
    break;

  // case Q = Quit
  case 'Q':
  case 'q':
    std::cout << "Quit" << std::endl;
    retval = false;
    break;

  // case F = Find an entry
  case 'F':
  case 'f':
    std::cout << "Name to find: ";
    std::cin >> nameBuffer;
    // TO DO: Find the entry and print it out
    break;

  // case L = List entries in the phone book
  case 'L':
  case 'l':
     std::cout << "List" << std::endl;
     // TO DO: List all the entries in the phone book
     break;

  // default prints help
  default:
     std::cout << "Commands are:" << std::endl <<
        "A -> Add entry" << std::endl <<
        "D -> Delete entry" << std::endl <<
        "F -> Find entry" << std::endl <<
        "L -> List" << std::endl <<
        "Q -> Quit" << std::endl;
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
