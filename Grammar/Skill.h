#pragma once
#include "enum.h"
#include "SkillMgr.h"
enum StateType
{
	Stun
};

class Object; // 전방선언
class Skill
{
protected:
	SkillType type_;
	StateType stateType_;
	char name_[20];
	char desc_[30]; // 스킬 설명
	float value_;
	float stateValue_;
	void(Skill::*testFunc)();
public:
	Skill() {}
	Skill(SkillType type, const char* name, const char* desc, float value);
	const char* GetName() const { return name_; }
	SkillType GetType() const { return type_; }
	float GetValue() const { return value_; }
	virtual void UseSkill(Object* pOwner, Object* pTarget) =0; // 순수 가상 함수
	void SetFunc(void (Skill::*func)());
};

class AttackSkill : public Skill
{
public:
	AttackSkill() {}
	AttackSkill(SkillType type, const char* name, const char* desc, float value);
	virtual void UseSkill(Object* pOwner, Object* pTarget) override;
};

class DefenseSkill : public Skill
{
public:
	virtual void UseSkill(Object* pOwner, Object* pTarget) override {}
};

class HealSkill : public Skill
{
public:
	virtual void UseSkill(Object* pOwner, Object* pTarget) override {}
};