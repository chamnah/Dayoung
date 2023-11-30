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
	cout << endl;
	cout << endl;
	cout << endl;
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

			//스태커블 아이템이면 스택 쌓기

			return true;
		}
	}

	cout << "인벤토리에 빈 공간이 부족합니다." << endl;

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
			&& strcmp()) // 동일 아이템 검사 + 스택커블
		{
			// 이미 인벤토리에 아이템이 존재한다.
			if ((pInven_[i]->count_ + pItem->count_) <= pInven_[i]->pSharItem_->GetMaxCount())
			{

			}

		}
	}

	cout << "인벤토리에 빈 공간이 부족합니다." << endl;

	return false;
}

void Player::EquipItem(int invenSlot) 
{
	// 장착된 장비가 있는 상황 - 스왑필요
	// 없는 상황 - 

	ItemObj* pItem = pInven_[invenSlot];

	EquipType equipType = ConvertEquipType(pItem->pSharItem_->GetType());
	if (pEquipList_[equipType] == nullptr)
	{
		pEquipList_[equipType] = pItem;
		pInven_[invenSlot] = nullptr;
	}
	else // 장비가 존재하는 경우 서로 위치 스왑
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

		cout << "===== 인벤 정보 =====" << endl;

		int i = 0;
		for (;i < INVEN_MAX; i++)
		{
			if (pInven_[i] != nullptr)
			{
				cout << i << ". " << pInven_[i]->pSharItem_->GetName() << endl;
			}
		}

		int select = 0;
		cout << "장착할 아이템을 선택하세요. " << "(나가기 : " << i << ")" << endl;
		cin >> select;

		if (select == i)
		{
			break;
		}

		EquipItem(select);

	}


}

/*
숙제 11/25
상점 
- 팔기 기능 
- 구매하기에서 스택커블

캐릭터 정보
- 장비 리스트

-장비 능력치만큼 능력치 증가

공격력 10(+3)

*/

/*
예시
무기(장착중)
신발 (장착중)
*/