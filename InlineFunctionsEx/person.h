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

   // TODO: Make the print function inline
   std::string getName() const;

   // TODO: Make the print function inline
   void incrementAge();

   void print() const;
private:
   std::string name;
   int age;
};

#endif
