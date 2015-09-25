/*
 * Copyright SciSpike
 *
 * The declaration of the struct Person and its
 * manipulation functions
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
   Person( const std::string& name, int age);
   ~Person();

   std::string getName() const {
	   return name;
   }

   inline void incrementAge();

   void print() const;

private:
   std::string name;
   int age;
};


/* 
 * Inline function for Person::incrementAge()
 */
/*
 * Increment the age
 */
inline
void Person::incrementAge() {
   age++;
}

#endif
