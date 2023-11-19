#pragma once

#define SKILL_DATA_MAX 20
class Skill;
class SkillMgr
{
private:
	Skill* skillList_[SKILL_DATA_MAX];

public:
	void Initialize();

public:
	static SkillMgr* GetInst() // 싱글톤
	{
		static SkillMgr inst; // 단, 한개
		return &inst;
	}

	Skill* GetSkill(int skillIdx);
	Skill* GetSkill(const char* skillName);
//	Skill* CreateSkill(SkillType type, )
	void TestFunc() {}
};

// static 변수 : 전역 변수 - 지역적인 특성 가지고 있다. 
// static 함수 : 클래스 객체와 상관없이 호출 가능
/*
	디자인 패턴
	- 방법론
	1. 싱글톤
	- 클래스 객체가 전체 프로젝트에서 단, 한개만 존재한다.
	- 이 객체는 프로그램이 끝날때까지 존재한다.
*/
