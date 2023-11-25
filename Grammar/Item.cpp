#include "Item.h"
#include <iostream>

Item::Item(const char* pName, const char* pDesc, int value, int price, ItemType type)
	:name_(""),desc_(""), value_(value), price_(price), type_(type)
{
	strcpy_s(name_, pName);
	strcpy_s(desc_, pDesc);
}
