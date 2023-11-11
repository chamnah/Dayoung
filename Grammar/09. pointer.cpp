#include <iostream>

using namespace std;

void func(int* pInt)
{
	*pInt = 30;
}

struct A
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
};

A func1(A temp);
void func2(A* temp);

void main()
{
	/*
	pointer : �޸� �ּҸ� �����ϴ� �ڷ���
	
	int* char* func* struct* void* - �ڷ����� �𸦶�
	
	���۷��� : ������, ��Ī�̶�� �ǹ̷� ����, ������ ó�� �ּҷ� ������ ������ �ѹ� �ʱ�ȭ �� �� ���� �ٲ� �� ����.
	*/
	/*
	int* pInt; // 4byteũ���� �޸� ������ ����Ű�� �ּҸ� ��� �ڷ���

	int a = 20;
	int b = 30;
	pInt = &a; // �ּҸ� ǥ���� ���� ���� �տ� & ��ȣ�� �־�� �Ѵ�.
	*pInt = 60; // ������ ���� �տ� * ��ȣ�� ���̸� �ش� ���� ����

	pInt = &b;
	*pInt = 70;
	cout << b;

	A* pA;
	pA->a = 20; //����ü �����Ͽ��� ->�� ���� �Ѵ�.
	(*pA).a = 20; // ->�� ���� �ǹ��̴�.

	*/
	// ���۷���
	/*
	int a = 20;
	int b = 30;
	
	int& ref = a; // ���۷����� a�� ����Ŵ
	ref = b;      // a���ٰ� b�� ���� ������

	cout << a;
	*/

	/*
	�����Ϳ� ���۷����� ���Ǵ� ��� 
	1. �Լ� ���ڷ� �־ ���� ���� �ٲٰ� ���� ��
	2. ���� ����� ���̰� ���� ��
	*/

	/*
	�����Ϳ� ���۷����� ����
	1.���۷����� �ʱ�ȭ�� �� �ѹ� ����Ų �� ����� �ٲ� �� ����. / �����ʹ� ��� ���Ѿ��� �ٲ� �� ����
	2.���۷����� ������ ����� �����Ѿ� �Ѵ�. / �����ʹ� ����Ű�� �ʾƵ� �������
	3.�����ʹ� �ǵ��� ������� ����, ���۷����� �ذ��� �� ������ ���۷����� �ذ��ϴ°� ����
	*/

	/*
	A& refA;

	A* pA = nullptr;
	pA->a = 20;
	*/
	
	//int* pInt;

	/*
	�ּҰ��� ũ��
	
	32bit - 4byte
	64bit - 8byte
	*/

	/*int a = 0;
	func(&a);

	cout << a;*/

	A temp = {};
	temp = func1(temp); // ���� 2�� 40byteũ���� ����ü�� 2�� �޸𸮿� �����մϴ�.
	func2(&temp); //  8byteũ���� ������ ���ڷ� 1�� ��ȯ�Ҷ� 40byte �� ���� 1�� �Ͼ.

	//���� �Լ��� ���� std::swap(,);
}

A func1(A temp) // 40byte
{
	return temp;
}

void func2(A* temp) // 8byte temp* = &A; ����ü ũ�� ���� ���� 8byte
{
	temp-> a = 200;
}

void func4(A& temp) // 8byte temp* = &A; ����ü ũ�� ���� ���� 8byte
{
	temp.a = 200;
}

const A& temp;
bool func3(const A* temp) // ���� ��� ���̱� ����
{
	if (temp->a > 10)
	{
		return true;
	}
	return false;
}

