#ifndef   REFCOUNT_H
#define   REFCOUNT_H

/*****************************************************************************
*
* Description: Defines a smart pointer to objects that are reference counted
*              Any object that supports incrementRef and decrementRef can be
*              reference counted. To minimize the implementation needed to
*              be reference counted, the referenced objects can inherit of
*              the class Counted
*
*****************************************************************************/

template < class TYPE >
class SPointer {
public:

  // Default constructor points to 0
  SPointer() : data( 0 ) {}

  // Constructor tha initializes the SPointer to some (typically) new data
  SPointer( TYPE* d ) : data( d ) {
    if ( data )
      data->incrementRef();
  }

  // Copy constructor
  SPointer( const SPointer< TYPE >& rhs )
    : data( rhs.data ) {
    if ( data )
      data->incrementRef();
  }

  // Destructor
  ~SPointer() {
    if ( data ) {
      data->decrementRef();
    }
  }

  // Assignment operator when assigning to anoter SPointer
  SPointer< TYPE >& operator=( const SPointer< TYPE >& rhs ) {
    if ( data != rhs.data ) {
      if ( data ) {
	data->decrementRef();
      }
      data = rhs.data;
      if ( data ) {
	data->incrementRef();
      }
    }
    return( *this );
  }

  // Assignment operator when assigning directly to an object
  SPointer< TYPE >& operator=( TYPE *standardPtr ) {
    if ( data != standardPtr ) {
      if ( data ) {
	data->decrementRef();
      }
      data = standardPtr;
      if ( data ) {
	data->incrementRef();
      }
    }
    return( *this );
  }

  // Cast operator to make sure we can pass the object to users
  // that cannot handle SPointers
  operator TYPE*() const {
    return( data );
  }

  // The primary access operator is the overloaded ->
  TYPE* operator->() const {
    return( data );
  }

private:
  TYPE  *data; // the data
};

/*****************************************************************************
*
* Description:  Base class for objects that should be reference counted
*
*****************************************************************************/

class Counted {
public:
  Counted() : count( 0 ) {}
  Counted( const Counted& ) : count( 0 ) {}
  Counted&   operator=( const Counted& data ) {
    return( *this );
  }
  virtual ~Counted() {}
  virtual void incrementRef() {
    count++;
  }
  virtual void decrementRef() {
    if ( --count == 0 ) {
      delete this;
    }
  }
  virtual long refCount() {
    return( count );
  }
private:
  long   count;
};

#endif
