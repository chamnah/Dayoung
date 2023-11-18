#pragma once
#include "enum.h"
const char* GetDungeonName(DungeonType type)
{
	switch (type)
	{
	case EASY:
		return "½¬¿ò";
		break;
	case NORMAL:
		return "º¸Åë";
		break;
	case HARD:
		return "¾î·Á¿ò";
		break;
	case HELL:
		return "Áö¿Á";
		break;
	case NIGHTMARE:
		return "¾Ç¸ù";
		break;
	default:
		break;
	}

	return "";
}