// MyPrinter.h: interface for the MyPrinter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYPRINTER_H__7748FAF0_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
#define AFX_MYPRINTER_H__7748FAF0_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_

#include "IPrinter.h"

class MyPrinter : public IPrinter  
{
public:
	MyPrinter();
	virtual ~MyPrinter();
	virtual void print();

};

#endif // !defined(AFX_MYPRINTER_H__7748FAF0_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
