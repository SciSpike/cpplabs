/*
 * Copyright SciSpike
 *
 * The declaration of the Person class and its
 * manipulation functions
 */
#ifndef PERSON_H
#define PERSON_H


#include <string>
using namespace std;

class Person {
public:
   Person( const string& name, int age);
   ~Person();
   string getName() const;
   void print() const;
   void incrementAge();
private:
   string name;
   int age;
};

#endif
