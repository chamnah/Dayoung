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
	ItemObj* pEquipList_[EQUIP_MAX]; // ���â
	
	ItemObj* pInven_[INVEN_MAX];
	// �κ��丮 0 ~ 10 ��� 11 ~ 40 �κ��丮 40 ~ 50 ĳ�� �κ��丮

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
	//const �Լ� - Ŭ���� ��� �Լ��� constȭ ��Ŵ
	//- ��� ������ ���� ������ �� ����
	//- �Լ� �������� const �Լ��� ȣ���� �� ����
	
	//- ��� ���� �� ������ �� �ֱ� �� - 
	//�Լ� ȣ�� - �Լ� ������ ���� - ������ �Լ� ���� �ҷ���
};

// �ٸ� ���Ͽ����� ������ ��ü�� ����ϴ°� �ƴ� ����� ��ü�� ���
extern Player p1; 

// Get/Set�̶�� �Լ��� �����ϴ°� ����
/*
��������
*/