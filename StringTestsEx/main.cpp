/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

#include <string>
#include <iostream>
#include <cstring>
using namespace std;

void stringTest1() {
  std::string firstName = "John";
  std::string lastName = "Doe";
  std::string street = "1234 Bjarne Street";
  std::string address;
  address = firstName + " " + lastName + "\n" + street;
  cout << address.data() << endl;
  cout << "Doe is in position: " 
       << address.find( "Doe" ) << endl;
}

void stringSearchTest() {
  const char* bohr = "The opposite of a correct statement is a false statement. But the opposite of a profound truth may well be another profound truth. -- Niels Bohr";
  
  string s( bohr );
  cout << "Found profound at: " << s.find( "profound" ) << endl;
  cout << "First space      : " << s.find_first_of( ' ' ) << endl;
  cout << "Last space       : " << s.find_last_of(' ') << endl;
  cout << "First of .,-     : " << s.find_first_of(".,-") << endl;
  cout << "Find last 'a'  : " << s.rfind( " a " ) << endl;
}

void stringImplTest() {
  std::string s1 = "Test String";
  std::string s2 = s1;
  cout << "The string is the same " << 
    ((((void*) s1.data()) == ((void*)s2.data()))?"Yes":"No") << 
    endl;
  s1[1] = 'E';
  cout << "The string is the same " << 
    ((((void*) s1.data()) == ((void*)s2.data()))?"Yes":"No") << 
    endl;
}

void stringManipulationTest() {
  const char* quote = "There are two kinds of people, those who finish what they start and so on.";
  
  string author =  "Robert Byrne";
  string s( quote );
  
  s += author;
  // insert a separator between quote and author
  s.insert( strlen(quote), " -- " );
  
  cout << s.c_str() << endl; 
  
  for (int i = 0; i < s.size();i++ ) {
    // garble the string...
    s[i] -= 1;
  }
  
  cout << s.c_str() << endl;
}

int main() {
  stringTest1();
  stringImplTest();
  stringSearchTest();
  stringManipulationTest();
  return 0;
}
