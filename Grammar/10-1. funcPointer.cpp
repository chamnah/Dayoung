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
	cout << "1�� ���";
}

void Output_2()
{
	cout << "2�� ���";
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
		cout << "A ���";
	}
};

struct B
{
	static void Output()
	{
		cout << "B ���";
	}
};

void main()
{
	A a;
	B b;

	/*
	void (*func)(int, int)(testFunc);
	//��ȯ���� void�̰�, �Լ� ���ڰ� int 2���� �޴� ������ �Լ��� ����Ű�� ������
	func = testFunc;
	func = testFunc_4; //���ڿ� ��ȯ���� ���� �¾ƾ߸� ����ų �� ����
	*/

	OutputFunc(a.Output);
	OutputFunc(b.Output);
}