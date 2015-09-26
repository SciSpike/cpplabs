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
#include "idstring.h"

using namespace SciSpike;

class Company {
public:
   Company(const string& name);
   ~Company();
   void hire( Person* p );
   void print() const;

private:
   string companyName;
   IDVector<Person*> employees;
};

#endif
