/*
 * Copyright SciSpike
 *
 * Declaration of the Company class
 */
#ifndef COMPANY_H
#define COMPANY_H

const int MAX_EMPLOYEES = 100;

#include <string>
#include "person.h"

class Company {
public:
   friend class CompanyTest;
   Company( const char* name );
   ~Company();

   std::string getName() const;
   void setName( const char* name );

   void hire(Person *);
   void fire();

   void printEmployeeList() const;

private:

   Person* employees[MAX_EMPLOYEES];
   int numberOfEmployees;
   std::string name;

};

#endif
   
