#include <iostream>
using namespace std;

void main()
{
	int a = 20;
	int b = 30;
	/*
	const int* pA = &a;
	int const* pA = &a;
	*pA = 50; X ���� �� ���� �Ұ�
	pA = &b;  O ���� ����� ���� ����
	*/

	/*
	int const* pA = &a;
	*pA = 50; X ���� �� ���� �Ұ�
	pA = &b;  O ���� ����� ���� ����
	*/

	/*
	int* const pA = &a;
	*pA = 50; O ������ ���� ����
	pA = &b;  X ��� ���� �Ұ���
	*/

	/*
	const int* pA = &a;
	pA = &b;
	pA = 200; // ����� �����Ͽ��� ��� �� ������ �Ұ��� �ϴ�.
	*/

	/*
	����ó����� - ������� sds
	���� ���α׷��� ������ �ڰ��� (����) - ȸ��x
	*/
}