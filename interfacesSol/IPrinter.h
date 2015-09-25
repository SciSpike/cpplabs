// IPrinter.h: interface for the IPrinter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_IPRINTER_H__7748FAED_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
#define AFX_IPRINTER_H__7748FAED_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_

class IPrinter  
{
public:
	virtual ~IPrinter();
	virtual void print() = 0;

};

#endif // !defined(AFX_IPRINTER_H__7748FAED_06A5_11D4_8F02_00C0F056CDD3__INCLUDED_)
