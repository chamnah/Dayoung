#include <iostream>
using namespace std;

enum class Test2Type
{
	NONE,
	APPLE = 5,
	PEAR,
	PINEAPPLE
};

enum Type
{
	NONE,
	ROCK,
	SICCORS,
	PAPER
};

/*
ROCK = 1
SICCORS = 2
PAPER = 3

PAPER ROCK 이김
3   -   1  = 2 이김

PAPER SICCORS 짐
3   -   2 = 1 짐

SICCORS ROCK
2    -    1 짐

SICCORS   PAPER
2     -     3   2 이김
  
ROCK   SICCORS
1    -     2 1 짐

ROCK    PAPER
1    -     3 2 이김

if( == -2 && == 2)
{
	이김
}
*/

void main()
{
	/*
	type casting : 형변환
	*/

	/*
	C 스타일 - 강제 형변환 / 무엇이든 형변환 가능
	(자료형)변수
	ex (int)intNum;

	float intNum = 0;
	short num = (short)intNum;

	C++ 스타일 - 오류를 검출하여 조금 더 안전하게 형변환
	static_cast : 묵시적 형변환을 명시적으로 시키는 형변환
	dynamic_cast : 클래스의 부모 자식 간에 관계를 형변환 시켜준다. 
	const_cast : const를 제거하는 캐스팅을 해준다. - const를 넣기도 가능
	 - 이거는 왠만하면 사용 안하는게 좋다.
	reinterpret_cast : 강제 형변환
	 - 사용을 잘 하는게 좋지만, 형을 알 수가 없는 경우
	*/
	
	float intNum = 0;
	short num = static_cast<short>(intNum);

	int testNum = static_cast<int>(Test2Type::APPLE); // C++ 
	int testNum = (int)(Test2Type::APPLE); // C


	int input;
	cin >> input;
	
	sizeof(int); // 4byte

	/*
	숙제
	
	switch - rand

	가위 바위 보

	1. 내가 숫자를 입력하여 가위, 바위, 보중에 하나를 낸다.
	2. 컴퓨터는 rand를 이용하여 가위, 바위, 보 중에 하나를 선택한다.
	3. 두개의 값을 비교하여 내가 이겼다. 졌다. 비겼다. 등의 상태 메시지를 출력한다.
	4. 최대한 배운것을 토대로 해보는 게 좋다.(rand, switch 등)
	*/



	/*
	
	*/
}