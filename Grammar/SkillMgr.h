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
	static SkillMgr* GetInst() // �̱���
	{
		static SkillMgr inst; // ��, �Ѱ�
		return &inst;
	}

	Skill* GetSkill(int skillIdx);
	Skill* GetSkill(const char* skillName);
//	Skill* CreateSkill(SkillType type, )
	void TestFunc() {}
};

// static ���� : ���� ���� - �������� Ư�� ������ �ִ�. 
// static �Լ� : Ŭ���� ��ü�� ������� ȣ�� ����
/*
	������ ����
	- �����
	1. �̱���
	- Ŭ���� ��ü�� ��ü ������Ʈ���� ��, �Ѱ��� �����Ѵ�.
	- �� ��ü�� ���α׷��� ���������� �����Ѵ�.
*/
