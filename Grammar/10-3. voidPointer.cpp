#include <iostream>

using namespace std;

void func(void* pVoid)
{
	(pVoid);
}

void main()
{
	/*
	void Pointer
	����Ű�� �ڷ����� �� �� ���� ��� ���� ���ȴ�.
	
	*/

	int temp = 20;
	int* pInt = &temp;
	
	char text = 'a';
	char* pChar = &text;
	void* pVoid = pInt;

	cout << *((int*)pVoid);

	func(pVoid);

	//*pVoid; void*������ *�� ���� �����ϴ°� �Ұ����ϴ�.
	//pChar = pInt; �ٸ� �ڷ����� �����͸� ����Ű�� ���� �߻�
}