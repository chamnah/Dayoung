#include <iostream>

using namespace std;

void main()
{
	int numList[10] = {1,2,3,4,5,6,7,8,9,10}; 

	int* pInt = numList; //�迭�� �̸� ��ü�� 0��° �迭�� �ּ� �̸��̴�.
	pInt = &numList[0]; //���� ���� �ǹ��̴�.
	pInt[3] = 10;

	/*
	cout << pInt[2];
	cout << *(numList+2);

	cout << numList[2];
	cout << *(pInt + 2);
	*/
	
	/*for (size_t i = 0; i < 10; i++)
	{
		cout << numList[i] << ",";
	}*/

	/*
	for (size_t i = 0; i < 10; i++)
	{
		cout << *pInt << ",";
		pInt += 1; // ���� ����Ű�� �ڷ����� ũ�⸸ŭ ���� �ּҸ� ����Ų��.
	}
	*/
}