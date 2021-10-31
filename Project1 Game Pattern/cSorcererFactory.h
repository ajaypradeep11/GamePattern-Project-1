#pragma once


#include "iCharacter.h"
#include <string>
#include <vector>

class cSorcererFactory
{
public:
	iCharacter* createCharacter(char ch);
	void DeleteAllObject(void);
	static cSorcererFactory* getFactory(void);

private:
	cSorcererFactory();

};