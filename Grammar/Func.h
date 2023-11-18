#pragma once
#include "enum.h"
const char* GetDungeonName(DungeonType type)
{
	switch (type)
	{
	case EASY:
		return "����";
		break;
	case NORMAL:
		return "����";
		break;
	case HARD:
		return "�����";
		break;
	case HELL:
		return "����";
		break;
	case NIGHTMARE:
		return "�Ǹ�";
		break;
	default:
		break;
	}

	return "";
}