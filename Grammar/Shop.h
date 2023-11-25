#pragma once
#define SHOP_ITEM_MAX 10 
#include "enum.h"

class Item;
class Shop
{
private:
	char name_[20];
	Item* pItemList_[SHOP_ITEM_MAX];


public:
	void Init(ShopType type);
	void Show();


};

