#include <iostream>

using namespace std;

#define LINE_MAX 7
void main()
{
	int iCount = 0;

	for (size_t i = 0; i < LINE_MAX; i++)
	{
		iCount = i;

		if (i > LINE_MAX / 2) // �߰� ���� �Դ� ���
		{
			iCount = LINE_MAX - i - 1;
		}

		for (size_t i = 0; i < 3 - iCount; i++) // ����� 3 2 1 0
		{
			cout << " ";
		}

		for (size_t i = 0; i < iCount * 2 + 1; i++) // ��
		{
			cout << "*";
		}
		cout << endl;
	}


	/*
	int iCount = 0;
	for (size_t i = 0; i < 7; i++)
	{
		if (i > 7 / 2)
		{
			iCount = 7 - 1 - i;
		}

		for (size_t i = 0; i < 7 - iCount; i++) // �����
		{
			cout << " ";
		}

		for (size_t i = 0; i < iCount * 2 + 1; i++) // �����
		{
			cout << "*";
		}
		cout << endl;
	}
	*/
}