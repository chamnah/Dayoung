#include <iostream>
#include <functional>
using namespace std;

void testFunc(int, int)
{

}

void testFunc_2(int, int)
{

}

void testFunc_3(int)
{

}

int testFunc_4(int, int)
{
	return 0;
}

void Output_1()
{
	cout << "1번 출력";
}

void Output_2()
{
	cout << "2번 출력";
}


void OutputFunc(void (*func)())
{
	func();
}

/*
void OutputFunc(function<void()> func1) 
{
	func1();
}
*/


struct A
{
	static void Output()
	{
		cout << "A 출력";
	}
};

struct B
{
	static void Output()
	{
		cout << "B 출력";
	}
};

void main()
{
	A a;
	B b;

	/*
	void (*func)(int, int)(testFunc);
	//반환형이 void이고, 함수 인자가 int 2개를 받는 형태의 함수를 가리키는 포인터
	func = testFunc;
	func = testFunc_4; //인자와 반환형이 서로 맞아야만 가리킬 수 있음
	*/

	OutputFunc(a.Output);
	OutputFunc(b.Output);
}