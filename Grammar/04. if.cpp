#include <iostream>

using namespace std;
using std::cin;
void main()
{
	/*
	���ǹ�
	if / switch
	
	if��
	if(����(true/false)) 
	{
		true�� �� �߰�ȣ ���� ����
	}
	else if(true/false)
	{
	}
	else // �� ������ ��� ���յ��� ������ ����
	{
	}

	if : ����� �� if���� ���� �Ұ� �ݵ�� �Ѱ� �ʿ�.
	else if : ���� ���� / ���� ���� ����
	else : ���� ���� / �Ѱ��� ��� ����
	*/

	//if (false) // �߰�ȣ ������ ������ ���ٸ� ����
	//	cout << "�߰�ȣ ��" << endl;

	//cout << "�߰�ȣ ��" << endl;
	const int attackBuff = 0x0001;   // 2���� : 0000000001 /10���� 1
	const int strBuff = 0x0002;	// 2���� : 0000000010 /10���� 2
	const int dexBuff = 0x0004;	// 2���� : 0000000100 /10���� 4

	int myBuff = attackBuff | attackBuff; // ���� �� �ֱ� atackBuff + intBuff = 01001
	bool checkBuff = myBuff & attackBuff; // attackBuff ���� �˻�

	/*if (checkBuff)
	{
		cout << "���ݷ� ���� ���!!!!" << endl;
	}
	else
	{
		cout << "���� ����!!" << endl;
	}*/


	/*if (false)
		if (true)
			cout << "first";
		else
			cout << "second";*/

	/*
	�߰�ȣ ����Ͽ� if ���� ����ϴ°��� ��õ
	*/

	//��� - �Է�

	cout << "���̸� �Է��ϼ���. " << endl;
	int input;
	cin >> input; // �Է�
	
	if (input < 10)
	{
		cout << "����� ����Դϴ�." << endl;
	}
	else if (10 <= input  || input < 20)
	{
		cout << "����� û�ҳ��Դϴ�." << endl;
	}
	else if (20 <= input && input < 30)
	{
		cout << "����� û���Դϴ�." << endl;
	}
	else
	{
		cout << "����� ���̰� ������." << endl;
	}

	/*
	Ű�� �Է��Ͽ� if������ �� ������ �´� ���
	�ɸ��˻�
	*/

	//char input;
	//cin >> input; // �Է�


}