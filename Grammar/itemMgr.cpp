#include "itemMgr.h"
#include "Item.h"

ItemMgr* ItemMgr::pInst = nullptr;

ItemMgr::~ItemMgr()
{
	for (size_t i = 0; i < SHARE_ITEM_MAX; i++)
	{
		delete pItemList_[i];
		pItemList_[i] = nullptr;
	}

	delete pInst;
}

void ItemMgr::Init()
{
	pItemList_[0] = new Item("ưư�� ��ġ", "�ſ� ưư�ϴ�.", 10, 1000, ItemType::Weapon);
	pItemList_[1] = new Item("ưư�� ��", "�ſ� ưư�ϴ�.", 5, 500, ItemType::Weapon);
	pItemList_[2] = new Item("ưư�� ����", "�ſ� �����ϰ�, ���ִ�.", 10, 1000, ItemType::Armor);
	pItemList_[3] = new Item("�� ưư�� ����", "���°� ���ٴ� ����", 5, 500, ItemType::Armor);
	pItemList_[4] = new Item("HP ����", "ü�� ȸ�� ����", 5, 500, ItemType::Potion);
	pItemList_[5] = new Item("MP ����", "���� ȸ�� ����", 5, 500, ItemType::Potion);
}

Item* ItemMgr::GetItem(int index) const
{
	return pItemList_[index];
}
