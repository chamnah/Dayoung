#include <iostream>

using namespace std;

void main()
{
	/*
	switch() - ���� �� - ����/���� - �Ǽ� �ȵ�
	{
		case ����:
		  // ���ǿ� ������ �ش籸�� ����
		  break; - Ż��
		default: - if���� else�� ���� ���� �ȸ����� ����
		  break;

		  case���� break�� ���������� �����Ͽ� �����Ѵ�.
		  break�� ������ Ȯ���ϴ� ������ �߿��ϴ�.

		  case ������ ������ �ϳ��� �����Ѵ�.
	}
	*/

	int input = 10;

	//switch (input)
	//{
	//case 10:
	//	cout << "10�Դϴ�." << endl;
	//case 11:
	//	cout << "11�Դϴ�." << endl;
	//	break;
	//default: // else
	//	break;
	//}

	switch (input)
	{
	case 4:
	case 5:
		cout << "��ȭ ����!" << endl;
		break;
	default: // else�� ����
		cout << "���ǿ� �´� ���� �����ϴ�." << endl;
		break;
	}

	/*
	����ȭ
	lookup table - �̸� �迭�� ���� ���� ���� ���� �ѹ��� �̵�
	
	switch - ������ ������ �� ������ ����.

	if - ������ ���� ��� ������ ����.
	*/

}