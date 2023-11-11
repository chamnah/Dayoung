#include <iostream>
using namespace std;

void func()
{
	static int a = 0;
	a++;
	cout << a << endl;
}

/*
1. static - 전역 변수이다.

2.
프로그램이 시작하면 할당
프로그램이 종료되면 해제

3. 지역적으로 사용 가능하다.

*/
struct A
{
public:
	static int abcd;
};

int A::abcd = 10; // 초기화를 이렇게 해줘야한다.

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