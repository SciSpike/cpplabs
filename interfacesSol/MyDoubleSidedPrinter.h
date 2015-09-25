// MyDoubleSidedPrinter.h: interface for the MyDoubleSidedPrinter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYDOUBLESIDEDPRINTER_H__7748FAF1_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
#define AFX_MYDOUBLESIDEDPRINTER_H__7748FAF1_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "IDoubleSidedPrinter.h"
#include "MyPrinter.h"

class MyDoubleSidedPrinter : public IDoubleSidedPrinter  
{
public:
	MyDoubleSidedPrinter();
	virtual ~MyDoubleSidedPrinter();

	virtual void print();
	virtual void printDoubleSided();

private:
	MyPrinter myPrinter;
};

#endif // !defined(AFX_MYDOUBLESIDEDPRINTER_H__7748FAF1_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
