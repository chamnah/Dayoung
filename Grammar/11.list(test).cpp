#include <iostream>

using namespace std;

struct ListElem
{
	ListElem* pFront = nullptr;
	ListElem* pBack = nullptr;

	int elem = 0;
};

ListElem* pBegin = nullptr;
ListElem* pEnd = nullptr;

void AddList(ListElem* pList)
{
	if (pBegin == nullptr) // Ã³À½ »ðÀÔ
	{
		pBegin = pList;
		pEnd = pList;
	}
	else
	{
		pEnd->pBack = pList;
		pList->pFront = pEnd;
		pEnd = pList;
	}
}

void ShowList()
{
	ListElem* pSearch = pBegin;
	while (pSearch != nullptr)
	{
		cout << pSearch->elem << ", ";
		pSearch = pSearch->pBack;
	}
}

void main()
{
	ListElem first;
	ListElem second;
	ListElem third;

	AddList(&first);
	AddList(&second);
	AddList(&third);

	ShowList();
}