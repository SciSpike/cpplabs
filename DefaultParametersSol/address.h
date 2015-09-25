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

      // Default parameter for city
   Address( const char* streetNo, const char* steetName, int zip, 
            const char* city = "Austin" );
   ~Address();

      // Default parameter for style of print
   void print( PrintFormat format = POSTAL );

private:
   std::string myStreetNo;
   std::string myStreetName;
   int   myZIP;
   std::string myCity;
};

#endif   // ADDRESS_H
