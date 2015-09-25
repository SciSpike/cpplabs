// KingClub.h: interface for the KingClub class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_KINGCLUB_H__52C22AA1_1648_11D4_A61E_444553540001__INCLUDED_)
#define AFX_KINGCLUB_H__52C22AA1_1648_11D4_A61E_444553540001__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "club.h"

class KingClub : public Club  
{
public:
	KingClub();
	virtual ~KingClub();
	void print(int i);

};

#endif // !defined(AFX_KINGCLUB_H__52C22AA1_1648_11D4_A61E_444553540001__INCLUDED_)
