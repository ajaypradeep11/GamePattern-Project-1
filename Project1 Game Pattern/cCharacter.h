#pragma once

#include "iCharacter.h"

class cCharacter : public iCharacter
{
public:
	cCharacter();			
	virtual ~cCharacter();		

//private:
protected:
	float Health;

private:
	unsigned int myBuddysPhoneNumber;


public:
	int Strength;	

	virtual void Move(float x, float y);
	virtual void Attack(void);

	virtual void TakeDamage(float howMuch);

private:

};