#ifndef HANDLE_H
#define HANDLE_H

/**************************************************************
 *  
 * File: handle.h
 *
 * Description: Class Handle is defined in this class.
 *
 * Author: SciSpike.
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>

/* Pre-Declrations */

/* Constants and defines */

/****************************************************************
 *
 * Description: The class reference counts the object which it
 *              gets templated upon<Type>.
 *
 * Exceptions: None
 *
 ***************************************************************/

template <class Type>
class Handle
{
public:
	inline Handle( Type* ptrType );
	inline Handle( const Handle& type );
    inline ~Handle();

	// Operator overloadin
	inline Type& operator=( const Handle& type );
	inline Type* operator->();
	inline Type& operator()();
	inline Type& operator*();

protected:
    Type* realObject;
	int*  referenceCount;
};

/****************************************************************
 *
 * Description: Constructor of <Template> Handle
 *
 * Pre-Conditions: ptrType should not be NULL, it should be 
 *                 created on heap, this class will delete when
 *                 done
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template <class Type>
Handle<Type>::Handle
(
 Type* ptrType
 )
 : realObject( ptrType )
{
   std::cout << "In Template Handle Constructor." << std::endl;

   // TODO Implement initializing referenceCount to 1
}


/****************************************************************
 *
 * Description: Copy Constructor of <Template> Handle
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template <class Type>
Handle<Type>::Handle
(
  const Handle& handle
 )
 : realObject( handle.realObject ),
 referenceCount( handle.referenceCount )
{
   std::cout << "In Copy Template Handle Constructor." << std::endl;

   //TODO Add 1 to referenceCount
}

/****************************************************************
 *
 * Description: Destructor of <Template>Handle
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template <class Type>
Handle<Type>::~Handle()
{
   std::cout << "In Template Handle Destructor." << std::endl;

   // Deleting the object only when all the handle are gone
   //TODO decrement referenceCount by 1; Delete all when 0
}

/****************************************************************
 *
 * Description: Operator -> can be used when this class is 
 *              creadted on stack.
 *
 * Returns: realObject
 *
 * Pre-Conditions: realObject is not null.
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template<class Type>
Type* Handle<Type>::operator->()
{
  // TODO return realObject 
}

/****************************************************************
 *
 * Description: Operator () can be used when this class is 
 *              creadted on stack.
 *
 * Returns: realObject
 *
 * Pre-Conditions: realObject is not null.
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template<class Type>
Type& Handle<Type>::operator*()
{
   return( *realObject );
}

/****************************************************************
 *
 * Description: Operator () can be used when this class is 
 *              creadted on stack.
 *
 * Returns: realObject
 *
 * Pre-Conditions: realObject is not null.
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template<class Type>
Type& Handle<Type>::operator()()
{
   return( *realObject );
}

/****************************************************************
 *
 * Description: Assingment operator = for <Template>handle.
 *
 * Returns: *this
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

template<class Type>
Type& Handle<Type>::operator=
(
  const Handle& handle
 )
{
   // Make sure it is not seld assigning
	if( realObject != handle.realObject ) {
		// Derefrence from old object
		//TODO Decrement referenceCount, delete old object if 0


		// Assign itself to the new handle
        //TODO Add counters for new object
	}

	return( *this );
}

#endif // HANDLE_H