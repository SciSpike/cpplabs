#ifndef ID_VECTOR_H
#define ID_VECTOR_H

/**************************************************************
 *  
 * File: id_vector.h
 *
 * Description: Class IDVector is defined in this class. 
 *              id_vector.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <vector>

/* Pre-Declrations */


/* Constants and defines */

/****************************************************************
 *
 * Description: The IDVector is a templated class which represts
 *              a Vector of type T.
 *
 * Exceptions: None
 *
 ***************************************************************/

template < class Type >
class IDVector
{
public:
      // Size of the vector
   int getSize() const 
      { return myVector.size(); }

      // Is this vector empty
   int empty() const 
      { return myVector.empty(); }

      // To add an element at the end of the vector
   void addAtEnd( const Type& e) 
      { myVector.insert( myVector.end(), e ); }

      // To remove an element at the end of the vector
   void removeAtEnd() 
      { myVector.erase( myVector.end() ); }

      // To add an element at the begining of the vector
   void addAtBeginning( const Type& e )
      { myVector.insert( myVector.begin(), e );}

      // To remove an element at the begining of the vector
   void removeAtBeginning()
      { myVector.erase( myVector.begin() );}

      // Clear all the elements of the Vector
   void clearAll() 
      { myVector.erase( myVector.begin(), myVector.end() ); }
   
      // Swap two elements in the vector
   void swap( int index1, int index2 )
      { 
         Type tmp; tmp = myVector[index1]; 
         myVector[index1] = myVector[index2]; 
         myVector[index2] = tmp; 
      }


      // Opertator [] can be used to index this vector
   const Type& operator[](int n) const 
      { return  myVector[n];}
   
      // Opertator [] can be used to index this vector
   Type& operator[](int n) 
      { return  myVector[n];}

private:
   std::vector < Type > myVector;
};

#endif  // For ID_VECTOR_H
