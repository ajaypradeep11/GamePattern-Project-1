#pragma once

class iWand
{
public:
	virtual ~iWand()
	{
		// Note the empty destructor
	};

	virtual void Cast(int x) = 0;

	virtual void TakeDamage(float amount) = 0;
	virtual void ThrowIntoGrass() = 0;
};