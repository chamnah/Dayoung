#include "Object.h"
#include <iostream>
void Object::SetName(const char* pName)
{
	strcpy_s(name_, pName);
}

void Object::Hit(int attack)
{
	int damage = attack - defence_;

	if (damage > 0)
	{
		hp_ = hp_ - damage;
	}
}