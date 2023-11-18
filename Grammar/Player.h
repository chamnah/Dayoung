#pragma once
#include "Object.h"
#include "enum.h"

#define SKILL_MAX 4

class Skill;
class Player : public Object
{
private:
	JobType job_;
	Skill* pSkills_[SKILL_MAX];

public:
	void SetJob(JobType type);
	JobType GetJob() const { return job_; }
	void ShowStatus() const;
	const char* GetJobName() const;
	void SetSkill(Skill* pSkill);
	virtual void Kill(const Object* pObj);
	virtual void Dead();
	void ShowSkillList();
	void UseSkill(int index, Object* pObj);

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