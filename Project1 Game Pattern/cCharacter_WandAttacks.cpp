#include "cCharacter.h"

#include <iostream>


cCharacter::cCharacter()
{
	std::cout << "cCharacter::cCharacter() is created" << std::endl;
	//
	this->Strength = 12;
}

cCharacter::~cCharacter()
{
	std::cout << "cCharacter::~cCharacter() is destroyed" << std::endl;
}

void cCharacter::Attack(void)
{
	std::cout << "cCharacter::Attack() Swish! Swish! Clang!!!" << std::endl;
	std::cout << "with strenth " << this->Strength << std::endl;

	this->ShoeSize = 10;

	return;
}

void cCharacter::Move(float x, float y)
{
	std::cout << "cCharacter::Move() Swish! Swish! Clang!!!" << std::endl;

	this->ShoeSize = 10;

	return;
}