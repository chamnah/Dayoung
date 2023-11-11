#include <iostream>

int func()
{
	return 10;
}

void main()
{
	/*
	L Value - left
	R Value - right

	L value는 대입할 수 있다.
	R value는 대입을 할 수 없다.
	*/

	/*
	int temp = 0; // temp : Lvalue / 0 : Rvalue
	0 = temp;
	"aa" = temp;

	int temp2 = func(); // 레지스터의 잠시 보관된 값
	func() = temp2; // 임시 밸류
	*/

	//func();

	//int(0.1f) = 10; Rvalue
	//ClassA(A);

	//std::move : Lvalue -> Rvalue
	// - 포인터를 이동 시켜준다.
	//&& -> Rvalue 저장하기 위한 자료형

	//int a = 0;
	//int&& b = std::move(a);

	int* temp = new int;
	*temp = 10;
	int* temp2 = (std::move(temp)); // 이동연산자
	
	temp2 = temp;
	temp = nullptr;

	int a = 0;

	/*
	포인터에서는 이동연산자 써도 이동안됨
	- 직접 구현해야됨

	나중에 배울 내용
	스마트 포인터
	- c++에서 만든 똑똑한 포인터
	*/

}