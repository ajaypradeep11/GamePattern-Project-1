#pragma once

// Note NONE of the specific classes are here!

#include "iWand.h"

#include <string>

class cWandCreate
{
public:
	//cCharacterFactory();
	//~cCharacterFactory();

	// Pass in a general type that everyone knows about.
	// Return the base interface class.
	iWand* makeWeapon(unsigned int typeOfWeapon);
};




