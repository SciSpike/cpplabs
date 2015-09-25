#include "meta.h"
#pragma warning( disable : 4786)  

/****************************************************************
 *
 * Description: Return the meta dictionary
 *
 ***************************************************************/
Meta::ClassMap& Meta::getDictionary() {
  static ClassMap classes;
  return classes;
}

/****************************************************************
 *
 * Description: Add a class to the dictionary
 *
 ***************************************************************/
void Meta::addClass( const type_info& ti, const Meta* c) {
  Meta::getDictionary().insert( ClassPair( ti.name(), c ) );
}   

/****************************************************************
 *
 * Description: Find a metaobject from a string
 *
 ***************************************************************/
const Meta* Meta::find( std::string nameOfClass ) {
  return Meta::getDictionary()[nameOfClass];
}

/****************************************************************
 *
 * Description: Find a metaobject from type_info
 *
 ***************************************************************/
const Meta* Meta::find( const type_info& theClass  ) {
  return Meta::getDictionary()[theClass.name()];
}

/****************************************************************
 *
 * Description: Constructor
 *
 ***************************************************************/
Meta::Meta( const type_info& theClass )
  : myTypeInfo( theClass ) {
  Meta::addClass( theClass, this );
}

/****************************************************************
 *
 * Description: Get the name of the class
 *
 ***************************************************************/
const char* Meta::name() const {
  return myTypeInfo.name();
}

/****************************************************************
 *
 * Description: Add a superclass. We also add ourself as 
 *              subclass to super.
 *
 ***************************************************************/
void Meta::addSuper( Meta* super ) {
  super->subClasses.push_back( this );
  superClasses.push_back( super );
}

/****************************************************************
 *
 * Description: Check if the type_info match us or one of the
 *              superclasses.
 *
 ***************************************************************/
bool Meta::is( const type_info& ti ) {
  if ( ti == myTypeInfo ) {
    return true;
  }
  else {
    if (!superClasses.empty() ) {
      for ( Iterator i = superClasses.begin(); i != superClasses.end(); i++ ) {
	if ( (*i)->is( ti ) ) {
	  return true;
	}
      }
    }
  }
  return false;
}

/****************************************************************
 *
 * Description: Check if a meta object is one of our super classes
 *
 ***************************************************************/
bool Meta::isSuper( Meta* m ) {
  for ( Iterator i = superClasses.begin(); i != superClasses.end(); i++ ) {
    if ( ((*i) == m) || (*i)->isSuper( m ) )
      return true;
  }
  return false;
}

/****************************************************************
 *
 * Description: Check if a meta object is one of our subclasses
 *
 ***************************************************************/
bool Meta::isSub( Meta* m ) {
  if ( m == this ) 
    return true;
  for ( Iterator i = subClasses.begin(); i != subClasses.end(); i++ ) {
    if ( (*i)->isSub( m ) )
      return true;
  }
  return false;
}

