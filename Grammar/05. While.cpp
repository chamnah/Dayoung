
#include <iostream>

using namespace std;

int main()
{
	/*
	�ݺ��� - �������� �ݺ���Ű�� ����
	while, do while, for
	
	while - if

	if(true or false)
	{
		// true�� ����
	}

	while(true or false)
	{
		// true�� ����  - false�� �ɶ����� ��� ����
	}
	*/
	// ���� ���� : �ݺ��� ������ ������ �ʰ� ����Ǵ� ���� - ��ǻ�� ����

	//while (true)
	//{
	//	cout << "�ݺ� ����" << endl;

	//	if (true)
	//	{
	//		break; // break������ while�� Ż���� �� �ִ�.
	//	}
	//}

	//int num = 0;
	//while (num < 3)
	//{
	//	cout << "�ݺ� ����1" << endl;
	//	++num;
	//	if (true)
	//	{
	//		continue; // �ڵ� ���� - �Ʒ� ���� ���� ���ϰ� �ѱ�
	//	}

	//	cout << "�ݺ� ����2" << endl;
	//}
	
	/*
	do while��

	- while���ϰ� �����ϰ� true�� ��� �ݺ�
	- ������ 1ȸ�� ����
	*/

	/*while (false)
	{
		cout << "�ݺ� ����!!!" << endl;
	}*/

	/*int num = 0;

	do
	{
		cout << "�ݺ� ����!!!" << endl;
		++num;
	} while (num == 0);*/

	return 0;
}

//std::abs(2); // ���밪 -��ȣ ����
//char szText1[10];
//char szText2[10];

//scanf_s("%s", szText, 10);
//scanf_s("%[^\n]", szText1, 10);
//cin >> szText1 >> szText2;
//cin.getline(szText1, 10);