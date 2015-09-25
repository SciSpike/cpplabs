/*
 * Copyright SciSpike
 *
 * Class IDException is implemented in this file. 
 */

#include "id_exception.h"
#include <iostream>
#include <string>

using namespace std;

/*
 * Constructor
 */
IDException::IDException( const char* message ) {

   cout << "In the Constructor of IDException." << endl;
   initialize( message );

}

/*
 * Copy constructor
 */
IDException::IDException( const IDException& exception ) {
   
   cout << "In the Copy Constructor of IDException." << endl;
   initialize( exception.getMessage() );

}

/*
 * Destructor
 */
IDException::~IDException() {

   cout << "In Destructor of IDException." << endl;
   delete( myMessage );

}

/*
 * Initialize the members
 */
void IDException::initialize( const char* message ) {

   if( message ) {
         // Making a copy on the heap; Remember to delete
      myMessage = new char[strlen(message)+1];
      strcpy( myMessage, message );
   }
   else {
      myMessage = NULL;
   }
}

/*
 * Assignment operator
 */
IDException IDException::operator=( const IDException& exception ) {

      // Making sure not assigning to itself
   if( this != &exception ) {
      delete( myMessage );
      initialize( exception.getMessage() );
   }
   return( *this );
}

