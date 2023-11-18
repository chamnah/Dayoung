#include "Player.h"
#include "Skill.h"
#include "SkillMgr.h"
#include <iostream>
using namespace std;

void Player::SetJob(JobType type)
{
	job_ = type;
	level_ = 1;

	switch (job_)
	{
	case PART_TIMER:
		attack_ = 20;
		defence_ = 20;
		hp_ = 50;
		mp_ = 50;
		speed_ = 3;
		money_ = 10;
		break;
	case POLICE:
		attack_ = 35;
		defence_ = 30;
		hp_ = 80;
		mp_ = 20;
		speed_ = 10;
		money_ = 50;
		break;
	case CLEANER:
		attack_ = 30;
		defence_ = 30;
		hp_ = 3;
		mp_ = 3;
		speed_ = 5;
		money_ = 30;
		break;
	case FIREFIGHTER:
		attack_ = 30;
		defence_ = 50;
		hp_ = 100;
		mp_ = 10;
		speed_ = 10;
		money_ = 50;
		break;
	case DOCTOR:
		attack_ = 50;
		defence_ = 10;
		hp_ = 20;
		mp_ = 100;
		speed_ = 5;
		money_ = 100;
		break;
	default:
		break;
	}

}

void Player::ShowStatus() const
{
	cout << "===== 능력치 =====" << endl;
	cout << "이름 :" << name_ << endl;
	cout << "직업 :" << GetJobName() << endl;
	cout << "레벨 :" << level_ << endl;
	cout << "공격력 :" << attack_ << endl;
	cout << "방어력 :" << defence_ << endl;
	cout << "체력 :" << hp_ << endl;
	cout << "마나 :" << mp_ << endl;
	cout << "스피드 :" << speed_ << endl;
	cout << "돈 :" << money_ << endl;
}

const char* Player::GetJobName() const
{
	switch (job_)
	{
	case PART_TIMER:
		return "알바생";
		break;
	case POLICE:
		return "경찰관";
		break;
	case CLEANER:
		return "청소부";
		break;
	case FIREFIGHTER:
		return "소방관";
		break;
	case DOCTOR:
		return "의사";
		break;
	default:
		break;
	}

	return "";
}

//1. 비어있는 스킬 목록에 자동 세팅
void Player::SetSkill(Skill* pSkill)
{
	for (int i = 0; i < SKILL_MAX; i++)
	{
		if (pSkills_[i] == nullptr)
		{
			pSkills_[i] = pSkill;
			return;
		}
	}

	cout << "더 이상 스킬을 추가할 수 없습니다." << endl;
}

void Player::Kill(const Object* pObj)
{
	cout << "처치 하였습니다." << endl;

	exp_ += pObj->Getexp();
	money_ += pObj->Getmoney();

	if (exp_ > 10)
	{
		level_ += 1;
	}
}

void Player::Dead()
{
	cout << "죽음을 맞이하여 마을로 돌아갑니다." << endl;

	exp_ = 0;
	money_ -= static_cast<int>(money_ * 0.1f);

	if (money_ < 0)
	{
		money_ = 0;
	}
}

void Player::ShowSkillList()
{
	int index = 0;
	for (int i = 0; i < SKILL_MAX; i++)
	{
		if (pSkills_[i] != nullptr)
		{
			cout << index << ". " << pSkills_[i]->GetName() << " ";
			++index;
		}
	}
}

void Player::UseSkill(int index, Object* pObj)
{
	pSkills_[index]->UseSkill(this, pObj);

	/*
	switch (pSkills_[index]->GetType())
	{
	case ST_ATTACK:
		((AttackSkill*)pSkills_[index])->Crush();
		break;
	case ST_HEAL:
	    ((HealSkill*)pSkills_[index])->Crush();
	default:
		break;
	}
	*/
}
