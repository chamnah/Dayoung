#pragma once
#include "enum.h"
class Item
{
private:
	ItemType type_;
	char name_[20];
	char desc_[50];
	int price_;
	int value_;
	bool stackable_; // ���� ����
	//������ �ƽ�ġ / 

public:
	Item(const char* pName, const char* pDesc, int value, int price, ItemType type);
	const char* GetName() const { return name_; }
	const char* GetDesc() const { return desc_; }
	int GetPrice() const { return price_; }
	int GetValue() const { return value_; }
	ItemType GetType() const { return type_; }
};

struct ItemObj // �淮 ����
{
	Item* pSharItem_; // ���� �ڿ� - �޸� ��� ���� �� ����ȭ
	int count_;

};
