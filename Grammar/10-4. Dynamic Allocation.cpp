#include <iostream>
using namespace std;

int abab = 0; // 전역 변수

void func(int a)
{

}

void main()
{
	{
		int a = 0; //지역 변수
	}

	/*동적 할당 : 런타임 중에 메모리 할당
	
	int* pAlloc = (int*)malloc(sizeof(int));
	*pAlloc = 20;

	free(pAlloc);

	정적 할당 : 컴파일 단계에서 메모리 할당
	*/

	/*
	C 문법
	int* pAlloc = (int*)malloc(sizeof(int));
	*pAlloc = 20;

	cout << *pAlloc;
	free(pAlloc);
	*/
	
	/*
	C++ 문법
	int* pAlloc = new int;
	delete pAlloc;

	C++ 배열 동적 할당 / 해제
	int* pAllocList = new int[10];
	delete[] pAllocList;
	*/

	/*int* pAlloc = (int*)malloc(sizeof(int) * 10);
	pAlloc[0] = 20;*/
	int* pAlloc = new int;
	//free(pAlloc);
}

/*
메모리 영역
코드 영역
- 실제 프로그램의 코드가 올라가는 영역
스택 영역
- 지역변수, 매개변수
힙 영역
- 동적할당된 변수
데이터 영역
- 전역 변수

전역 변수
- 외부변수, static 변수, external
프로그램이 처음 시작될 때 할당
프로그램이 종료되는 순간에 해제

동적할당된 변수
우리가 동적할당 시키는 순간 할당
우리가 해제 시키는 순간 해제

지역변수
중괄호가 실행되는 순간 할당
중괄호가 끝나는 순간 해제
*/

/*
숙제
학생관리프로그램

동적할당을 이용하여 가변배열 만들기

1. 동적 할당된 배열에다가 값을 넣는다.
2. 배열이 꽉차면 새로운 배열의 크기를 동적할당한다.
3. 기존 배열의 값을 옮기고 기존 배열을 해제 시킨다.

*/

/*
리스트 자료구조
struct
{
  front
  back
}

배열 자료구조
{
	count;// 현재 저장된 카운트
	maxCount; // 현재 저장된 카운트가 max보다 크거나 같으면 확장
}
*/