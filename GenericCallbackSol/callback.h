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
 *              The interface is templated with the argument
 *              type.
 *
 ***************************************************************/
template <class Arg>
class Callback {
public:
  virtual void execute(Arg) = 0;
  virtual ~Callback() {}
};

/****************************************************************
 *
 * Description: Templated callback that calls back any 
 *              member function on any type T with the argument
 *              type Arg.
 *
 ***************************************************************/
template <class T, class Arg>
class MFCallback : public Callback<Arg> {
public:

  typedef void (T::*MFP)(Arg);

  MFCallback( T* _who, MFP _what ) {
    who = _who;
    what = _what;
  }
  void execute(Arg a) {
    (who->*what)(a);
  }    
private:
  T* who;
  MFP what;
};

#endif
