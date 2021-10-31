#include "cSorcererFactory.h"

#include <iostream>

cSorcererFactory::cSorcererFactory()
{
	std::cout << "cCharacterFactory::cCharacterFactory()" << std::endl;
}

cSorcererFactory::~cSorcererFactory()
{
	// TODO: Delete the instance of the factory object
	std::cout << "cCharacterFactory::~cCharacterFactory()" << std::endl;
}

void cSorcererFactory::DeleteAllObject(void)
{
	for (unsigned int index = 0; index != this->vecTheCharacters.size(); index++)
	{
		iCharacter* pCurChar = this->vecTheCharacters[index];
		delete pCurChar;
	}
	return;
}


// Factory method
// If invalid, returns NULL (or zero or nullptr)
iCharacter* cSorcererFactory::createCharacter(char ch)
{
	switch (ch) {
	case 'p':
		iCharacter * pTheChar = new cPlayer();
		this->vecTheCharacters.push_back(pTheChar);
		return pTheChar;
	}
	case 'z':
	{
		iCharacter* pTheChar = new cZombie();
		this->vecTheCharacters.push_back(pTheChar);
		return pTheChar;
	}
	case 'd':
	{
		iCharacter* pTheChar = new cDragon();
		this->vecTheCharacters.push_back(pTheChar);
		return pTheChar;
	}
	case 'g':
	{
		iCharacter* pTheChar = new cGhoul();
		this->vecTheCharacters.push_back(pTheChar);
		return pTheChar;
	}
	if (whatToMake == "Player")
	{
		iCharacter* pTheChar = new cPlayer();
		// Keep a copy of the pointer...
		this->vecTheCharacters.push_back(pTheChar);
		// Return the pointer to the caller
		return pTheChar;
	}
	else if (whatToMake == "Boss")
	{
		iCharacter* pTheBoss = new cBoss();
		// Keep a copy of the pointer...
		this->vecTheCharacters.push_back(pTheBoss);

		// Return the pointer to the caller
		return pTheBoss;
	}
	else if (whatToMake == "Ordinary_Character")
	{
		return new cCharacter();
	}
	else if (whatToMake == "Super_Boss")
	{
		return new cSuperBoss();
	}
	else if (whatToMake == "Monster")
	{
		return new cMonster();
	}
	else if (whatToMake == "Super_Monster")
	{
		return new cSuperMonster();
	}

	// What are you talking about?
	// I don't know how to make that...
	return NULL;	// nullptr or 0
}


//static
cCharacterFactory* cCharacterFactory::getFactory(void)
{
	//static cCharacterFactory* m_pTheOneInstance;

	// Have I created one of these yet??
	if (cCharacterFactory::m_pTheOneInstance == NULL)
	{
		// Nope, so I better create one...
		cCharacterFactory::m_pTheOneInstance = new cCharacterFactory();
	}

	// Return the ONE and ONLY instance
	return m_pTheOneInstance;
}

// 2nd part: a shared instance of a pointer to the object
// static means it's shared with ALL instances
// 
// static cCharacterFactory* m_pTheOneInstance;
//
cCharacterFactory* cCharacterFactory::m_pTheOneInstance = NULL;




// Alternative:
cCharacterFactory* cCharacterFactory::getFactoryStackBased(void)
{
	// return the address (or reference) of the object
	return &theOneInstance;

	//	cCharacterFactory* pTheInstance = &theOneInstance;
	//	return pTheInstance;
}


//static 
cCharacterFactory cCharacterFactory::theOneInstance;	// On the stack (isn't a pointer)
