#pragma once

#include "iCharacter.h"		
#include <string>

class cSorcererBuilder
{
public:
	iCharacter* createCharacter(std::string whatToMake);
};