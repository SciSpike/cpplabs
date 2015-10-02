#ifndef ADDRESS_BOOK_H
#define ADDERSS_BOOK_H
/**************************************************************
 *  
 * File: address_book.h
 *
 * Description: Declaraiton of the address book
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <map>
#include <string>
#include <iostream>
#include <list>
#include <functional>


/****************************************************************
 *
 * Description: Declares the interface and data structure
 *              for an address book
 *
 * Exceptions: None
 *
 ***************************************************************/
class AddressBook {

 public:
  // The default constructor
  AddressBook();

  // Add an entry to the phone book
  void addEntry(const std::string& name, const std::string& phoneNumber);

  // List all entries
  void listEntries(std::ostream& where) const;

  // Remove an entry
  bool removeEntry(const std::string& name);

  // Find an entry given a client defined function
  std::list<std::pair<std::string, std::string> > find(std::function<bool (const std::pair<std::string, std::string>&)> matchFunction) const;

 private:
  std::map<std::string,std::string> content; // the map used to store the entries
  AddressBook(const AddressBook& rhs); // private to prevent copying
  AddressBook& operator=(const AddressBook& rhs); // private to prevent assignment

};
#endif
