#include <iostream>
using namespace std;

void main()
{
	/*
	���� ������, ���� ������
	���� ���� : ���� �� ���� ���� �����Ѵ�.
	���� ���� : ���� �� ���� �������� �����Ѵ�.
	*/

	int num = 10;
	++num; // ���� ����
	num++; // ���� ����
	// +1�Ѵ�.
	
	--num; // ���� ����
	num--; // ���� ����
	// -1�Ѵ�.

	num += 1;
	num = num + 1;
	++num;

	int temp = 10;
	int operNum = (temp++) + 3;

	cout << "operNum :" << operNum << endl;
	cout << "temp :" << temp << endl;


	//�ڷ���
	//size_t afaf;

	// ex)
	//int num2[20];
	//
	//size_t i = -1; // 0���� �ʱ�ȭ
	//while(i < 10)
	//{
	//	num2[i++];
	//}

}