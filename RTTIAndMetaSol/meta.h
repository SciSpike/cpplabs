#ifndef META_H
#define META_H

/**************************************************************
 *  
 * File: meta.h
 *
 * Description: Declares the xx class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <vector>
#include <map>
#include <typeinfo>
#include <string>

/* Constants and defines */

class Meta {
public:

   // constructor
   Meta( const std::type_info& theClass );

   // get name of class
   const char* name() const;

   // add a superclass (which also includes updating
   // the list of subclasses in super)
   void addSuper( Meta* super );
   bool isSub( Meta* m );
   bool isSuper( Meta* m );
	// Check if the type info maps to me or one of my superclasses
   bool is( const std::type_info& ti );
   static const Meta* find( std::string nameOfClass );
   static const Meta* find( const std::type_info& theClass );
private:
   typedef std::map<std::string, const Meta* > ClassMap;
   static ClassMap& getDictionary();
   static void addClass( const std::type_info& theClass, const Meta* c );
   const std::type_info& myTypeInfo;
   typedef std::vector<Meta*> ClassVector;
   typedef ClassVector::iterator Iterator;
   typedef std::pair<std::string, const Meta*> ClassPair;
   ClassVector superClasses;
   ClassVector subClasses;

   // make sure the Meta can not be copied or assigned to
   Meta( const Meta& rhs ) ;
   Meta& operator=( const Meta& rhs );
};

template <class T>
class MetaInitializer {
 public:
  MetaInitializer() {
    T::getClass();
  }
};

#endif
