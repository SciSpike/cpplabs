#ifndef LOGGABLE_H
#define LOGGABLE_H

/**************************************************************
 *  
 * File: loggable.h
 *
 * Description: Any object that can be logged should be derived
 *              from the class Loggable.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Loggable {
public:
    virtual void dumpEntry() = 0;
};

#endif // LOGGABLE_H