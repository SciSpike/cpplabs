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
   Person( const std::string& name, const int age);
   ~Person();
   std::string getName() const;
   void print() const;
   void incrementAge();
private:
   std::string name;
   int age;
};

#endif
