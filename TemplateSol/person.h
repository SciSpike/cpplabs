#ifndef PERSON_H
#define PERSON_H

/* 
 * Implementation file for Person
 */


#include <iostream.h>
// Forward declaration of ostream
//class ostream;

class Person {
public:
      // Constructor (also provides the Default due to default param)
   Person( const char* name="", const int age=0 );
   Person( const Person& person );

      // Assignment Operator
   Person operator=( const Person& person );

      // Destructor
   virtual ~Person();

   inline virtual const char* getName() const;
   inline virtual int getAge() const;

   friend ostream& operator<< ( ostream&, const Person& );

private:
   void initialize( const char* name, const int age );

   char* myName; // Name of the Person
   int   myAge;  // Years; Good design will store DOB, but ...
};


/*
 * Inline implementation of get name
 */
const char* Person::getName() const {
   return( myName );
}

/*
 * Inline implementation of getAge
 */
int Person::getAge() const {
   return( myAge );
}

#endif // PERSON_H
