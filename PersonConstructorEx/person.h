/*
 * Copyright SciSpike
 *
 * The declaration of the struct Person and its
 * manipulation functions
 */
#ifndef PERSON_H
#define PERSON_H

class Person {
public:
	// TODO: Need to add a constructor here and to the implementation file
   void setName( char* aName );
   void setAge(int age);
   void print();
   void incrementAge();
private:
   char name[100];
   int age;
};

#endif
