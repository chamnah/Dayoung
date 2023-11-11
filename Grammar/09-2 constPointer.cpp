#include <iostream>
using namespace std;

void main()
{
	int a = 20;
	int b = 30;
	/*
	const int* pA = &a;
	int const* pA = &a;
	*pA = 50; X 원본 값 수정 불가
	pA = &b;  O 접근 대상은 변경 가능
	*/

	/*
	int const* pA = &a;
	*pA = 50; X 원본 값 수정 불가
	pA = &b;  O 접근 대상은 변경 가능
	*/

	/*
	int* const pA = &a;
	*pA = 50; O 원본값 수정 가능
	pA = &b;  X 대상 변경 불가능
	*/

	/*
	const int* pA = &a;
	pA = &b;
	pA = 200; // 대상을 변경하여도 대상 값 수정은 불가능 하다.
	*/

	/*
	정보처리기사 - 국가기관 sds
	게임 프로그래밍 전문가 자격증 (공인) - 회사x
	*/
}