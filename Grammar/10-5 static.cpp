#include <iostream>
using namespace std;

void func()
{
	static int a = 0;
	a++;
	cout << a << endl;
}

/*
1. static - ���� �����̴�.

2.
���α׷��� �����ϸ� �Ҵ�
���α׷��� ����Ǹ� ����

3. ���������� ��� �����ϴ�.

*/
struct A
{
public:
	static int abcd;
};

int A::abcd = 10; // �ʱ�ȭ�� �̷��� ������Ѵ�.

void main()
{
	A::abcd = 10;
	A a;
	a.abcd += 1;

	cout << a.abcd;

	/*
	func();
	func();
	func();
	func();
	func();
	func();
	func();
	*/
}

/*
func()

*/