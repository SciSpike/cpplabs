#ifndef SHAPEMETA_H
#define SHAPEMETA_H

/**************************************************************
 *  
 * File: shapemeta.h
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
class Shape;

class Meta {
public:
  Meta( const char* name, Meta* super, const char* tag );
  virtual ~Meta() { }
  Shape* create( istream& is );
  void addSubclass(Meta*);
  const char* getTag();
  const char* getName();
protected:
  virtual Shape* instansiate(istream& is );
private:
  Shape* privateCreate( std::string s, istream& is );
  std::string myTag;
  std::string myName;
  std::vector<Meta*> subclasses;
};

template <class T>
class MetaImplementation : public Meta {
public:
  MetaImplementation( const char* name, Meta* super, const char* tag ) 
    : Meta( name, super, tag ) {}
protected:
  Shape* instansiate( istream& is ) {
    return new T( is );
  }
};
#endif
