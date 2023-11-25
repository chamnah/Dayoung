#include "SkillMgr.h"
#include "Skill.h"
#include <iostream>
void SkillMgr::Initialize()
{
	skillList_[0] = new AttackSkill(SkillType::ST_ATTACK, "�̶�Ŭ ����!", "�̶�Ŭ�� �������� ������.", 0.5f);
	skillList_[1] = new AttackSkill(SkillType::ST_ATTACK, "�ٿ� ����!", "���� �������� ������.", 3.f);
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
����
������ 3. ���� 4. �κ��丮 �߰�

���� �����
1. ����
2. ��
3. ���� - ����Ŀ�� Max 3�� - �κ��� ����

������
�κ��丮 - ������ ����Ʈ
*/