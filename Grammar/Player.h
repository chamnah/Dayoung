#pragma once
#include "Object.h"
#include "enum.h"

#define SKILL_MAX 4
#define INVEN_MAX 20
#define EQUIP_MAX 2

class ItemObj;
class Item;
class Skill;
class Player : public Object
{
private:
	JobType job_;
	Skill* pSkills_[SKILL_MAX];
	ItemObj* pEquipList_[EQUIP_MAX]; // 장비창
	
	ItemObj* pInven_[INVEN_MAX];
	// 인벤토리 0 ~ 10 장비 11 ~ 40 인벤토리 40 ~ 50 캐쉬 인베토리

public:
	Player();
	~Player();
	void SetJob(JobType type);
	JobType GetJob() const { return job_; }
	void ShowStatus();
	const char* GetJobName() const;
	void SetSkill(Skill* pSkill);
	virtual void Kill(const Object* pObj);
	virtual void Dead();
	void ShowSkillList();
	void UseSkill(int index, Object* pObj);
	bool Buy(Item* pItem);
	bool AddItem(Item* pItem);
	bool AddItem(ItemObj* pItem);
	void EquipItem(int invenSlot);
	EquipType ConvertEquipType(ItemType type);
	void ShowInfo();
	//const 함수 - 클래스 멤버 함수를 const화 시킴
	//- 멤버 변수의 값을 변경할 수 없음
	//- 함수 내에서는 const 함수만 호출할 수 있음
	
	//- 멤버 변수 값 변경할 수 있긴 함 - 
	//함수 호출 - 함수 포인터 접근 - 참조한 함수 값을 불러옴
};

// 다른 파일에서는 동일한 객체를 사용하는게 아닌 복사된 객체를 사용
extern Player p1; 

// Get/Set이라는 함수로 접근하는게 좋음
/*
유지보수
*/