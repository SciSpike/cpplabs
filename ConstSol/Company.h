#ifndef COMPANY_H
#define COMPANY_H

/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Company class
 */


#include "id_vector.h"
#include "person.h"
#include <string>

class Company {
public:
   Company(const std::string& name);
   ~Company();
   void hire( const Person* p );
   void print() const;

private:
   std::string companyName;
   IDVector<const Person*> employees;
};

#endif
