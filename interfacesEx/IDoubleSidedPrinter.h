// IDoubleSidedPrinter.h: interface for the IDoubleSidedPrinter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_IDOUBLESIDEDPRINTER_H__7748FAEF_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
#define AFX_IDOUBLESIDEDPRINTER_H__7748FAEF_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "IPrinter.h"

class IDoubleSidedPrinter : public IPrinter  
{
public:
	virtual ~IDoubleSidedPrinter();
	virtual void printDoubleSided() = 0;
};

#endif // !defined(AFX_IDOUBLESIDEDPRINTER_H__7748FAEF_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
