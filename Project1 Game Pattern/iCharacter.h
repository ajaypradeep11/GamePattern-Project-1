#pragma once

class iCharacter
{
public:
	virtual void Move(float x, float y) = 0;
	virtual void CastSpell(void) = 0;
	virtual void SelfHeal() = 0;
	virtual void DeflectDamage(float returnDamage) = 0;
	virtual void TakeDamage(float getDamage) = 0

};