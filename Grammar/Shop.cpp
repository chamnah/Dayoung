#include "Shop.h"
#include "itemMgr.h"
#include <iostream>
#include "Item.h"
#include "Player.h"

using namespace std;
// �� ���� / ���� ���� / ���� ����

void Shop::Init(ShopType type)
{
	for (size_t i = 0; i < SHOP_ITEM_MAX; i++)
	{
		pItemList_[i] = nullptr;
	}

	switch (type)
	{
	case ST_WEAPON:
		strcpy_s(name_, "���� ����");
		pItemList_[0] = ItemMgr::GetInst()->GetItem(0);
		pItemList_[1] = ItemMgr::GetInst()->GetItem(1);
		break;
	case ST_ARMOR:
		strcpy_s(name_, "��� ����");
		pItemList_[0] = ItemMgr::GetInst()->GetItem(2);
		pItemList_[1] = ItemMgr::GetInst()->GetItem(3);
		break;
	case ST_POTION:
		strcpy_s(name_, "���� ����");
		pItemList_[0] = ItemMgr::GetInst()->GetItem(4);
		pItemList_[1] = ItemMgr::GetInst()->GetItem(5);
		break;
	default:
		break;
	}
}

void Shop::Show()
{
	while (true)
	{
		cout << name_ << endl;
		cout << "====================" << endl;

		int i = 0;
		int exit = 0;
		for (; i < SHOP_ITEM_MAX; i++)
		{
			if (pItemList_[i] != nullptr)
			{
				cout << i << ". " << pItemList_[i]->GetName() << " / " << pItemList_[i]->GetDesc() << endl;
				++exit;
			}
		}

		cout << "====================" << endl;

		int select = 0;
		cout << "�����ϰ� ���� �������� �����ϼ���." << "(������ : " << exit << ")" << endl;

		cin >> select;

		if (select == exit)
		{
			break;
		}

		if (select < 0 || select > i)
		{
			system("cls");
			cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;
		}

		if (p1.Buy(pItemList_[select]))
		{
			system("cls");
			cout << "���ſ� �����ϼ̽��ϴ�." << endl;
		}
	}
}
