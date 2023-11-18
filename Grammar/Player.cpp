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
	cout << "===== �ɷ�ġ =====" << endl;
	cout << "�̸� :" << name_ << endl;
	cout << "���� :" << GetJobName() << endl;
	cout << "���� :" << level_ << endl;
	cout << "���ݷ� :" << attack_ << endl;
	cout << "���� :" << defence_ << endl;
	cout << "ü�� :" << hp_ << endl;
	cout << "���� :" << mp_ << endl;
	cout << "���ǵ� :" << speed_ << endl;
	cout << "�� :" << money_ << endl;
}

const char* Player::GetJobName() const
{
	switch (job_)
	{
	case PART_TIMER:
		return "�˹ٻ�";
		break;
	case POLICE:
		return "������";
		break;
	case CLEANER:
		return "û�Һ�";
		break;
	case FIREFIGHTER:
		return "�ҹ��";
		break;
	case DOCTOR:
		return "�ǻ�";
		break;
	default:
		break;
	}

	return "";
}

//1. ����ִ� ��ų ��Ͽ� �ڵ� ����
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

	cout << "�� �̻� ��ų�� �߰��� �� �����ϴ�." << endl;
}

void Player::Kill(const Object* pObj)
{
	cout << "óġ �Ͽ����ϴ�." << endl;

	exp_ += pObj->Getexp();
	money_ += pObj->Getmoney();

	if (exp_ > 10)
	{
		level_ += 1;
	}
}

void Player::Dead()
{
	cout << "������ �����Ͽ� ������ ���ư��ϴ�." << endl;

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
