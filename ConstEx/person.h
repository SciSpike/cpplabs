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
   Person(std::string name, int age);
   ~Person();
   std::string getName();
   void print();
   void incrementAge();
private:
   std::string name;
   int age;
};

#endif
