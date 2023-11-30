#include "Player.h"
#include "Skill.h"
#include "SkillMgr.h"
#include "Item.h"
#include <iostream>
//#include <Windows.h>
using namespace std;

Player::Player()
{
	memset(pInven_, 0, sizeof(pInven_[0]) * INVEN_MAX);
	memset(pEquipList_, 0, sizeof(pEquipList_[0]) * EQUIP_MAX);
}

Player::~Player()
{
	for (size_t i = 0; i < INVEN_MAX; i++)
	{
		delete pInven_[i];
		pInven_[i] = nullptr;
	}
}

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
		money_ = 10000;
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

void Player::ShowStatus()
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
	cout << endl;
	cout << endl;
	cout << endl;
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
}

bool Player::Buy(Item* pItem)
{
	int itemPrice = pItem->GetPrice();
	if (money_ < itemPrice)
	{
		return false;
	}

	if (AddItem(pItem))
	{
		money_ -= itemPrice;
	}

	return true;

}

bool Player::AddItem(Item* pItem)
{
	for (size_t i = 0; i < INVEN_MAX; i++)
	{
		if (pInven_[i] == nullptr)
		{
			pInven_[i] = new ItemObj;
			pInven_[i]->pSharItem_ = pItem;

			//����Ŀ�� �������̸� ���� �ױ�

			return true;
		}
	}

	cout << "�κ��丮�� �� ������ �����մϴ�." << endl;

	return false;
}

bool Player::AddItem(ItemObj* pItem)
{
	for (size_t i = 0; i < INVEN_MAX; i++)
	{
		if (pInven_[i] == nullptr)
		{
			pInven_[i] = pItem;
			return true;
		}
		else if(pInven_[i]->pSharItem_->GetMaxCount() > 1
			&& strcmp()) // ���� ������ �˻� + ����Ŀ��
		{
			// �̹� �κ��丮�� �������� �����Ѵ�.
			if ((pInven_[i]->count_ + pItem->count_) <= pInven_[i]->pSharItem_->GetMaxCount())
			{

			}

		}
	}

	cout << "�κ��丮�� �� ������ �����մϴ�." << endl;

	return false;
}

void Player::EquipItem(int invenSlot) 
{
	// ������ ��� �ִ� ��Ȳ - �����ʿ�
	// ���� ��Ȳ - 

	ItemObj* pItem = pInven_[invenSlot];

	EquipType equipType = ConvertEquipType(pItem->pSharItem_->GetType());
	if (pEquipList_[equipType] == nullptr)
	{
		pEquipList_[equipType] = pItem;
		pInven_[invenSlot] = nullptr;
	}
	else // ��� �����ϴ� ��� ���� ��ġ ����
	{
		ItemObj* pTemp = pEquipList_[equipType];
		pEquipList_[equipType] = pItem;
		pItem = pTemp;
	}
}

EquipType Player::ConvertEquipType(ItemType type)
{
	switch (type)
	{
	case Weapon:
		return EquipType::ET_WEAPON;
	case Armor:
		return EquipType::ET_ARMOR;
	default:
		break;
	}

	return EquipType::ET_END;
}

void Player::ShowInfo()
{
	while (true)
	{
		ShowStatus();

		cout << "===== �κ� ���� =====" << endl;

		int i = 0;
		for (;i < INVEN_MAX; i++)
		{
			if (pInven_[i] != nullptr)
			{
				cout << i << ". " << pInven_[i]->pSharItem_->GetName() << endl;
			}
		}

		int select = 0;
		cout << "������ �������� �����ϼ���. " << "(������ : " << i << ")" << endl;
		cin >> select;

		if (select == i)
		{
			break;
		}

		EquipItem(select);

	}


}

/*
���� 11/25
���� 
- �ȱ� ��� 
- �����ϱ⿡�� ����Ŀ��

ĳ���� ����
- ��� ����Ʈ

-��� �ɷ�ġ��ŭ �ɷ�ġ ����

���ݷ� 10(+3)

*/

/*
����
����(������)
�Ź� (������)
*/