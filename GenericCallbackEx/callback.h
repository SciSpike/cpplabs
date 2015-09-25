#ifndef CALLBACK_H
#define CALLBACK_H

/**************************************************************
 *  
 * File: callback.h
 *
 * Description: Defines the interface for Callback and the templated
 *              MFCallback (MF = MemberFunction)
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/****************************************************************
 *
 * Description: Callback interface seen by the caller.
 *
 ***************************************************************/

// TODO: We would like to use a callback for the printer example
// TODO: but execute must carry a parameter. How would you change
// TODO: the Callback interface?
class Callback {
public:
  virtual void execute() = 0;
  virtual ~Callback() {}
};

/****************************************************************
 *
 * Description: Templated callback that calls back any 
 *              member function on any type T as long as the
 *              member function has a void return type and does
 *              not require any arguments.
 *
 ***************************************************************/
// TODO: If you cahnge the Callback interface you are likely to
// TODO:  change here too...
template <class T>
class MFCallback : public Callback {
public:
  typedef void (T::*MFP)();
  MFCallback( T* _who, MFP _what ) {
    who = _who;
    what = _what;
  }
  void execute() {
    (who->*what)();
  }    
private:
  T* who;
  MFP what;
};

#endif
