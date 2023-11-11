#include <iostream>
#include "library.h"
//네임스페이스 : 이름 영역
/*
이름 중복을 우회하기 위해서 사용한다.

1. 네임스페이스::기능 형태
    std::cout
2. using namespace std; 해당 cpp에서는 std 네임스페이스 쓸거라고 선언
3. using std::cout; std에 있는 특정 기능만 사용할 거라고 선언
*/

using namespace std;

namespace A
{
	void func() // 함수
	{
		cout << "A 네임 스페이스에서 출력" << endl;
	}
}

using namespace A;
//using namespace B;

void func()
{

}



namespace B
{
	void func() // 함수
	{
		cout << "B 네임 스페이스에서 출력" << endl;
	}
}

void main()
{
	//::func(); // namespace에 속하지 않은 기능을 쓰겠다.
	//A::func();
	//c++ 문자열 출력

	//cout << "안녕하세요." << "호호" << "하하" << endl;

	//:: namespace

	/*
	cout << 
	*/

	Player::Attack();

	/*
	h파일 만들기
	원하는 namespace 이름 붙이고
	안에 함수 만들어서 상황 만들어보기
	*/
}