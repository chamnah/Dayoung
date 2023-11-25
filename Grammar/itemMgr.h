#pragma once
#define SHARE_ITEM_MAX 10
class Item;
class ItemMgr
{
private:
	static ItemMgr* pInst;
	Item* pItemList_[SHARE_ITEM_MAX];

public:
	~ItemMgr();

	static ItemMgr* GetInst()
	{
		if (pInst == nullptr)
		{
			pInst = new ItemMgr;// GetInst 호출 전까지 할당 안됨
		}
		 
		return pInst;
	}

public:
	void Init();
	Item* GetItem(int index) const;
};