#include "cCharacter.h"

#include <iostream>

void cCharacter::TakeDamage(float howMuch)
{
	std::cout << "cCharacter::TakeDamage() takes " << howMuch << " damage" << std::endl;
	this->Strength -= (int)howMuch;
	return;
}

