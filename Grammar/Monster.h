#pragma once
#include "enum.h"
#include "Object.h"
class Monster : public Object
{
public:
	void Initialize(DungeonType type);
	virtual void Kill(const Object* pObj);
	virtual void Dead();
};