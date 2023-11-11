#include <iostream>
#define SIZE 100 // �����ϴ� �뵵
using namespace std;

void main()
{
	/*
	��� : ������ �ʴ� �� 
	���� : ���ϴ� ��
	
	- �ٲ�������! - �������� �Ǽ��� �ٲ��� ���ϰ� ���� ����

	c++ 98/11 - 2000��� �ʹ� Ȥ�� 90��� ����
	c++ version up

	modern c++ - c++14 ���ĺ��� ���� ��Ī
	�������� c++
	*/

	const int num = 10; // ��� - ������ �ܰ迡�� �������
	constexpr int num2 = 10; // ��� - ������ ���� �������
	                         // �̸� ���带 �Ͽ� ����ȭ ��Ű�� �뵵
	int a = 20; // ������ �ܰ迡�� �������
	constexpr int constNum = 10 + 3 * 20;

	/*
	�迭 - 
	int ab[constNum];
	*/

	/*
	��ó�� -> constexpr -> ������(�����) -> ��ũ
	*/

	/*
	��Ʈ ����� ��� Ȱ��

	- ���� ���� �ý���
	- ������, ���ݷ� ���� 
	
	�޸� �뷮�� �Ƴ��� ����
	*/

	// ���� ���
	//0x:16
	/*
	1.  ���� ���
		ũ��Ƽ�� Ȯ�� / ũ��Ƽ�� ������ / ���߷� / ȸ����
	2. ���� ������ ũ��Ƽ�� �������� ȸ������ ����
	3. ���߷� ���� �����ϴ��� �˻��ϰ� cout üũ ���
	4. ���� ������ ���߷� ������ �߰��ϰ� cout üũ ���
	5. ũ��Ƽ�� ������ ���� ���� �� cout üũ ���
	*/
	// 1,2,4,8,16,32,64,128,256,512,1024
	const int attackBuff    = 0x0001;   // 2���� : 0000000001 /10���� 1
	const int strBuff	    = 0x0002;	// 2���� : 0000000010 /10���� 2
	const int dexBuff       = 0x0004;	// 2���� : 0000000100 /10���� 4
	const int intBuff       = 0x0008;   // 2���� : 0000001000 /10���� 8
	const int defenceBuff   = 0x0010;	// 2���� : 0000010000 /10���� 16
	//const int defenceBuff = 0x0020;	// 2���� : 0000100000 /10���� 32
	//const int defenceBuff = 0x0040;	// 2���� : 0001000000 /10���� 64
	//const int defenceBuff = 0x0080;	// 2���� : 0010000000 /10���� 128
	//const int defenceBuff = 0x0100;	// 2���� : 0100000000 /10���� 256
	//const int defenceBuff = 0x0200;	// 2���� : 1000000000 /10���� 512

	int myBuff = attackBuff | intBuff; // ���� �� �ֱ� atackBuff + intBuff = 01001

	//01001 & 01000 = 01000
	bool checkBuff = myBuff& intBuff; // attackBuff ���� �˻�
	cout << "���� ���ݷ� ���� ������? : " << checkBuff << endl;

	/*
	 01001
	^01000

	  00001    
	 ^01000
	  01001

	 XOR: on/off
	*/

	myBuff ^= intBuff; // ���� ����

	cout << "���� ���� ���� ������? : " << checkBuff << endl;
	checkBuff = myBuff & intBuff;
	cout << "���� ���� ���� ������? : " << checkBuff << endl;

	/*
	| & ^

	<<, >>
	*/
}