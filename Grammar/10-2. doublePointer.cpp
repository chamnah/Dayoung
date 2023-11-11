#include <iostream>
using namespace std;

void main()
{
	/*
	이중 포인터
	포인터의 주소를 가리키는 포인터
	*/
	int* pInt = nullptr;
	int** ppInt = nullptr;

	ppInt = &pInt;

	/*int tempList[10][10] = {};

	int (*pList)[10] = tempList;
	int tempList_1[10][10][10] = {};
	(ppInt + 10);*/

	int*** pppInt; // 3중 포인터
	int********** pppppppppInt;//10중포인터

}