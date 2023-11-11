#include <iostream>
#include "globalValueLib.h"
using namespace std;

int a = 0; // 1번 케이스 전역변수

struct A
{
	static int ab; // 여기에서 초기화 불가 - 데이터영역
	               // 구조체 객체에 종속되어있지 않다.
	int c;
};

int A::ab = 0; // 구조체 static 변수 초기화 방법 / 초기화 시 앞에 static 붙이면 안된다.

int func(); // 전방선언
void main()
{
	int test = g_Value;

	A testA, testB; //스택 영역
	testA.ab = 10;
	testB.ab = 20;

	A::ab = 30;

	//cout << testA.ab << endl;
	//cout << sizeof(testA);

	/*
	전역 변수 - 데이터 영역
	- 프로그램이 처음 시작될 때 메모리에 할당 / 프로그램이 끝나면 메모리에서 해제
	
	1. 중괄호에 속해있지 않은 변수 
	2. static 변수
	  - 지역성을 가질 수 있는 변수이다.
	  - 구조체에서 멤버변수가 static 변수라면 초기화하지 않으면 에러가 발생
	3. extern 변수
	  - 특정 파일에 전역 변수로 공용으로 사용하고 싶을 때 사용.
	  - 컴퓨터에다가 복사되지 않고 하나의 전역변수로 공용으로 사용하겠다고 알려줌
	  - 값 대입할 때 중괄호 밖에서는 안된다.(참고)
	*/

	// 지역성은 아래 상태를 의미
	static int b = 0; // 스태틱 전역 변수 선언
	b = 10;

	cout << func() << endl;
	cout << func() << endl;
	cout << func() << endl;
	cout << func() << endl;
	cout << func() << endl;

	/*
	지역변수, 전역변수, 동적할당된 변수
	
	지역 변수
	- 중괄호가 시작되면 할당, 중괄호가 끝나면 해제
	- 스택 영역

	전역변수
	- 프로그램이 시작되면 할당, 프로그램이 끝나면 해제
	- 데이터영역

	동적할당된 변수
	- 사용자(프로그래머)가 할당하고자 할 때 할당 / 해제하고자할 때 해제
	- 힙영역
	*/

	/*
	포인터와 레퍼런스 차이점
	어떨때 포인터를 쓰시고, 레퍼런스는 어떨때 사용하셨나요.
	포인터는 동적할당할때 사용,
	레퍼런스는 포인터를 써야하는 상황을 제외하면 무조건 사용하는거 권장
	*/
	
}

int func()
{
	static int a = 0; // 전역변수
	++a;
	return a;
}

/*
staic을 이용해서 함수를 만들어보기

마지막으로 함수의 인자로 넘어온 값과 현재 인자로 넘긴 값의 합을 반환해주는 함수 

static 변수 - 0
func(10) - 10
func(30) - 40
func(5) - 35 
*/