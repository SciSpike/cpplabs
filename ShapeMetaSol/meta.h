#ifndef META_H
#define META_H

/**************************************************************
 *  
 * File: meta.h
 *
 * Description: Declares the Meta class and the tempated
 *              MetaImplementation<T>
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <vector>
#include <string>
#include <iostream>
#include <iostream.h>

/* Constants and defines */

template <class ERT>
class Meta {
public:
  Meta( const char* name, Meta<ERT>* super ) : myName( name ) {
    if (super) 
      super->addSubclass( this );
  }
  
  virtual ~Meta() { } 
  void addSubclass(Meta<ERT>* sub) {
    subclasses.push_back( sub );
  }
  const char* getName() {
    return myName.data();
  }
protected:
  virtual void* instansiate( ERT& is ) = 0;
  virtual bool checkMatch( ERT& is ) = 0;
  void* createInstance(ERT&);
private:
  std::string myName;
  std::vector<Meta<ERT>*> subclasses;
};

template <class T, class ERT>
class MetaImplementation : public Meta<ERT> {
public:
  MetaImplementation( const char* name, Meta<ERT>* super) 
    : Meta<ERT>( name, super) {}
  T* create( ERT& externalRep ) {
    return (T*) createInstance( externalRep );
  }
protected:
  bool checkMatch( ERT& externalRep ) {
    return T::checkMatch( externalRep );
  }
  void* instansiate( ERT& externalRep ) {
    return new T( externalRep );
  }
};

/****************************************************************
 *
 * Description: The create function for instances
 *
 ***************************************************************/
template<class ERT>
void* Meta<ERT>::createInstance( ERT& externalRep ) {
  if ( checkMatch( externalRep ) ) {
    return instansiate( externalRep );
  }
  else {
    std::vector< Meta<ERT>* >::iterator i;
    for( i = subclasses.begin(); i != subclasses.end(); i++ ) {
      void * retVal = (*i)->createInstance( externalRep );
      if ( retVal != 0 )
         return retVal;
    }
  }
  return 0;
}

#endif
