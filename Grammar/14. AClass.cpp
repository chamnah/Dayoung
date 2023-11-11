#include "14. AClass.h"
#include <iostream>
using std::cout;
using std::endl;

AClass::AClass()
	:a(0), b(0) // �̴ϼȶ����� - �ʱ�ȭ
{
	//a = 10; ����� �� ����
	cout << "AClass ������ ȣ��" << endl;
}

AClass::AClass(int _a)
	:a(_a), b(0)
{
	cout << "���� �ִ� ������ ȣ��" << endl;
}

AClass::AClass(int _a, int _b)
: a(_a), b(_b)
{
	cout << "�ΰ�¥�� ���� �ִ� ������ ȣ��" << endl;
	// �����ִ� ������
}


AClass::AClass(const AClass& obj)
	: a(0), b(0)
{
	a = obj.a;
	cout << "A Class ���� ������ ȣ��" << endl;
}

AClass::~AClass()
{
	cout << "A Class �Ҹ��� ȣ��" << endl;
}

BClass::BClass()
	:c(0), ptrA(nullptr)
{
	ptrA = new int;
	cout << "B Class ������ ȣ��" << endl;
}

BClass::BClass(int _a)
	:c(0), ptrA(nullptr)
{
}

BClass::BClass(int _a, int _b)
	:c(0), ptrA(nullptr)
{
}


BClass::BClass(const BClass& obj)
	:c(0), ptrA(nullptr)
{
	cout << "B Class ���� ������ ȣ��" << endl;

	//this - �ڽ��� Ŭ���� ������
	
	this->ptrA = new int;
	*(this->ptrA) = *obj.ptrA; // ���� ����

	/*
	���� ���� ����
	ptrA = new int;
	*ptrA = *obj.ptrA;
	*/
}

BClass::BClass(const BClass&& obj)
{
	cout << "B Class �̵� ������ ȣ��" << endl;
	this->ptrA = obj.ptrA;
}

BClass::~BClass()
{
	cout << "B Class �Ҹ��� ȣ��" << endl;
	//delete ptrA;
}

/*
SuperClass::SuperClass()
	:a(0)
{

}
SuperClass::SuperClass(int _a)
	:a(0)
{

}
SuperClass::SuperClass(int _a, int _b)
	:a(0)
{
	
}

SuperClass::~SuperClass()
{

}

// �ٲ� ��
*/