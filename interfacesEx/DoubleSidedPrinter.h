// DoubleSidedPrinter.h: interface for the DoubleSidedPrinter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DOUBLESIDEDPRINTER_H__7748FAEC_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
#define AFX_DOUBLESIDEDPRINTER_H__7748FAEC_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_


#include "BestPrinter.h"

class DoubleSidedPrinter  : public BestPrinter
{
public:
	DoubleSidedPrinter();
	virtual ~DoubleSidedPrinter();
	virtual void printDoubleSided();

};

#endif // !defined(AFX_DOUBLESIDEDPRINTER_H__7748FAEC_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
