#pragma once
#include "cPlayer.h"

class cZombie : public cPlayer
{
public:
	cZombie();
	virtual ~cZombie();

	virtual void Attack(void);

private:
	std::string firstname;
};
