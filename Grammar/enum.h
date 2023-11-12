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
	ST_ATTACK,
	ST_END
};