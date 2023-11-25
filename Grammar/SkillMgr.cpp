#include "SkillMgr.h"
#include "Skill.h"
#include <iostream>
void SkillMgr::Initialize()
{
	skillList_[0] = new AttackSkill(SkillType::ST_ATTACK, "미라클 어택!", "미라클한 데미지를 입힌다.", 0.5f);
	skillList_[1] = new AttackSkill(SkillType::ST_ATTACK, "다영 어택!", "영한 데미지를 입힌다.", 3.f);
}

Skill* SkillMgr::GetSkill(int skillIdx)
{
	return skillList_[skillIdx];
}

Skill* SkillMgr::GetSkill(const char* skillName)
{
	for (size_t i = 0; i < SKILL_DATA_MAX; i++)
	{
		if (std::strcmp(skillList_[i]->GetName(), skillName) == 0)
		{
			return skillList_[i];
		}
	}

	return nullptr;
}

//Skill* CreateSkill(SkillType type, )
//{
//	if (type)
//	{
//
//	}
//	return new AttackSkill();
//}

/*
숙제
선택지 3. 상점 4. 인벤토리 추가

상점 만들기
1. 무기
2. 방어구
3. 포션 - 스택커블 Max 3개 - 인벤에 고유

선택지
인벤토리 - 아이템 리스트
*/