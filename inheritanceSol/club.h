// club.h: interface for the Club class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CLUB_H__8758E624_10F1_11D4_A61E_F6349CEFBD57__INCLUDED_)
#define AFX_CLUB_H__8758E624_10F1_11D4_A61E_F6349CEFBD57__INCLUDED_

#include "card.h"

class Club : public Card  
{
public:
	Club();
	virtual ~Club();
	void print(int i);

};

#endif // !defined(AFX_CLUB_H__8758E624_10F1_11D4_A61E_F6349CEFBD57__INCLUDED_)
