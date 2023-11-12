#pragma once
#include "Object.h"
#include "enum.h"
#define SKILL_MAX 4
class Skill
{
	SkillType type_;
	char name_[20];
	char desc_[30]; // 스킬 설명
	int value_;

public:
	Skill(SkillType type, const char* name, const char* desc, int att, int def);
	const char* GetName() const { return name_; }
	SkillType GetType() const { return type_; }
	int GetValue() const { return value_; }
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
	virtual void Kill(const Object* pObj);
	virtual void Dead();
	void ShowSkillList();
	void UseSkill(int index, const Object* pObj);

	//const 함수 - 클래스 멤버 함수를 const화 시킴
	//- 멤버 변수의 값을 변경할 수 없음
	//- 함수 내에서는 const 함수만 호출할 수 있음
	
	//- 멤버 변수 값 변경할 수 있긴 함 - 
	//함수 호출 - 함수 포인터 접근 - 참조한 함수 값을 불러옴
};

// Get/Set이라는 함수로 접근하는게 좋음
/*
유지보수
*/