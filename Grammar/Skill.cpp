#include "Skill.h"
#include "Object.h"
#include <iostream>

Skill::Skill(SkillType type, const char* name, const char* desc, float value)
	:type_(type), value_(value)
{
	strcpy_s(name_, name);
	strcpy_s(desc_, desc);
}

void Skill::SetFunc(void(Skill::*func)())
{
	((*this).*func)();
}

AttackSkill::AttackSkill(SkillType type, const char* name, const char* desc, float value)
	:Skill::Skill(type, name, desc, value)
{
}

void AttackSkill::UseSkill(Object* pOwner, Object* pTarget)
{
 	int ownerAttack = pOwner->GetAttack();
	int skillValue = static_cast<int>(ownerAttack + ownerAttack * value_);
	pTarget->Hit(skillValue);
}
