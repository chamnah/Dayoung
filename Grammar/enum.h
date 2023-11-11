#pragma once

enum StageType
{
	DUNGEON,
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
	ATTACK,
	ST_END
};