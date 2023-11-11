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
	pointer : 메모리 주소를 저장하는 자료형
	
	int* char* func* struct* void* - 자료형을 모를때
	
	레퍼런스 : 참조자, 별칭이라는 의미로 사용됨, 포인터 처럼 주소로 접근을 하지만 한번 초기화 한 후 값을 바꿀 수 없다.
	*/
	/*
	int* pInt; // 4byte크기의 메모리 공간을 가리키는 주소를 담는 자료형

	int a = 20;
	int b = 30;
	pInt = &a; // 주소를 표현할 때는 변수 앞에 & 기호를 넣어야 한다.
	*pInt = 60; // 포인터 변수 앞에 * 기호를 붙이면 해당 값에 접근

	pInt = &b;
	*pInt = 70;
	cout << b;

	A* pA;
	pA->a = 20; //구조체 포인턴에서 ->로 접근 한다.
	(*pA).a = 20; // ->랑 같은 의미이다.

	*/
	// 레퍼런스
	/*
	int a = 20;
	int b = 30;
	
	int& ref = a; // 레퍼런스로 a를 가리킴
	ref = b;      // a에다가 b의 값을 대입함

	cout << a;
	*/

	/*
	포인터와 레퍼런스가 사용되는 경우 
	1. 함수 인자로 넣어서 원본 값을 바꾸고 싶을 때
	2. 복사 비용을 줄이고 싶을 때
	*/

	/*
	포인터와 레퍼런스의 차이
	1.레퍼런스는 초기화할 때 한번 가리킨 후 대상을 바꿀 수 없다. / 포인터는 대상 제한없이 바꿀 수 있음
	2.레퍼런스는 무조건 대상을 가리켜야 한다. / 포인터는 가리키지 않아도 관계없음
	3.포인터는 되도록 사용하지 말고, 레퍼런스로 해결할 수 있으면 레퍼런스로 해결하는게 좋음
	*/

	/*
	A& refA;

	A* pA = nullptr;
	pA->a = 20;
	*/
	
	//int* pInt;

	/*
	주소값의 크기
	
	32bit - 4byte
	64bit - 8byte
	*/

	/*int a = 0;
	func(&a);

	cout << a;*/

	A temp = {};
	temp = func1(temp); // 복사 2번 40byte크기의 구조체를 2번 메모리에 복사합니다.
	func2(&temp); //  8byte크기의 포인터 인자로 1번 반환할때 40byte 값 복사 1번 일어남.

	//스왑 함수도 있음 std::swap(,);
}

A func1(A temp) // 40byte
{
	return temp;
}

void func2(A* temp) // 8byte temp* = &A; 구조체 크기 관계 없이 8byte
{
	temp-> a = 200;
}

void func4(A& temp) // 8byte temp* = &A; 구조체 크기 관계 없이 8byte
{
	temp.a = 200;
}

const A& temp;
bool func3(const A* temp) // 복사 비용 줄이기 위함
{
	if (temp->a > 10)
	{
		return true;
	}
	return false;
}

