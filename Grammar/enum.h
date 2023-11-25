#pragma once

enum StageType
{
	DUNGEON,
	HOME,
	SHOP,
	INFO
};

enum DungeonType
{
	EASY,
	NORMAL,
	HARD,
	HELL,
	NIGHTMARE,
	END
};

enum BattleType
{
	ATTACK,
	DEFENCE,
	SKILL,
	ITEM,
	ESCAPE
};

enum JobType : int
{
	NONE,
	PART_TIMER,
	POLICE,
	CLEANER,
	FIREFIGHTER,
	DOCTOR
};

enum SkillType
{
	ST_ATTACK,
	ST_END
};

enum ShopType
{
	ST_WEAPON,
	ST_ARMOR,
	ST_POTION
};

enum ItemType
{
	Weapon,
	Armor,
	Potion
};

enum EquipType // 
{
	ET_WEAPON,
	ET_ARMOR,

	ET_END
	//ªÛº˙ π›¡ˆ, ∏Ò∞…¿Ã, ±Õ∞…¿Ã, ∆»¬Ó, πﬂ¬Ó, º”ø , ∏¡≈‰, æ»µÂ∑Œ¿ÃµÂ, ∆Í,
	//æÛ±º ¿ÂΩ≈±∏
};