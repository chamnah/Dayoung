#include <iostream>

using namespace std;

void func(void* pVoid)
{
	(pVoid);
}

void main()
{
	/*
	void Pointer
	가리키는 자료형을 알 수 없는 경우 많이 사용된다.
	
	*/

	int temp = 20;
	int* pInt = &temp;
	
	char text = 'a';
	char* pChar = &text;
	void* pVoid = pInt;

	cout << *((int*)pVoid);

	func(pVoid);

	//*pVoid; void*에서는 *로 값에 접근하는게 불가능하다.
	//pChar = pInt; 다른 자료형의 포인터를 가리키면 에러 발생
}