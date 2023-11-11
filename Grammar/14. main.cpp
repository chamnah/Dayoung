#include "14. AClass.h"
#include <iostream>
void main()
{
	/*
	AClass temp; // 기본 생성자 호출
	AClass temp1(10); // 인자 있는 생성자 호출
	AClass temp2 = { 10,20 }; // 인자 있는 생성자 호출
	AClass temp3{ 10,20 }; // 인자 있는 생성자 호출
	*/

	/*
	이니셜라이져도 동일
	부모 클래스 생성자 호출 -> 자식 클래스 생성자 호출
	자식 소멸자 호출 -> 부모 소멸자 호출

	위 이유로 소멸자 생성자 부모 자식 동일하게 설계해야 함

	*/

	/*AClass* tempB = new BClass;
	delete tempB;
	주의 : 가상 소멸자
	*/

	BClass tempA; // 1. Aptr =  할당된 A 메모리 가리킴
	//BClass tempB = tempA;  // Bptr = Aptr
	//BClass tempB = std::move(tempA);  // Bptr = Aptr

	/*
	//컴퓨터 속도 최적화 방법
	1. 메모리 할당/ 해제를 줄인다.
	 - 동적 할당
	 - 함수 호출

	2. 연산 횟수를 줄인다.
		for() - 횟수
	*/
	



	/*
	깊은 복사
	복사 생성자를 이용해서 동적 할당된 메모리를 복사할 때 새로운 공간에 동적할당 하여 값만 복사하는 방법

	얕은 복사
	기본 복상 방법으로 클래스의 값을 그대로 복사하는 방법
	동적 할당된 메모리를 복사할 시 문제가 될 수 있다.
	
	- 메모리 할당을 하지 않으므로 속도가 빠르다

	

	*/
	// 5년전에 네오플에서 나왔던 문제

	/*
	공고

	우대 사항
	뭐할 줄 아는사람
	뭐 해본 사람
	*/


	/*
	복습하기
	- 따라쳐보기
	- 많이 사용해보기
	
	*/
}