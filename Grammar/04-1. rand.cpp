#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	//time(NULL) - UTC ���� ���� ��(1972) :���� 1970�� 1�� 1�� 0�÷κ��� ���ݱ��� �帥 ��
	//srand(); - ���ڷ� �� seed������ ������������ �����Ѵ�.  
	//rand(); // ���� �Լ� - ������ ���� ��ȯ�Ѵ�.
	//seed��� �ϴ� ���� �������� 
	//������ �����Ͽ� �ش� �������� �ش��ϴ� ���� ���� ��ȯ
	/*cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;*/

	/*
	1 ~ 100���� ������ ������ ������ ���� ��ȯ
	*/

	//rand() % 100 + 1; // 0 + 1 ~ 99 + 1 - 1 ~ 100
	//cout << (rand() % 101) << endl;

	/*
	���� �� -200 ~ 300 ���̿� �� ������ �Ϸ���
	*/

	/*
	��ȭ �ý���

	1. ��ȭ �Է°�
	2. 3�� ���϶�� 100���� ����
	3. 4 ~ 5�� 50���� ����
	4, 5 ~ 7�� 25���� ����
	5, 8 ~ 9�� 10���� ����
	6. ���� �� ��ȭ ��ġ ����
	*/
	cout << "��ȭ�� ��ġ �Է��ϼ���." << endl;
	int input = 0;
	cin >> input; // scanf

	int inin;
	scanf("%d", &inin);

	if (input < 3)
	{
		if (rand() % 100 + 1 >= 1)
			cout << "��ȭ ����";
	}
	else if (4 <= input && input <= 5)
	{

	}
	else if (6 <= input && input <= 7)
	{

	}
	else if (8 <= input && input <= 9)
	{

	}
}