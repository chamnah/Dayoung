#include "14. AClass.h"
#include <iostream>
using std::cout;
using std::endl;

AClass::AClass()
	:a(0), b(0) // 이니셜라이저 - 초기화
{
	//a = 10; 여기는 값 대입
	cout << "AClass 생성자 호출" << endl;
}

AClass::AClass(int _a)
	:a(_a), b(0)
{
	cout << "인자 있는 생성자 호출" << endl;
}

AClass::AClass(int _a, int _b)
: a(_a), b(_b)
{
	cout << "두개짜리 인자 있는 생성자 호출" << endl;
	// 인자있는 생성자
}


AClass::AClass(const AClass& obj)
	: a(0), b(0)
{
	a = obj.a;
	cout << "A Class 복사 생성자 호출" << endl;
}

AClass::~AClass()
{
	cout << "A Class 소멸자 호출" << endl;
}

BClass::BClass()
	:c(0), ptrA(nullptr)
{
	ptrA = new int;
	cout << "B Class 생성자 호출" << endl;
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
	cout << "B Class 복사 생성자 호출" << endl;

	//this - 자신의 클래스 포인터
	
	this->ptrA = new int;
	*(this->ptrA) = *obj.ptrA; // 깊은 복사

	/*
	위와 같은 내용
	ptrA = new int;
	*ptrA = *obj.ptrA;
	*/
}

BClass::BClass(const BClass&& obj)
{
	cout << "B Class 이동 생성자 호출" << endl;
	this->ptrA = obj.ptrA;
}

BClass::~BClass()
{
	cout << "B Class 소멸자 호출" << endl;
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

// 바뀐 점
*/