#include <iostream>
#define SIZE 100 // 정의하는 용도
using namespace std;

void main()
{
	/*
	상수 : 변하지 않는 수 
	변수 : 변하는 수
	
	- 바꾸지마라! - 누군가가 실수로 바꾸지 못하게 막기 위함

	c++ 98/11 - 2000년대 초반 혹은 90년대 문법
	c++ version up

	modern c++ - c++14 이후부터 붙인 명칭
	현대적인 c++
	*/

	const int num = 10; // 상수 - 컴파일 단계에서 만들어짐
	constexpr int num2 = 10; // 상수 - 컴파일 전에 만들어짐
	                         // 미리 빌드를 하여 최적화 시키는 용도
	int a = 20; // 컴파일 단계에서 만들어짐
	constexpr int constNum = 10 + 3 * 20;

	/*
	배열 - 
	int ab[constNum];
	*/

	/*
	전처리 -> constexpr -> 컴파일(어셈블) -> 링크
	*/

	/*
	비트 연산과 상수 활용

	- 게임 버프 시스템
	- 힘증가, 공격력 증가 
	
	메모리 용량을 아끼기 위함
	*/

	// 버프 목록
	//0x:16
	/*
	1.  버프 목록
		크리티컬 확률 / 크리티컬 데미지 / 명중률 / 회피율
	2. 나의 버프에 크리티컬 데미지랑 회피율만 존재
	3. 명중률 버프 존재하는지 검사하고 cout 체크 출력
	4. 나의 버프에 명중률 버프를 추가하고 cout 체크 출력
	5. 크리티컬 데미지 버프 제거 후 cout 체크 출력
	*/
	// 1,2,4,8,16,32,64,128,256,512,1024
	const int attackBuff    = 0x0001;   // 2진수 : 0000000001 /10진수 1
	const int strBuff	    = 0x0002;	// 2진수 : 0000000010 /10진수 2
	const int dexBuff       = 0x0004;	// 2진수 : 0000000100 /10진수 4
	const int intBuff       = 0x0008;   // 2진수 : 0000001000 /10진수 8
	const int defenceBuff   = 0x0010;	// 2진수 : 0000010000 /10진수 16
	//const int defenceBuff = 0x0020;	// 2진수 : 0000100000 /10진수 32
	//const int defenceBuff = 0x0040;	// 2진수 : 0001000000 /10진수 64
	//const int defenceBuff = 0x0080;	// 2진수 : 0010000000 /10진수 128
	//const int defenceBuff = 0x0100;	// 2진수 : 0100000000 /10진수 256
	//const int defenceBuff = 0x0200;	// 2진수 : 1000000000 /10진수 512

	int myBuff = attackBuff | intBuff; // 버프 값 넣기 atackBuff + intBuff = 01001

	//01001 & 01000 = 01000
	bool checkBuff = myBuff& intBuff; // attackBuff 버프 검사
	cout << "현재 공격력 버프 존재해? : " << checkBuff << endl;

	/*
	 01001
	^01000

	  00001    
	 ^01000
	  01001

	 XOR: on/off
	*/

	myBuff ^= intBuff; // 버프 제거

	cout << "현재 지능 버프 존재해? : " << checkBuff << endl;
	checkBuff = myBuff & intBuff;
	cout << "현재 지능 버프 존재해? : " << checkBuff << endl;

	/*
	| & ^

	<<, >>
	*/
}