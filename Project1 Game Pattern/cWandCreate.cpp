#include "cWandCreate.h"

#include "cRedWand.h"
#include "cBlueWand.h"
#include "cPurpleWand.h"

iWand* cWandCreate::makeWeapon(unsigned int typeOfWeapon)
{
	iWand* pTheWeapon = NULL;

	switch (typeOfWeapon)
	{
	case 1:
		pTheWeapon = new cRedWand();
		break;

	case 6:
		pTheWeapon = new cBlueWand();
		break;

	case 73:
		pTheWeapon = new cPurpleWand();
		break;

	default:

		break;
	}

	return pTheWeapon;
}