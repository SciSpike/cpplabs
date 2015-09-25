/*
 * Copyright SciSpike
 *
 * The declaration of the Person class and its
 * manipulation functions
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
   Person( const std::string& name, int age);
   ~Person();
   std::string getName() const;
   void print() const;
   void incrementAge();
private:
   std::string name;
   int age;
};

#endif
