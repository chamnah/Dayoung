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
	pItemList_[0] = new Item("튼튼한 망치", "매우 튼튼하다.", 10, 1000, ItemType::Weapon);
	pItemList_[1] = new Item("튼튼한 검", "매우 튼튼하다.", 5, 500, ItemType::Weapon);
	pItemList_[2] = new Item("튼튼한 갑옷", "매우 딴딴하고, 멋있다.", 10, 1000, ItemType::Armor);
	pItemList_[3] = new Item("덜 튼튼한 갑옷", "없는것 보다는 낫다", 5, 500, ItemType::Armor);
	pItemList_[4] = new Item("HP 포션", "체력 회복 포션", 5, 500, ItemType::Potion);
	pItemList_[5] = new Item("MP 포션", "마나 회복 포션", 5, 500, ItemType::Potion);
}

Item* ItemMgr::GetItem(int index) const
{
	return pItemList_[index];
}
