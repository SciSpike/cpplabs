/*
 * Copyright SciSpike
 *
 * Declaration of the Person class
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
      // TODO: Declare PersonTest as a friend
   Person( const char* firstName, const char* lastName, int age);
   void setLastName( const char* aName );
   const char* getLastName() const;
   void setFirstName( const char* aName );
   const char* getFirstName() const;
   void setAge(int age);
   int getAge() const;
   void print() const;
private:
   std::string firstName;
   std::string lastName;
   int age;
};

#endif
   
