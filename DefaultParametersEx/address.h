#ifndef ADDRESS_H
#define ADDRESS_H

/*
 * Copyright SciSpike
 *
 * The declaration of the Address class and its
 * manipulation functions
 */

#include <string>

class Address {
public:
   enum PrintFormat { POSTAL, DEBUG };

      // TODO: Default the parameter for city to "Austin"
   Address( const char* streetNo, const char* steetName, int zip, 
            const char* city );
   ~Address();

      // TODO: Default parameter for style of print to POSTAL
   void print(PrintFormat pf);

private:
   std::string myStreetNo;
   std::string myStreetName;
   int   myZIP;
   std::string myCity;
};

#endif   // ADDRESS_H
