/*
 * Copyright SciSpike
 *
 * The declaration of the string class
 */
#ifndef IDSTRING_H
#define IDSTRING_H
#include <cstring>

namespace SciSpike {

   class string {
   public:
      string() {
         buffer = new char[1];
         buffer[0] = 0;
      }
      string( const char* buf ) {
         buffer = new char[strlen(buf)+1];
         strcpy( buffer, buf );
      }
      string( const string& rhs ) {
         buffer = new char[strlen(rhs.buffer)+1];
         strcpy( buffer, rhs.buffer );
      }
      ~string() {
         delete [] buffer;
      }
      string operator=( const string &rhs ) {
         if ( this != &rhs ) {
            delete [] buffer;
            buffer = new char[strlen(rhs.buffer)+1];
            strcpy( buffer, rhs.buffer );
         }
         return *this;
      }
      void operator+=( const string &rhs ) {
         char *tmpBuffer = buffer;
         buffer = new char[strlen(buffer)+strlen(rhs.buffer)+1];
         strcpy(buffer, tmpBuffer);
         strcat(buffer, rhs.buffer);
         delete [] tmpBuffer;
      }
         
      string operator+( const string &rhs ) const {
         char *tmpBuffer = new char[strlen(buffer)+strlen(rhs.buffer)+1];
         strcpy(tmpBuffer, buffer);
         strcat(tmpBuffer, rhs.buffer);
         string retValue( tmpBuffer );
         delete [] tmpBuffer;
         return retValue;
      }

      const char* data() const {
         return buffer;
      }
   private:
      char* buffer;
   };
};

#endif
