#pragma once
#include "Object.h"
#include "enum.h"
#define SKILL_MAX 4
class Skill
{
	SkillType type_;
	char name_[20];
	char desc_[30]; // ��ų ����
	int att_;
	int def_;

public:
	Skill(SkillType type, const char* name, const char* desc, int att, int def);

};

class Player : public Object
{
private:
	JobType job_;
	const Skill* pSkills_[SKILL_MAX];

public:
	void SetJob(JobType type);
	JobType GetJob() const { return job_; }
	void ShowStatus() const;
	const char* GetJobName() const;
	void SetSkill(const Skill* pSkill);

	//const �Լ� - Ŭ���� ��� �Լ��� constȭ ��Ŵ
	//- ��� ������ ���� ������ �� ����
	//- �Լ� �������� const �Լ��� ȣ���� �� ����
	
	//- ��� ���� �� ������ �� �ֱ� �� - 
	//�Լ� ȣ�� - �Լ� ������ ���� - ������ �Լ� ���� �ҷ���
};

// Get/Set�̶�� �Լ��� �����ϴ°� ����
/*
��������
*/