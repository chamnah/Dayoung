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
			pInst = new ItemMgr;// GetInst ȣ�� ������ �Ҵ� �ȵ�
		}
		 
		return pInst;
	}

public:
	void Init();
	Item* GetItem(int index) const;
};