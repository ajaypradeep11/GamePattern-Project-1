#pragma once

#include "iWand.h"

#include <string>
#include <iostream>


class cPurpleWand : public iWand
{
public:
	cPurpleWand();
	virtual ~cPurpleWand();

	virtual void Cast(int x);
	virtual void TakeDamage(float amount);
	virtual void ThrowIntoGrass();


private:
	float Length;	// in cm
	float Damage;			// 0 to 100% damage

};

