/**************************************************************
 *  
 * File: address_book.cpp
 *
 * Description: This files implements the declaraions in adddress_book.h
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/*
 * Include files
 */
#include "address_book.h"
#include <map>
#include <iostream>
#include <iomanip>

using namespace std;

/****************************************************************
 *
 * Description: Constructor
 *
 ***************************************************************/
AddressBook::AddressBook() {
}

/****************************************************************
 *
 * Description: Add an entry to the book
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: The name/phone has been added as a pair.
 *
 * Exceptions: None
 *
 ***************************************************************/
void AddressBook::addEntry(const string& name, const string& phoneNumber) {
  this->content.insert(pair<string,string>(name, phoneNumber));
}

/****************************************************************
 *
 * Description: List all entries to a given output stream
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: ALl entries has been written to the output stream
 *
 * Exceptions: None
 *
 ***************************************************************/
void AddressBook::listEntries(ostream& where) const {
  for( auto entry : this->content ) {
    where
      << setw(20) << entry.first
      << setw(20) << entry.second
      << endl;
  }
}

/****************************************************************
 *
 * Description: Remove an entry
 *
 * Returns: void
 *
 * Pre-Conditions: Remove an entry with the name (if exists)
 * 
 * Post Conditions: return true if an entry was removed, otherwise false
 *
 * Exceptions: None
 *
 ***************************************************************/
bool AddressBook::removeEntry(const string& name) {
  return this->content.erase(name);
}

/****************************************************************
 *
 * Description: Find an entry based that matches based on the 
 *              lambda function passed to this function
 *
 * Returns: list of pairs for which the lambda function returned true
 *
 * Pre-Conditions: none
 * 
 * Post Conditions: 
 *
 * Exceptions: None
 *
 ***************************************************************/
list<std::pair<string, string> > AddressBook::find(function<bool (const pair<string, string>&)> matchFunction) const {
  list<pair<string,string> > retVal;
  for ( auto entry : this->content) {
    if (matchFunction(entry))
      retVal.push_back(entry);
  }
  return retVal;
}
