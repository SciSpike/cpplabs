#ifndef ID_EXCEPTION_H
#define ID_EXCEPTION_H

/*
 * Copyright SciSpike
 *
 * Declaration of the IDException clas
 *
 */

class IDException {
public:
   IDException( const char* message );
   IDException( const IDException& id_exception );
   
   IDException operator=( const IDException& id_exception );

   virtual ~IDException();
   
   inline virtual const char* getMessage() const;
   
private:
   void initialize( const char* message );
   
   char* myMessage;
};

/*
 * Get the Exception Message
 */
inline
const char* IDException::getMessage() const {
   return( myMessage );
}

#endif // ID_EXCEPTION_H
