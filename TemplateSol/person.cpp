/*
 * Copyright SciSpike
 *
 * Implementation file for Person
 */

#include "person.h"
#include <iostream.h>
#include <string.h>


/*
 * Person constructor
 */
Person::Person( const char* name, const int age ) {
   cout << "In the Constructor of Person." << endl;
   initialize( name, age );
}

/*
 * Copy constructor for Person
 */
Person::Person( const Person& p ) {

   cout << "In the Copy Constructor of Person." << endl;
   initialize( p.getName(), p.getAge() );

}

/*
 * Destructor for Person
 */
Person::~Person() {

   cout << "In Destructor of Person." << endl;
   delete( myName );

}

/*
 * Initialize function for the data members
 */
void Person::initialize
(
 const char* name,  // Name of the person
 const int   age    // Age of the person
 ) {

   myAge = age;

   if( name ) {
         // Keeping the name on heap; delete later
      myName = new char[strlen(name)+1];
      strcpy( myName, name );
   }
   else {
      myName = NULL;
   }
}

/* 
 * Assignment Operator for Person
 */
Person Person::operator=( const Person& p ) {
   cout << "In the assignment operator for person" << endl;
      // Make sure not assigning itself
   if( this != &p ) {
      delete( myName );
      initialize( p.getName(), p.getAge() );
   }

   return( *this );
}

/*
 * Print function for person
 */
ostream& operator<<( ostream& ostr, const Person& person ) {
   ostr << "Person:" << ( person.myName ? person.myName : "NULL" ) << 
      " Age:" << person.myAge << endl;
   return( ostr );
}
