#pragma once

#include "cCharacter.h"

//#include "globalThings.h"

#include "iWand.h"

class cPlayer_Imp;

class cPlayer : public cCharacter
{
public:
	cPlayer();
	virtual ~cPlayer();

	virtual void Attack(void);
	virtual void Move(float x, float y);


protected:

	iWand* m_pMySword;


private:

	cPlayer_Imp* m_pImplementation;	// HEAP

};

