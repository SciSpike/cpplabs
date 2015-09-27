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
#include <cassert>
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
  void* createInstance(ERT& externalRep) {
    if ( checkMatch( externalRep ) ) {
      return instansiate( externalRep );
    }
    else {
      for( auto i = subclasses.begin(); i != subclasses.end(); i++ ) {
	auto retVal = (*i)->createInstance( externalRep );
	if ( retVal != 0 )
	  return static_cast<void*>(retVal);
      }
    }
    return 0;
  }
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
    return static_cast<T*>(this->createInstance( externalRep ));
  }
 protected:
  bool checkMatch( ERT& externalRep ) {
    return T::checkMatch( externalRep );
  }
  T* instansiate( ERT& externalRep ) {
    return new T( externalRep );
  }
};


#endif
