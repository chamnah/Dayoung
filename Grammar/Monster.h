#pragma once
#include "enum.h"
#include "Object.h"
class Monster : public Object
{
public:
	void Initialize(DungeonType type);
};