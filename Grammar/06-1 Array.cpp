#include <iostream>

using namespace std;

void main()
{
	/*
	�迭 - ���� �ڷ����� �������� ���� ����	
	*/
	//int a = 0;

	//int num[10]; // 10�� �з��� int�� ������ �����ϰڴ�. 0 ~ 10 -1 ������ �ε����� ���� ����  
	//cout << sizeof(num) << endl;
	/*
	//int num[10] = {0,1,2,3}; //�迭 �ʱ�ȭ - c
	int num[10]{1,2,3,4,5}; // �迭 �ʱ�ȭ - c++
	for (size_t i = 0; i < 10; i++)
	{
		cout << num[i] << endl;
	}
	*/
	//Swap - �ڸ��� �ٲ۴�.

	/*int a = 10;
	int b = 20;
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << a << "\t" << b;*/

	int a[5] = {2,4,6,8,10};
	int b[5] = {1,3,5,7,9};
	int result[10];

	//result : 1 ~ 10

	/*
	for (int resultNum = 0; resultNum < 10; resultNum++)
	{
		if ((resultNum + 1) % 2 == 0)
			result[resultNum] = a[resultNum / 2];//resultNum : 1,3,5,7,9
		else
			result[resultNum] = b[resultNum / 2];// resultNum : 0,2,4,6,8,
	}

	for (size_t i = 0; i < 5; i++)
	{
		result[(i * 2) + 1] = a[i];
		result[(i * 2) ] = b[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << result[i] << " ";
	}
	*/

	/*
	00 01 02 03 04
	10 11 12 13 14
	20 21 22 23 24
	30 31 32 33 34
	40 41 42 43 44
	*/

	/*
	1   2  3  4  5
	6   7  8  9 10
	11 12 13 14 15
	*/

	/*
	int num[5][5] = { }; // 2���� �迭

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << num[i][j]; // i j�� �̿��ؼ� 1 ~ 25
		}
		cout << endl;
	}
	

	int num1[25] = { };

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			num1[i * 5 + j] = num[i][j];
		}
	}
	*/

	/*
	�ζ� ������ - + a
	1. 1 ~ 45���� ��ȣ �����Ѵ�.
	2. �� ��ȣ�� ���´�.
	3. 7���� ���� ��ȣ�� ����Ѵ�.
	4. ���� : �ߺ��� ���� ���ͼ��� �ȵȴ�. 
	- ��Ʈ ���� ���� ���� ��
	*/



}